//
// Created by cuihs on 2025/6/8.
//

#ifndef MAPCTRL_H
#define MAPCTRL_H


//管理后台地图，区别于Rendderer,后者主要是渲染功能
class MapCtrl {
public:
    MapCtrl(int w,int h) : width(w),height(h){}

    bool is_inside(int w,int h) const;//判断是否在边界内

    int get_width() const {return width;}
    int get_height() const {return height;}

private:
    int width,height;//地图长宽
};



#endif //MAPCTRL_H
