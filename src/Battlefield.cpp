#include "Battlefield.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

Battlefield::Battlefield(int x,int y){
    this->x = x;
    this->y = y;

    tileBlockSprite = "|_|";
    initialize(x,y);
}

void Battlefield::initialize(int x,int y){
    field = new std::string*[y];
    for(int i = 0; i<y; i++){
        field[i] = new std::string[x];
    }

    for(int i = 0; i<y; i++){
            for(int j = 0; j<x; j++){
                    field[j][i]=tileBlockSprite;
                }
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
std::string** Battlefield::update(int x, int y, std::string sprite, int previous_x, int previous_y){
    int xlim = get_x();
    int ylim = get_y();

    if( x<xlim && y<ylim && x>0 && y>0 ){
      field[previous_x][previous_y] = "| |";
      field[x][y] = sprite;
      return field;
    }else{
      return 0;
    }
}
void Battlefield::print(){
    clearScreen();
    system("COLOR 0A");
    int xlim = get_x();
    int ylim = get_y();

    for(int i = 0; i<ylim; i++){
            for(int j = 0; j<xlim; j++){
                    std::cout << field[j][i];
                }
            std::cout << std::endl;
    }
}
void Battlefield::gameOver()
{
    clearScreen();
    std::cout <<"$$$$$$$                          $$ "<< std::endl;
    std::cout <<"$$  __$$                         $$ |"<< std::endl;
    std::cout <<"$$ |  $$|  $$$$$$    $$$$$$  $$$$$$ |"<< std::endl;
    std::cout <<"$$ |  $$| $$  __$$   \____$$ $$ __$$ |"<< std::endl;
    std::cout <<"$$ |  $$| $$$$$$$$| $$$$$$$|$$/  $$ |"<< std::endl;
    std::cout <<"$$ |  $$| $$   __| $$ __$$ |$$|  $$ |"<< std::endl;
    std::cout <<"$$$$$$$ | \$$$$$$$\  \$$$$$$$ |\$$$$$$$ |"<< std::endl;
    std::cout <<"\_______/  \_______|  \_______| \_______|"<< std::endl;
}
Battlefield::~Battlefield(){
    //dtor
}
