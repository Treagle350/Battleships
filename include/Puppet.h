#pragma once
#include <iostream>


class Puppet
{
    public:
        Puppet(int coordinatesX, int coordinatesY);
        virtual ~Puppet();

        void attack();
        void moveUp(int x, int y);
        void moveDown(int x, int y);
        void moveLeft(int x, int y);
        void moveRight(int x, int y);

        int health;
        int coordinatesX;
        int coordinatesY;

        std::string get_enemyBlockSprite();
        int get_coordinatesX();
        int get_coordinatesY();
        int get_health();

        void substract_health(int damage);

        std::string enemyBlockSprite;

        void set_coordinates(int posX, int posY, int x, int y);

    protected:

    private:

        int attackingPower;
};

