#include <iostream>
#include "game.h"

using namespace std;


void equip_test1(Character *c1){
    c1 = new Armor(c1);
    c1 = new Boots(c1);
    c1 = new Sword(c1);
    cout << c1->getDescription() 
            << " | Attack: " << c1->getAttack()
            << " | Speed: " << c1->getSpeed()
            << " | Defense: " << c1->getDefense() << endl;
}
void equip_test2(Character *c1){
    c1 = new Armor(c1);
    c1 = new Bow(c1);
    cout << c1->getDescription() 
            << " | Attack: " << c1->getAttack()
            << " | Speed: " << c1->getSpeed()
            << " | Defense: " << c1->getDefense() << endl;
}
void equip_test3(Character *c1){
    c1 = new Boots(c1);
    c1 = new Staff(c1);
    cout << c1->getDescription() 
            << " | Attack: " << c1->getAttack()
            << " | Speed: " << c1->getSpeed()
            << " | Defense: " << c1->getDefense() << endl;
}

int main() {
    cout << "-------------------------------------------------------------" << endl;
    Character* knight = new Knight();
    equip_test1(knight);
    equip_test2(knight);
    equip_test3(knight);
    delete knight;
    cout << "-------------------------------------------------------------" << endl;

    Character* wizard = new Wizard();
    equip_test1(wizard);
    equip_test2(wizard);
    equip_test3(wizard);
    delete wizard;
    cout << "-------------------------------------------------------------" << endl;

    Character* archer = new Archer();
    equip_test1(archer);
    equip_test2(archer);
    equip_test3(archer);
    delete archer;
    cout << "-------------------------------------------------------------" << endl;

    return 0;
}