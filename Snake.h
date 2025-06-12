//
// Created by cuihs on 2025/6/6.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <deque>


class Snake {
public:
    Snake(int height,int width);//游戏开始时蛇的初始化

    void move();//根据当前方向更新位置信息

    std::pair<int,int> get_head() const;//返回蛇头部位置
    std::deque<std::pair<int,int>> get_body() const {return body;}
    std::pair<int,int> get_corrent_dir() const {return corrent_dir;}

private:
    std::deque<std::pair<int,int>> body;//每一节身体用(x,y)表示，body[0]是蛇尾，body.back()是蛇头
    std::pair<int,int> corrent_dir;//当前方向:上(-1,0) 下(1,0) 左(0,-1) 右(0,1)

};



#endif //SNAKE_H
