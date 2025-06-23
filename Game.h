//
// Created by cuihs on 2025/6/6.
//

#ifndef GAME_H
#define GAME_H

#include "Snake.h"
#include "Food.h"
#include "Renderer.h"
#include <thread>
#include <conio.h>

//管理游戏流程：初始化、循环、判胜负
class Game {
public:
    Game() : map(60,20),snake(map.get_height(),map.get_width()),food(map.get_width(),map.get_height()),render(),over(false){}

    void init();//游戏初始化

    void update();//每隔一段时间蛇位置向前移动

    void collide();//碰撞检测

    bool is_over()const {return over;}//游戏是否结束

    void start();//游戏主循环


private:
    bool over;
    Snake snake;
    Food food;
    MapCtrl map;
    Renderer render;
};



#endif //GAME_H
