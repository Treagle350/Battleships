#include "Puppet.h"

Puppet::Puppet(int coordX, int coordY){
    health = 100;
    attackingPower = 50;
    enemyBlockSprite = "|^|";
    set_coordinates(coordX/2,coordY/2,coordX,coordY);
}
std::string Puppet::get_enemyBlockSprite()
{
    return enemyBlockSprite;
}
int Puppet::get_coordinatesY()
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
int Puppet::get_coordinatesX()
{
    return coordinatesX;
}
void Puppet::set_coordinates(int posX,int posY,int x,int y){
    if(posX <= x && posY <= y && posX >= 0 && posY >= 0){
        coordinatesX = posX;
        coordinatesY = posY;
    }else{
        substract_health(100);
    }
}
void Puppet::moveUp(int x, int y){
    enemyBlockSprite = "|^|";
    coordinatesX = coordinatesX + 0;
    coordinatesY = coordinatesY - 1;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
void Puppet::moveDown(int x, int y){
    enemyBlockSprite = "|v|";
    coordinatesX = coordinatesX + 0;
    coordinatesY = coordinatesY + 1;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
void Puppet::moveLeft(int x, int y){
    enemyBlockSprite = "|<|";
    coordinatesX = coordinatesX - 1;
    coordinatesY = coordinatesY + 0;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
void Puppet::moveRight(int x, int y){
    enemyBlockSprite = "|>|";
    coordinatesX = coordinatesX + 1;
    coordinatesY = coordinatesY - 0;
    set_coordinates(coordinatesX,coordinatesY,x,y);
}
/*
void Puppet::attack(){
    hp = get.targetHealth();
    hp = hp - attackingPower;
    set.targetHealth(hp);
}
*/
Puppet::~Puppet(){

}
