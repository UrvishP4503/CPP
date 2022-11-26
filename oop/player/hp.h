#ifndef _HP_H_
#define _HP_H_
#include<bits/stdc++.h>
class Player
{
private:
    int HP {150};
    std::string name;
public:
    void Heal(int IncomingHeal);
    void Hit(int Damage);
    bool IsDead();
    void Show_HP();
    void Set_username(std::string username) { name = username; }
    void Print(std::string text_to_print) { std::cout << name << ": " << text_to_print << std::endl; }
    ~Player()
    {
        std::cout << name << " is dead" << std::endl;
    }
};

#endif