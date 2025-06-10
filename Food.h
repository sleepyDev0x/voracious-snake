//
// Created by cuihs on 2025/6/6.
//

#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <utility>

using namespace std;
//随机生成事物位置，被蛇吃掉后重新生成
class Food {
public:
    bool is_eatten();//判断蛇头是否在食物的位置
    void genetate_food();//随机生成食物

    pair<int,int> food_pos;//食物位置坐标


};



#endif //FOOD_H
