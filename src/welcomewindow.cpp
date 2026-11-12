//
// Created by Victor de Paula on 11/12/26.
//

#include "welcomewindow.h"
using namespace std;


void extractConfigValues() {
    ifstream config("files/config.cfg");
    if (!config.is_open()) {
        cout << "Could not open config file" << endl;
    } else {
        unsigned int colCount;
        unsigned int rowCount;
        unsigned int mineCount;
        // if i = 0, save value to colCount - if i = 1, save to rowCount; if i = 2, save to mineCount;
        for (unsigned int i = 0; i < 3; i++) {
            if (i == 0) {
                config >> colCount;
            }
            if (i == 1) {
                config >> rowCount;
            }
            if (i == 2) {
                config >> mineCount;
            }
        }
    }
}

sf::RenderWindow RenderWelcomeWindow(unsigned int colCount, unsigned int rowCount) {
    unsigned int c = colCount;
    unsigned int r = rowCount;
    sf::RenderWindow welcomeWindow(sf::VideoMode({(r*32)+100, (c*32)} ), "Minesweeper" );
    return welcomeWindow;
}