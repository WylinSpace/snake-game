//g++ -o snake snake.cpp -lncursesw
#include "main.hpp"

int main() {
    Draw();

    while (running) {
        Input();
        Logic();
        Load();
        usleep(300000); // 0.3s delay
        frame++;
    }

    endwin(); // restore terminal
    return 0;
}
