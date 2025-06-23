//
// Created by cuihs on 2025/6/6.
//

#include "Game.h"
#include <thread>
#include "UserInput.h"

void Game::init() {
    srand(time(nullptr));//初始化随机数种子
    map = MapCtrl(60,20);
    snake = Snake(map.get_height(),map.get_width());
    food = Food(map.get_height(),map.get_width());
    render.render(map, snake, food);
}
void Game::start() {
    init();

    const int tick = 200;//时间戳

    while (! is_over()) {
        update();//执行一个时间戳的逻辑
        std::this_thread::sleep_for(std::chrono::milliseconds(tick));

    }
    //游戏结束提示
    std::cout << "Game Over!" << std::endl;
    std::cout << "Length = " << snake.get_body().size() << std::endl;
    std::cout << "Score = " << snake.get_body().size() - 3 << std::endl;//初始长度为3
}


void Game::update() {
    // 处理用户输入
    UserInput::process_input(snake);
    //蛇先移动
    snake.move();
    //判断是否吃到食物
    if (snake.get_head() != food.get_food_pos()) {
        snake.remove_tail(); // 没吃到食物，移除蛇尾
    } else {
        // 吃到食物，生成新的食物
        food.create_new_food(snake, map);
    }
    //判断是否发生碰撞
    collide();
    //结果重新渲染
    render.render(map,snake,food);
}

void Game::collide() {
    //碰撞蛇身
    auto head = snake.get_head();
    auto body = snake.get_body();
    for (size_t i = 1; i < body.size(); ++i) {//从1开始跳过蛇头本身
        if (head == body[i]) {
            over = true;
            return;
        }
    }
    //碰撞边界
    if (head.first < 0 || head.second < 0 || head.first >= map.get_height() || head.second >= map.get_width()) {
        over = true;
        return;
    }
}






