#include <iostream>
#include <conio.h>
#include "Battlefield.h"
#include "Puppet.h"

using namespace std;

int main()
{
    int dimensionX;
    int dimensionY;
    dimensionX = 20;
    dimensionY = 20;

    Battlefield * battlefield = new Battlefield(dimensionX, dimensionY);

    Puppet * tank = new Puppet(dimensionX,dimensionY);
    std::string enemyBlockSprite = tank->get_enemyBlockSprite();
    int coordinatesX = tank->get_coordinatesX();
    int coordinatesY = tank->get_coordinatesY();

    battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);

    char n = 'a';

    while(tank->get_health() > 0){
        n=_getch();
        if(n=='z')
        {
            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveUp(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
        if(n=='q')
        {
            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveLeft(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
        if(n=='s')
        {
            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveDown(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
        if(n=='d')
        {
            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveRight(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
    }
    std::cout << "Game Over !" << std::endl;
    //~Puppet();
    return 0;
}
