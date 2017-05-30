#pragma once
#include <iostream>


class Battlefield
{
    public:
        Battlefield(int x,int y);
        virtual ~Battlefield();

        std::string** update(int x, int y, std::string sprite, int previous_x, int previous_y);
        void print();

        void gameOver();

        std::string tileBlockSprite;

        int get_x();
        int get_y();
        int x;
        int y;
    protected:

    private:
        void initialize(int x,int y);
        void clearScreen();

        std::string** field;

};
