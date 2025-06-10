//
// Created by cuihs on 2025/6/6.
//

#include "Snake.h"

Snake::Snake(int height, int width) {
    int x = height / 2;
    int y = width / 2;//在中央生成
    body.push_back({x,y - 2});
    body.push_back({x,y - 1});
    body.push_back({x,y});//蛇头
    corrent_dir = {0,1};
}

std::pair<int,int> Snake::get_head() const {
    return body.front();
}


void Snake::move(bool could_eat) {
    if (could_eat == 1) {
        //根据蛇当前的移动方向判断食物的位置
        
    }
    else {

    }
}
