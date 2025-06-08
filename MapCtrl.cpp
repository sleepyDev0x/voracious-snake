//
// Created by cuihs on 2025/6/8.
//

#include "MapCtrl.h"

bool MapCtrl::is_inside(int w, int h) const {
    if (w < width && w > 0 && h < height && h > 0)
        return true;
    return false;
}
