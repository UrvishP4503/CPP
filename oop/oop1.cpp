#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
    string name;

public:
    void Set_username(string username) { name = username; }
    void Print(string text_to_print) { cout << name << ": " << text_to_print << endl; }

};


int main()
{
    Player Urvish;
    Urvish.Set_username("BabaJi");

    Player Yash;
    Yash.Set_username("Geni");

    Urvish.Print("Hi geni ");

    Player *enemy = new Player;
    enemy->Set_username("Smit");
    enemy->Print("Hi lord geni");


    delete enemy;
    return 0;
}