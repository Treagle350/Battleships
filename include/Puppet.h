#pragma once
#include <iostream>
#include <vector>

class Puppet
{
    public:
        Puppet(int coordinatesX, int coordinatesY);
        Puppet(int coordinatesX, int coordinatesY,std::string enemy);
        Puppet(int x,int y,int coordX, int coordY);
        virtual ~Puppet();

        void shoot(int x, int y, int direction);
        int moveUp(int x, int y);
        int moveDown(int x, int y);
        int moveLeft(int x, int y);
        int moveRight(int x, int y);
        int collision(int x1, int y1, int x2, int y2);

        void fireProjectile(int x, int y,int direction, int projectileHealth,int x1, int y1, int x2, int y2);

        int health;
        int coordinatesX;
        int coordinatesY;

        int generateSeed(int sizeArraylist);
        int get_Arraysize();
        int accessPathX(int seed);
        int accessPathY(int seed);

        void set_coordinates(int posX, int posY, int x, int y);

        std::string get_blockSprite();
        int get_x();
        int get_y();
        int get_health();

        void substract_health(int damage);

        std::string blockSprite;

    protected:

    private:
        int attackingPower;
        int direction;

        int seed;

        std::vector<int> pathX;
        std::vector<int> pathY;

        void writePathX(int x1);
        void writePathY(int y1);
};
