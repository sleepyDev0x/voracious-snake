//
// Created by cuihs on 2025/6/6.
//

#include "Food.h"

void Food::generate_food(int width, int height) {
    //避免食物在边界（因为控制台下边界是#）
    int x = rand() % (height - 2) + 1;
    int y = rand() % (width - 2) + 1;
    this->food_pos = {x,y};
}
