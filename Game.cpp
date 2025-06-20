//
// Created by cuihs on 2025/6/6.
//

#include "Game.h"

void Game::init() {
    srand(time(nullptr));//初始化随机数种子
    map = MapCtrl(10,5);
    snake = Snake(map.get_height(),map.get_width());
    food = Food(map.get_height(),map.get_width());
    render.render(map, snake, food);
}

void Game::update() {
    //蛇先移动
    snake.move();
    //判断是否吃到食物
    if (snake.get_head() != food.get_food_pos()) {snake.get_body().pop_back();}//未吃到食物，删除尾部
    //判断是否发生碰撞
    collide();
    //重新生成食物
    food.create_new_food(snake,map);
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
    if (head.first < 0 || head.second < 0 || head.first >= map.get_width() || head.second >= map.get_height()) {
        over = true;
        return;
    }
}







