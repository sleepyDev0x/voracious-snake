//
// Created by cuihs on 2025/6/6.
//

#ifndef RENDERER_H
#define RENDERER_H

#include "Snake.h"
#include "Food.h"
#include "MapCtrl.h"

//将蛇、食物以及地图渲染到屏幕上
class Renderer {
public:
    Renderer(){}
    void render(const MapCtrl& map,const Snake snake,const Food& food);

};



#endif //RENDERER_H
