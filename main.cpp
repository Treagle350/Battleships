#include <iostream>
#include <conio.h>
#include "Battlefield.h"
#include "Puppet.h"
#include <cmath>

using namespace std;

int main()
{
  int x = 20;
  int y = 20;

  int x2 = -1;
  int y2 = -1;

  char n = 'a';

  int seed = 0;

  int tick = 0;
  int previousTick = 0;

  int enemyX;
  int enemyY;

  int direction;

  Battlefield * field = new Battlefield(x,y);
  field->print();

  Puppet * tank = new Puppet(x,y);

    while((tank->collision(tank->get_x(),tank->get_y(),x2,y2) > 0)||(tank->collision(tank->get_x(),tank->get_y(),enemyX,enemyY))){
        if(tick==15){
          seed = tank->generateSeed(tank->get_Arraysize());
        }
        if(tick==previousTick){
          seed = seed + 1;
          Puppet * enemy = new Puppet(x,y,"enemy");
          int previous_x = enemy->get_x();
          int previous_y = enemy->get_y();
          //enemyX = tank->accessPathX(seed);
          //enemyY = tank->accessPathY(seed);
          //enemy->set_coordinates(enemyX,enemyY,x,y);
          field->update(enemy->get_x(),enemy->get_y(),enemy->get_blockSprite(),previous_x,previous_y);
          field->print();
        }
        n=_getch();
        if(n=='z')
        {
          tick = tick + 1;
          int previous_x = tank->get_x();
          int previous_y = tank->get_y();
          direction = tank->moveUp(x,y);
          field->update(tank->get_x(),tank->get_y(),tank->get_blockSprite(),previous_x,previous_y);
          field->print();
          previousTick = previousTick + 1;
        }
        if(n=='q')
        {
          tick = tick + 1;
          int previous_x = tank->get_x();
          int previous_y = tank->get_y();
          direction = tank->moveLeft(x,y);
          field->update(tank->get_x(),tank->get_y(),tank->get_blockSprite(),previous_x,previous_y);
          field->print();
          previousTick = previousTick + 1;
        }
        if(n=='s')
        {
          tick = tick + 1;
          int previous_x = tank->get_x();
          int previous_y = tank->get_y();
          direction = tank->moveDown(x,y);
          field->update(tank->get_x(),tank->get_y(),tank->get_blockSprite(),previous_x,previous_y);
          field->print();
          previousTick = previousTick + 1;
        }
        if(n=='d')
        {
          tick = tick + 1;
          int previous_x = tank->get_x();
          int previous_y = tank->get_y();
          direction = tank->moveRight(x,y);
          field->update(tank->get_x(),tank->get_y(),tank->get_blockSprite(),previous_x,previous_y);
          field->print();
          previousTick = previousTick + 1;
        }
        if(n=='k')
        {
          tick = tick + 1;
          Puppet * projectile = new Puppet((tank->get_x()),(tank->get_y()),x,y);
          int previous_x = projectile->get_x();
          int previous_y = projectile->get_y();
          switch(direction){
            case 0:
              projectile->moveDown(x,y);
              break;
            case 1:
              projectile->moveUp(x,y);
              break;
            case 2:
              projectile->moveLeft(x,y);
              break;
            case 3:
              projectile->moveRight(x,y);
              break;
            default:
              break;
          }
          field->update(projectile->get_x(),projectile->get_y(),"|O|",previous_x,previous_y);
          field->print();
          x2 = projectile->get_x();
          y2 = projectile->get_y();
          previousTick = previousTick + 1;
        }
    }
    field->gameOver();
    tank->~Puppet();
    //~Puppet();
    return 0;
}
