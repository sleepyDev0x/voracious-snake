//
// Created by cuihs on 2025/6/6.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <deque>


class Snake {
public:
    Snake(int height,int width);//游戏开始时蛇的初始化
    std::pair<int,int> get_head() const;//返回蛇头部位置
    void move(bool could_eat);//根据当前方向更新位置信息

public:
    std::deque<std::pair<int,int>> body;//每一节身体用(x,y)表示，body[0]是蛇尾，body.back()是蛇头
    std::pair<int,int> corrent_dir;//当前方向:上(-1,0) 下(1,0) 左(0,-1) 右(0,1)

};



#endif //SNAKE_H
