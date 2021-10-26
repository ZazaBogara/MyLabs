#include <iostream>
#include <math.h>
#include <string.h>

class Fighter
{
public:
    std::string Name;
    int Health;
    int DamagePerAttack;
    Fighter(std::string objectName, int objectHealth, int objectdamagePerAttack)
    {
        this->Name = objectName;
        this->Health = objectHealth;
        this->DamagePerAttack = objectdamagePerAttack;
    }
};

class Fight
{
public:

    void FightTwoGuys(Fighter fighter1, Fighter fighter2)
    {
        while (fighter1.Health>=0 and fighter2.Health >= 0)
        {
            fighter1.Health -= fighter2.DamagePerAttack;
            fighter2.Health -= fighter1.DamagePerAttack;
        }
        if (fighter1.Health <= 0) 
        {
            std::cout << "Winner is: " << fighter2.Name;
            delete &fighter1; //так виглядає смерть!!!
        }
        else
        {
            std::cout << "Winner is: " << fighter1.Name;
            delete& fighter2; //так виглядає смерть!!!
        }
    }
};
int main()
{
    Fighter fighter1("Jonson", 10, 1);
    Fighter fighter2("Zack", 4, 4);
    Fight fight;
    fight.FightTwoGuys(fighter1, fighter2);
}
