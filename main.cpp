//
// Created by cuihs on 2025/6/6.
//

#include <iostream>
#include "Food.h"
#include "Game.h"
#include "Renderer.h"
#include "Snake.h"
#include "UserInput.h"
#include <ctime>

using namespace std;

int main() {
    // Game game;
    // game.start();
    srand(time(nullptr));//初始化随机数种子
    MapCtrl map(60,20);
    Snake snake(map.height,map.width);
    Food food(map.height,map.width);
    Renderer rend;
    rend.render(map,snake,food);


    return 0;
}


