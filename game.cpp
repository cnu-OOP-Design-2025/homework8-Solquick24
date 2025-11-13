#include "game.h"

Character* knight = new Knight();
Character* wizard = new Wizard();
Character* archer = new Archer();

int Knight::getAttack() const {
    return 70;
}

int Knight::getSpeed() const {
    return 40;
}

int Knight::getDefense() const {
    return 80;
}

int Wizard::getAttack() const { // Wizard 클래스의 멤버함수 getAttack 정의
    return 50;
}

int Wizard::getSpeed() const { // :: 는 스코프 연산자로 클래스의 멤버함수를 정의할 때 사용
    return 50;
}

int Wizard::getDefense() const {
    return 30;
}

int Archer::getAttack() const {
    return 60;
}

int Archer::getSpeed() const {
    return 70;
}

int Archer::getDefense() const {
    return 40;
}

string Armor::getDescription() const { 
    return character->getDescription() + ", Armor";
}  // Character c; c.getDescription() 는 c가 객체 자체일 때 사용
    // Character *c = new Character() 는 c가 포인터일 때 사용  c->getDescription()

string Boots::getDescription() const {
    return character->getDescription() + ", Boots";
}

string Staff::getDescription() const {
    return character->getDescription() + ", Staff";
}


int Armor::getDefense() const {
    return character ->getDefense() + 30;
}

int Armor::getSpeed() const {
    return character -> getSpeed() - 5;
}

int Armor::getAttack() const {
    return character->getAttack();
}


int Boots::getAttack() const {
    return character->getAttack();
}

int Boots::getDefense() const {
    return character->getDefense();
}

int Boots::getSpeed() const {
    return character -> getSpeed() + 15;
}

int Staff::getAttack() const {

    if (dynamic_cast<Wizard*>(character)) {  // dynamic_cast<Wizard*> 는 character가 Wizard 타입인지 확인 (런타임에)
        // 참이면 Wizard* 타입으로 변환, 거짓이면 nullptr 반환
        return character -> getAttack() + 60;
    }

    return character -> getAttack() + 20;

}

int Staff::getSpeed() const {
    return character->getSpeed();
}

int Staff::getDefense() const {
    return character->getDefense();
}



string Bow::getDescription() const {
    return character->getDescription() + ", Bow";
}

int Bow::getSpeed() const {
    return character->getSpeed();
}

int Bow::getDefense() const {
    return character->getDefense();
}


int Bow::getAttack() const {

    if ( dynamic_cast<Archer*>(character)) {
        return character -> getAttack() + 65;
    }

    return character -> getAttack() + 25;
}


string Sword::getDescription() const {
    return character->getDescription() + ", Sword";
}

int Sword::getSpeed() const {
    return character->getSpeed();
}

int Sword::getDefense() const {
    return character->getDefense();
}

int Sword::getAttack() const {

    if ( dynamic_cast<Knight*>(character)) {
        return character -> getAttack() + 70;
    }

    return character -> getAttack() + 30;
}





