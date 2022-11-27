#ifndef _HP_H_
#define _HP_H_
#include<bits/stdc++.h>
class Player
{
private:
    int HP {150};
    std::string name;
    int xp;
    static int num_player;
public:
    void Heal(int IncomingHeal);
    void Hit(int Damage);
    bool IsDead();
    void Show_HP(); 
    void Print(std::string text_to_print) { std::cout << name << ": " << text_to_print << std::endl; }
    static int get_num_player();
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
    ~Player();
};

#endif