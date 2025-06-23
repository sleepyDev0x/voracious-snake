//
// Created by cuihs on 2025/6/6.
//

#include "Renderer.h"

#include <vector>

//渲染思路：将信息存储到一个string类型的数组中，这个数组实际上是二维的，将数组打印出即可
void Renderer::render(const MapCtrl &map, const Snake snake, const Food &food) {
    //存储信息的二维数组
    std::vector<std::string> board(map.get_height(),std::string(map.get_width(),' '));

    //地图 - 加边框#
    for (int i = 0; i < map.get_width(); ++i) {//上下边框
        board[0][i] = '#';
        board[map.get_height() - 1][i] = '#';
    }
    for (int j = 0; j < map.get_height(); ++j) {//左右边框
        board[j][0] = '#';
        board[j][map.get_width() - 1] = '#';
    }

    //绘制蛇的位置"O & o"
    for (int i = 0; i < snake.get_body().size(); ++i) {
        int x = snake.get_body()[i].first;
        int y = snake.get_body()[i].second;
        board[x][y] = (i == 0) ? 'O' : 'o'; // i==0 是蛇头
    }
    //绘制食物的位置"*"
    board[food.get_food_pos().first][food.get_food_pos().second] = '*';

    system("cls");//清屏

    //将数组打印出来即可
    for (auto i : board) {
        std::cout << i << std::endl;
    }
}
