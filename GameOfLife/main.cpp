#include "Game.h"

int main() {
    Game game;

    game.loadGrid("grid.txt");

    for (int i = 0; i < 5; i++) {
        cout << "Generation " << i + 1 << endl;
        game.display();
        game.nextGeneration();
        cout << endl;
    }

    game.saveToFile("output.txt");

    return 0;
}
