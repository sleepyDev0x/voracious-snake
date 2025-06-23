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
    srand(static_cast<unsigned>(time(nullptr)));
    Game game;
    game.start();


    return 0;
}


