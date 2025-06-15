//
// Created by cuihs on 2025/6/6.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <deque>

enum Direction {
    Up,
    Down,
    Left,
    Right
};

class Snake {
public:
    Snake(int height,int width);//游戏开始时蛇的初始化

    void move();//根据当前方向更新位置信息，move之后蛇长度+1，后续再判断是否真的+1了

    std::pair<int,int> get_head() const;//返回蛇头部位置
    std::deque<std::pair<int,int>> get_body() const {return body;}

private:
    std::deque<std::pair<int,int>> body;//每一节身体用(x,y)表示，body[0]是蛇尾，body.back()是蛇头
    Direction dir;
};


//方向-偏移量转换函数
inline std::pair<int,int> get_offect(Direction d) {
    switch (d) {
        case Direction::Up : return {-1,0};
        case Direction::Down : return {1,0};
        case Direction::Left : return {0,-1};
        case Direction::Right : return {0,1};
    }
    return {0 ,0};
}

#endif //SNAKE_H
