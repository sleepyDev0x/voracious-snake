//
// Created by cuihs on 2025/6/6.
//

#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <utility>
#include "Snake.h"
#include "MapCtrl.h"

//随机生成事物位置，被蛇吃掉后重新生成
class Food {
public:
    Food(int width,int height) {generate_food(height,width);}//生成随机Food坐标

    void generate_food(int width,int height);//不加const，因为改变了成员变量food_pos的值

    void create_new_food(const Snake& snake,const MapCtrl& map);//食物被吃后找新位置

    std::pair<int,int> get_food_pos() const {return food_pos;}

private:
    std::pair<int,int> food_pos;//食物位置坐标

};



#endif //FOOD_H
