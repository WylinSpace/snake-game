# 🐍 Terminal Snake Game

A minimalist **Snake Game** that runs entirely in your **terminal**, powered by the **ncurses** library.  
Control the snake with your keyboard, eat berries to grow longer, and try not to crash into yourself — simple, classic, and surprisingly fun.

---

## 🎮 Features
- **Real-time movement** using non-blocking keyboard input  
- **Dynamic screen rendering** with `ncurses`  
- **Berry spawning system** for scoring and growth  
- **Toroidal (wrap-around) map** — move off one edge, reappear on the other  
- **Two display styles:**  
  - Straight (default)  
  - Bending snake body using Unicode line characters  
- Compact **8x8 grid**, easy to modify in code

---

## 🧩 Controls

| Key | Action |
|:---:|:--------|
| ↑ / ↓ / ← / → | Move the snake |
| q | Quit the game |

---

## ⚙️ Compilation & Run

```bash
g++ -o snake snake.cpp -lncursesw
./snake
```

## 🧠 How It Works

- The game grid and snake body are stored in 2D arrays.
- Movement logic updates the snake’s position every frame (0.3s delay).
- Eating a berry increases the snake’s length (score).
- The display is redrawn each frame using mvaddch() for smooth animation.

## 💡Future Ideas

- Add collision detection for self-hit (Game Over)
- Dynamic difficulty (faster movement over time)
- Customizable grid size and themes
- High score tracking