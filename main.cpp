#include <iostream>
#include <conio.h>
#include "Battlefield.h"
#include "Puppet.h"

using namespace std;

int main()
{

    Battlefield * battlefield = new Battlefield(20, 20);
    int x = battlefield->get_x();
    int y = battlefield->get_y();

    Puppet * tank = new Puppet(10,10);
    std::string enemyBlockSprite = tank->get_enemyBlockSprite();
    int coordinatesX = tank->get_coordinatesX();
    int coordinatesY = tank->get_coordinatesY();

    battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);

    char n = 'a';
    char b = 'a';
    char v = 'a';
    char c = 'a';

    while(tank->health > 0){
            n=_getch();
        while(n='w')
        {
            n=_getch();

            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveUp(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
        b=_getch();
        while(b='a')
        {
            b=_getch();

            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveLeft(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
        v=_getch();
        while(v='s')
        {
            v=_getch();

            int x = battlefield->get_x();
            int y = battlefield->get_y();
            tank->moveDown(x,y);
            int coordinatesX = tank->get_coordinatesX();
            int coordinatesY = tank->get_coordinatesY();
            std::string enemyBlockSprite = tank->get_enemyBlockSprite();
            battlefield->draw(coordinatesX,coordinatesY,enemyBlockSprite);
        }
        c=_getch();
        while(c='d')
        {
            c=_getch();

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
