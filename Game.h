#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Game {
private:
    vector<vector<int>> grid;
    int rows, cols;

public:
    void loadGrid(string filename);
    void display();
    void nextGeneration();
    void saveToFile(string filename);
};

#endif
