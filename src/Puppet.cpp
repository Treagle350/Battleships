#include "Puppet.h"
#include <vector>
#include <cstdlib>
#include <ctime>

Puppet::Puppet(int coordX, int coordY){
    health = 100;
    //attackingPower = 50;
    blockSprite = "|^|";
    std::vector<int> pathX;
    std::vector<int> pathY;
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
    std::cout << '\a';
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
int Puppet::generateSeed(int sizeArraylist){
    int seed = 0;
    srand(time(NULL));
    seed = rand()%sizeArraylist;
  return seed;
}
int Puppet::get_Arraysize(){
    int sizeArraylist;
    if(pathX.size()==pathY.size()){
        sizeArraylist = pathX.size();
          return sizeArraylist;
    }else{
        return 0;
    }
}
void Puppet::writePathX(int x1){
    pathX.assign(1,x1);
}
void Puppet::writePathY(int y1){
    pathY.assign(1,y1);
}
int Puppet::accessPathX(int seed){
  int x = pathX.at(seed);
  return x;
}
int Puppet::accessPathY(int seed){
  int y = pathY.at(seed);
  return y;
}
void Puppet::set_coordinates(int posX,int posY,int x,int y){
    if(posX < x && posY < y && posX >= 0 && posY >= 0){
        coordinatesX = posX;
        coordinatesY = posY;
        writePathX(posX);
        writePathY(posY);
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
