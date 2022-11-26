#include <bits/stdc++.h>

class Move
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; }
    int get_data() { return *data; }

    Move(int d);
    Move(const Move &source);
    Move(Move &&source) noexcept;
    ~Move();
};
Move::Move(int d)
{
    data = new int;
    *data = d;
    std::cout << "Constructor for " << d << std::endl;
}
Move::Move(const Move &source)
    : Move{*source.data}
{
    std::cout << "Deep copy for " << *data << std::endl;
}
Move::Move(Move &&source) noexcept
    : data{source.data}
{
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *data << std::endl;
}
Move::~Move()
{
    if (data != nullptr)
        std::cout<<"Freeing data "<<*data<<std::endl;
    else
        std::cout<<"Freeing data for nullptr"<<std::endl;
    delete data;
}   

int main ()
{
    std::vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
}