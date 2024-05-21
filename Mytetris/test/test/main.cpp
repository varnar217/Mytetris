
#include "GameEngine.h"
#include <conio.h>
#include <iostream>
using namespace sf;

int main()
{
    //int x = 5;
    //int y = ++x + x++;
    //std::cout << x << y << std::endl;
    //std::cin.get();
    auto myGame = std::make_unique<GameEngine>();

    myGame->run();

    return 0;
}



