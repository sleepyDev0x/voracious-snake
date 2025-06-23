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
    dir = Right;
}

std::pair<int,int> Snake::get_head() const {
    return body.back(); // 蛇头在末尾
}

void Snake::move() {
    auto head = body.back(); // 获取当前蛇头
    auto offect = get_offect(dir);
    std::pair<int,int> new_head = {head.first + offect.first,head.second + offect.second};
    body.push_back(new_head);//新增头部到末尾
}

void Snake::remove_tail() {
    if (!body.empty()) {
        body.pop_front(); // 移除蛇尾（在开头）
    }
}

bool Snake::occupies(int x, int y) const {
    for (const auto& node : body) {
        if (node.first == x && node.second == y)
            return true;
    }
    return false;
}
