//
// Created by cuihs on 2025/6/6.
//

#ifndef GAME_H
#define GAME_H


//管理游戏流程：初始化、循环、判胜负
class Game {
public:
    void start();//游戏开始
    void update();//每隔一段时间蛇位置向前移动
    void reset();//重置游戏
    void situation();//判输赢

private:
    bool over = 0;//为1时游戏结束
};



#endif //GAME_H
