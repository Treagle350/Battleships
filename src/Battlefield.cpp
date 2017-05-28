#include "Battlefield.h"
#include <iostream>
#include <cstdlib>

Battlefield::Battlefield(int x,int y){
    this->x = x;
    this->y = y;

    tileBlockSprite = "|_|";
    initialize();
}

void Battlefield::initialize(){
    field = new int*[y];
    for(int i = 0; i<y; i++){
        field[i] = new int[x];
    }
}
int Battlefield::get_y()
{
    return y;
}
int Battlefield::get_x()
{
    return x;
}
void Battlefield::clearScreen(){
    system("cls");
}
void Battlefield::draw(int cox,int coy,std::string sprite){
    clearScreen();
    int coordinatesX = cox;
    int coordinatesY = coy;
    std::string enemyBlockSprite = sprite;

    for(int i = 0; i<y; i++){
            for(int j = 0; j<x; j++){
                if(i==coordinatesY&&j==coordinatesX){
                    std::cout << enemyBlockSprite;
                }else{
                    std::cout << tileBlockSprite;
                }
            }
            std::cout << std::endl;
    }
}

Battlefield::~Battlefield(){
    //dtor
}
