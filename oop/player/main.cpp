#include <bits/stdc++.h>
#include "hp.h"

int main()
{
    Player Urvish;
    Urvish.Set_username("BabaJi");

    Player Yash;
    Yash.Set_username("Geni");

    Player *enemy = new Player;
    enemy->Set_username("Smit");
    enemy->Print("Hi lord geni");
    delete enemy;
    Yash.Hit(101);
    Yash.Show_HP();
    Yash.Heal(50);
    Yash.Show_HP();
    Yash.Hit(202);
    if (Yash.IsDead())
        {
            std::cout<<"Geni has been killed by smit"<<std::endl;
            Yash.~Player();
        }
}