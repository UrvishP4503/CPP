#include <bits/stdc++.h>
#include "hp.h"
void show_num()
{
    std::cout<<Player::get_num_player()<<std::endl;
}
int main()
{
    Player Urvish{"BabaJi"};

    Player Yash{"Geni",150,12};

    Player *enemy = new Player("Smit",150,69);

    show_num();

    enemy->Print("Hi lord geni");
    delete enemy;
    Yash.Hit(101);
    Yash.Show_HP();
    Yash.Heal(50);
    Yash.Show_HP();
    Yash.Hit(202);
    show_num();
    
    if (Yash.IsDead())
        {
            std::cout<<"Geni has been killed by smit"<<std::endl;
            Yash.~Player();
        }
    show_num();

}