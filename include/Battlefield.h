#pragma once
#include <iostream>


class Battlefield
{
    public:
        Battlefield(int x,int y);
        virtual ~Battlefield();

        int** field;

        void draw(int cox,int coy,std::string sprite);

        std::string tileBlockSprite;

        void clearScreen();

        int get_x();
        int get_y();
        int x;
        int y;
    protected:

    private:
        void initialize();

};

