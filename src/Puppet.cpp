#include "Puppet.h"
#include <chrono>
#include <thread>

Puppet::Puppet(int coordX, int coordY){
    health = 100;
    //attackingPower = 50;
    blockSprite = "|^|";
    set_coordinates(coordX/2,coordY/2,coordX,coordY);
}
Puppet::Puppet(int coordX, int coordY,std::string enemy){
    health = 100;
    //attackingPower = 50;
    blockSprite = "|X|";
    set_coordinates(coordX/2,coordY/2,coordX,coordY);
}
Puppet::Puppet(int x,int y,int coordX, int coordY){
    health = 100;
    //attackingPower = 50;
    blockSprite = "|O|";
    set_coordinates(x,y,coordX,coordY);
}
int Puppet::collision(int x1,int y1,int x2,int y2){
  if(x1==x2 && y1==y2){
    substract_health(100);
  }
  return health;
}
std::string Puppet::get_blockSprite()
{
    return blockSprite;
}
int Puppet::get_x()
{
    return coordinatesX;
}
int Puppet::get_y()
{
    return coordinatesY;
}
int Puppet::get_health()
{
    return health;
}
void Puppet::substract_health(int damage)
{
    health = health - damage;
}
void Puppet::set_coordinates(int posX,int posY,int x,int y){
    if(posX < x && posY < y && posX >= 0 && posY >= 0){
        coordinatesX = posX;
        coordinatesY = posY;
    }else{
        substract_health(100);
    }
}
int Puppet::moveUp(int x, int y){
    blockSprite = "|^|";
    direction = 1;
    coordinatesX = coordinatesX + 0;
    coordinatesY = coordinatesY - 1;
    set_coordinates(coordinatesX,coordinatesY,x,y);
    return direction;
}
int Puppet::moveDown(int x, int y){
    blockSprite = "|v|";
    direction = 0;
    coordinatesX = coordinatesX + 0;
    coordinatesY = coordinatesY + 1;
    set_coordinates(coordinatesX,coordinatesY,x,y);
    return direction;
}
int Puppet::moveLeft(int x, int y){
    blockSprite = "|<|";
    direction = 2;
    coordinatesX = coordinatesX - 1;
    coordinatesY = coordinatesY + 0;
    set_coordinates(coordinatesX,coordinatesY,x,y);
    return direction;
}
int Puppet::moveRight(int x, int y){
    blockSprite = "|>|";
    direction = 3;
    coordinatesX = coordinatesX + 1;
    coordinatesY = coordinatesY - 0;
    set_coordinates(coordinatesX,coordinatesY,x,y);
    return direction;
}
Puppet::~Puppet(){

}
