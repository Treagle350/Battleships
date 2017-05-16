#include "Puppet.h"

Puppet::Puppet(int coordX, int coordY){
    health = 100;
    attackingPower = 50;
    enemyBlockSprite = "[^]!";
    set_coordinates(coordX,coordY,coordX/2,coordY/2);
}
std::string Puppet::get_enemyBlockSprite()
{
    return enemyBlockSprite;
}
int Puppet::get_coordinatesY()
{
    return coordinatesY;
}
int Puppet::get_coordinatesX()
{
    return coordinatesX;
}
void Puppet::set_coordinates(int posX,int posY,int x,int y){
    /*int x = get_x();
    int y = get_y();*/
    if(posX <= x && posY <= y){
        coordinatesX = posX;
        coordinatesY = posY;
    }else{
        health = 0;
    }
}
void Puppet::moveUp(int x, int y){
    enemyBlockSprite = "^";
    coordinatesX = coordinatesX + 0;
    coordinatesY = coordinatesY - 1;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
void Puppet::moveDown(int x, int y){
    enemyBlockSprite = "v";
    coordinatesX = coordinatesX + 0;
    coordinatesY = coordinatesY + 1;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
void Puppet::moveLeft(int x, int y){
    enemyBlockSprite = "<";
    coordinatesX = coordinatesX - 1;
    coordinatesY = coordinatesY + 0;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
void Puppet::moveRight(int x, int y){
    enemyBlockSprite = ">";
    coordinatesX = coordinatesX + 1;
    coordinatesY = coordinatesY - 0;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
/*
void Puppet::moveDiagonalUpRight(){
    enemyBlockSprite = ">";
    coordinatesX = coordinatesX + 1;
    coordinatesY = coordinatesY - 1;
    set.coordinates(coordinatesX,coordinatesY);
}
void Puppet::moveDiagonalUpLeft(){
    enemyBlockSprite = "<";
    coordinatesX = coordinatesX - 1;
    coordinatesY = coordinatesY - 1;
    set.coordinates(coordinatesX,coordinatesY);
}
void Puppet::moveDiagonalDownRight(){
    enemyBlockSprite = ">";
    coordinatesX = coordinatesX + 1;
    coordinatesY = coordinatesY + 1;
    set.coordinates(coordinatesX,coordinatesY);
}
void Puppet::moveDiagonalDownLeft(){
    enemyBlockSprite = "<";
    coordinatesX = coordinatesX - 1;
    coordinatesY = coordinatesY + 1;
    set.coordinates(coordinatesX,coordinatesY);
}
*//*
void Puppet::attack(){
    hp = get.targetHealth();
    hp = hp - attackingPower;
    set.targetHealth(hp);
}
*/
Puppet::~Puppet(){

}
