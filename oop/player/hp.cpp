#include "hp.h"
void Player::Heal(int IncomingHeal)
{
    if ((IncomingHeal + HP) >= 150)
        HP = 150;
    else
        HP += IncomingHeal;
}
void Player::Hit(int Damage)
{
    if ((HP - Damage) <= 0)
        HP = 0;
    else
        HP -= Damage;
}
bool Player::IsDead()
{
    if (HP == 0)
        return true;
    else
        return false;
}
void Player::Show_HP()
{
    std::cout<<HP<<std::endl; 
}