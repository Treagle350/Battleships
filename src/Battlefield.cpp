#include "Battlefield.h"
#include <iostream>

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
/*void Battlefield::draw(){
    for(int i = 0; i<y; i++){
        std::cout << tileBlockSprite;
            for(int j = 0; j<(x-2); j++){ //(x-1) because the last tile finishes the line
                std::cout << tileBlockSprite;
            }
        std::cout << tileBlockSprite << std::endl;
    }
}*/
void Battlefield::draw(int cox,int coy,std::string sprite){
    int coordinatesX = cox;
    int coordinatesY = coy;
    std::string enemyBlockSprite = sprite;
    /*int coordinatesY = get_coordinatesY();
    int coordinatesX = get_coordinatesX();
    std::string enemyBlockSprite = get_enemyBlockSprite();*/
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
    /*std::cout << enemyBlockSprite << std::endl;
    for(int i = coordinatesY; i<y; i++){
            for(int j = coordinatesX; j<x; j++){
            }
    }*/
}

Battlefield::~Battlefield(){
    //dtor
}
