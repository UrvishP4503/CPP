#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    Player(std::string name_val = "None", int health_val = 150, int xp_val = 0);

    /**
     * @brief Construct a new Player object
     * *Copy constructor
     * @param source
     */
    Player(const Player &source);

    ~Player() { std::cout << "Called for destroying " << name << std::endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    std::cout << "Three-args constructor" << std::endl;
}

Player::Player(const Player &source)
    : name(source.name), health(source.health), xp(source.xp)
{
    std::cout << "Copy constructor made copy of:" << source.name << std::endl;
}

void Display_player(Player p)
{
    std::cout << p.get_name() << std::endl;
    std::cout << p.get_health() << std::endl;
    std::cout << p.get_xp() << std::endl;
}
int main()
{

    Player empty;
    Display_player(empty);
    Player Urvish{"Baba",150};
    Player villain{"Villain", 100, 55};

    Player My_new_Player{villain};
    Display_player(My_new_Player);

    return 0;
}
