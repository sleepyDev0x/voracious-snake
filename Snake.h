//
// Created by cuihs on 2025/6/6.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <vector>


class Snake {
public:
    //游戏开始时蛇的初始化
    Snake(int height,int width);
public:
    std::vector<std::pair<int,int>> body;//每一节身体用(x,y)表示，body[0]是蛇尾，body.back()是蛇头
    std::pair<int,int> corrent_dir;//当前方向
};



#endif //SNAKE_H
