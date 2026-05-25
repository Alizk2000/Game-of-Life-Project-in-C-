#include "Game.h"

void Game::loadGrid(string filename) {
    ifstream file(filename);
    file >> rows >> cols;

    grid.resize(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            file >> grid[i][j];
        }
    }

    file.close();
}

void Game::display() {
    for (auto row : grid) {
        for (auto cell : row) {
            cout << (cell ? "O " : ". ");
        }
        cout << endl;
    }
}

void Game::nextGeneration() {
    vector<vector<int>> newGrid = grid;

    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int liveNeighbors = 0;

            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];

                if (ni >= 0 && nj >= 0 && ni < rows && nj < cols) {
                    liveNeighbors += grid[ni][nj];
                }
            }

            if (grid[i][j] == 1 && (liveNeighbors < 2 || liveNeighbors > 3))
                newGrid[i][j] = 0;
            else if (grid[i][j] == 0 && liveNeighbors == 3)
                newGrid[i][j] = 1;
        }
    }

    grid = newGrid;
}

void Game::saveToFile(string filename) {
    ofstream file(filename);

    for (auto row : grid) {
        for (auto cell : row) {
            file << cell << " ";
        }
        file << endl;
    }

    file.close();
}
