//
// Created by cuihs on 2025/6/6.
//

#include "Food.h"

#include "MapCtrl.h"

void Food::generate_food(int width, int height) {
    //避免食物在边界（因为控制台下边界是#）
    int x = rand() % (height - 2) + 1;
    int y = rand() % (width - 2) + 1;
    this->food_pos = {x,y};
}


void Food::create_new_food(const Snake &snake, const MapCtrl& map) {
    while (1) {
        int x = rand() % (map.get_height() - 2) + 1;
        int y = rand() % (map.get_width() - 2) + 1;
        if (! snake.occupies(x,y)) {//不在蛇身上
            food_pos = {x,y};
            break;
        }
    }
}
