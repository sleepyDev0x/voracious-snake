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
    Food(int width,int height) {generate_food(height,width);}//生成随机Food坐标

    void generate_food(int width,int height);//不加const，因为改变了成员变量food_pos的值
    void generate_new_food(int width,int height);//Food被吃后重新生成

public:
    pair<int,int> food_pos;//食物位置坐标

};



#endif //FOOD_H
