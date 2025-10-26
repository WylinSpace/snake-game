/*
============================================================
 Snake Game (Terminal Version with ncurses)

 Description:
   A simple terminal-based Snake game built using the ncurses
   library for real-time keyboard input and dynamic screen drawing.
   The player controls a snake that moves around an 8x8 grid,
   eating berries to grow longer while avoiding collisions
   with itself. The game wraps around boundaries for continuous
   movement. Includes smooth rendering, adjustable display mode
   (bending characters for curved body), and minimal delay for
   animation timing.

 Compilation:
   g++ -o snake snake.cpp -lncursesw

 Controls:
   ↑ / ↓ / ← / → : Move snake
   q              : Quit game

 Developer Notes:
   - Uses non-blocking input for real-time control.
   - Game logic is frame-based with 0.3s per frame.
   - Designed for easy modification of grid size or visuals.
============================================================
*/

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
