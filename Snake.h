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

//deque：头(front)为蛇头，尾(back)为蛇尾
class Snake {
public:
    Snake(int height,int width);//游戏开始时蛇的初始化

    void move();//根据当前方向更新位置信息，move之后蛇长度+1，后续再判断是否真的+1了
    void remove_tail();//移除蛇尾，用于未吃到食物时

    bool occupies(int x,int y) const;

    std::pair<int,int> get_head() const;
    std::deque<std::pair<int,int>>& get_body() {return body;}
    const std::deque<std::pair<int,int>>& get_body() const {return body;}
    Direction get_dir() const {return dir;}

    void set_direction(Direction d);

private:
    std::deque<std::pair<int,int>> body;//每一节身体用(x,y)表示
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
