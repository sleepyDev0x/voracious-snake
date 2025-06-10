//
// Created by cuihs on 2025/6/6.
//

#ifndef GAME_H
#define GAME_H

#include "Snake.h"
#include "Food.h"
#include "Renderer.h"

//管理游戏流程：初始化、循环、判胜负
class Game {
public:
    void update();//每隔一段时间蛇位置向前移动


public:
    bool over = 0;//为1时游戏结束
    Snake snake;
    Food food;
    Renderer render;
};



#endif //GAME_H
