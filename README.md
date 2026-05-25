# Conway's Game of Life — C++

A console-based implementation of Conway’s Game of Life developed in C++ using Object-Oriented Programming (OOP), file handling, and 2D vectors.

---

## Overview

Conway’s Game of Life is a cellular automaton created by mathematician John Conway. The simulation evolves generation by generation based on a set of simple rules applied to cells on a grid.

This project demonstrates:
- OOP concepts in C++
- File handling
- 2D vector manipulation
- Simulation logic
- Console-based visualization

---

## Features

- Load grid from text file
- Generate next generations automatically
- Save final output to file
- Console visualization of live/dead cells
- Modular code structure using classes

## Rules of the Game
<br>
Each cell interacts with its eight neighbors using the following rules:
<br>
- Any live cell with fewer than 2 live neighbors dies.
- Any live cell with 2 or 3 live neighbors survives.
- Any live cell with more than 3 live neighbors dies.
- Any dead cell with exactly 3 live neighbors becomes alive.

---

## Technologies Used

- C++
- STL (Vectors)
- File Handling
- Object-Oriented Programming

---
## Example Input(grid.txt) 
<br> 
5 5 
<br>
0 1 0 0 1
<br>
1 0 1 0 0
<br>
0 1 0 1 1
<br> 
1 1 0 0 0
<br>
0 0 1 1 0
<br>

## Project Structure

```plaintext
cpp-game-of-life/
│
├── main.cpp
├── Game.cpp
├── Game.h
├── grid.txt
├── output.txt
├── README.md
