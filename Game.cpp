//
// Created by cuihs on 2025/6/6.
//

#include "Game.h"

void Game::update() {
    bool could_eat;
    if (snake.get_head() == food.food_pos) {
        could_eat = 1;
    }
    snake.move(could_eat);

    if (could_eat) {//判断此次move是否将Food吃了
        //food已被吃则重生
        food.generate_new_food();
    }

    render.render();//更新显示
}
