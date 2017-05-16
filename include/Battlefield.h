#pragma once
#include <iostream>


class Battlefield
{
    public:
        Battlefield(int x,int y);
        virtual ~Battlefield();

        int x;
        int y;

        int** field;

        void draw(int cox,int coy,std::string sprite);

        std::string tileBlockSprite;

        int get_x();
        int get_y();

    protected:

    private:
        void initialize();
};

