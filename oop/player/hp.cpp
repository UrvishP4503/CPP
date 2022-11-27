#include "hp.h"

int Player::num_player{0};

Player::Player()
    : Player{"None", 0, 0}
{
    std::cout << "No-args constructor" << std::endl;
}

Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
{
    std::cout << "One-arg constructor" << std::endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, HP{health_val}, xp{xp_val}
{
    std::cout << "Three-args constructor" << std::endl;
    ++num_player;
}

Player::~Player()
{
    std::cout << name << " is dead" << std::endl;
    --num_player;
}
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
    std::cout << HP << std::endl;
}

int Player::get_num_player()
{
    return num_player;
} 