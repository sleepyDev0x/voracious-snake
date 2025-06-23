#include <conio.h>
#include "Snake.h"

//处理用户输入，并将输入信息传递给蛇or游戏
class UserInput {
public:
    // 读取用户输入并设置蛇的方向
    static void process_input(Snake& snake) {
        if (_kbhit()) {
            char ch = _getch();
            switch (ch) {
                case 'w': snake.set_direction(Direction::Up); break;
                case 's': snake.set_direction(Direction::Down); break;
                case 'a': snake.set_direction(Direction::Left); break;
                case 'd': snake.set_direction(Direction::Right); break;
                default: break;
            }
        }
    }
}; 