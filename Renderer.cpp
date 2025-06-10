//
// Created by cuihs on 2025/6/6.
//

#include "Renderer.h"

#include <vector>

//渲染思路：将信息存储到一个string类型的数组中，这个数组实际上是二维的，将数组打印出即可
void Renderer::render(const MapCtrl &map, const Snake snake, const Food &food) {
    //存储信息的二维数组
    std::vector<std::string> board(map.height,std::string(map.width,' '));

    //地图 - 加边框#
    for (int i = 0; i < map.width; ++i) {//上下边框
        board[0][i] = '#';
        board[map.height - 1][i] = '#';
    }
    for (int j = 0; j < map.height; ++j) {//左右边框
        board[j][0] = '#';
        board[j][map.width - 1] = '#';
    }

    //绘制蛇的位置"O & o"
    for (int i = 0; i < snake.body.size(); ++i) {
        int x = snake.body[i].first;
        int y = snake.body[i].second;
        board[x][y] = (i == snake.body.size() - 1) ? 'O' : 'o';//蛇头用O，其余用o
    }
    //绘制食物的位置"*"
    board[food.food_pos.first][food.food_pos.second] = '*';

    system("cls");//清屏

    //将数组打印出来即可
    for (auto i : board) {
        std::cout << i << endl;
    }
}
