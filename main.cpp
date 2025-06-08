//
// Created by cuihs on 2025/6/6.
//

#include <iostream>
#include "Food.h"
#include "Game.h"
#include "Renderer.h"
#include "Snake.h"
#include "UserInput.h"



int main() {
    // Game game;
    // game.start();
    MapCtrl map(60,20);
    Snake snake;
    Food food;
    Renderer rend;
    rend.render(map,snake,food);


    return 0;
}


