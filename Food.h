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


    Food(int height,int width) {generate_food(height,width);}//生成随机Food坐标

    void generate_food(int height,int width);//不加const，因为改变了成员变量food_pos的值

public:
    pair<int,int> food_pos;//食物位置坐标

};



#endif //FOOD_H
