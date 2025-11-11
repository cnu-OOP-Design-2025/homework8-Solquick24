#pragma

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Character {
protected:
    string description;
public:
    virtual std::string getDescription() const { return description; };
    virtual int getAttack() const = 0;
    virtual int getSpeed() const = 0;
    virtual int getDefense() const = 0;
    virtual ~Character() {}
};

class Knight : public Character {
public:
    Knight() { description = "Knight"; }
    int getAttack() const override;
    int getSpeed() const override;
    int getDefense() const override;
};

class Wizard : public Character {
public:
    Wizard() { description = "Wizard"; }
    int getAttack() const override; 
    int getSpeed() const override;
    int getDefense() const override;
};

class Archer : public Character {
public:
    Archer() { description = "Archer"; }
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

class equip_testmentDecorator : public Character {
protected:
    Character* character;
public:
    equip_testmentDecorator(Character* c) : character(c) {}
    virtual ~equip_testmentDecorator() { delete character; }
};

class Armor : public equip_testmentDecorator {
public:
    Armor(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

class Boots : public equip_testmentDecorator {
public:
    Boots(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

class Staff : public equip_testmentDecorator {
public:
    Staff(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

class Sword : public equip_testmentDecorator {
public:
    Sword(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

class Bow : public equip_testmentDecorator {
public:
    Bow(Character* c) : equip_testmentDecorator(c) { }
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};
