#include <iostream>

class Rectangle
{
private:
    int len;
    int bre;

public:
    Rectangle(int r = 0, int i = 0) : len(r), bre(i){};

    int area() { return len * bre; }

    Rectangle operator+=(const Rectangle &rhs)
    {
        len += rhs.len;
        bre += rhs.bre;
        return *this;
    }

    Rectangle operator-=(const Rectangle &rhs)
    {
        len -= rhs.len;
        bre -= rhs.bre;
        return *this;
    }

    Rectangle operator*=(const Rectangle &rhs)
    {
        len *= rhs.len;
        bre *= rhs.bre;
        return *this;
    }

    bool operator==(const Rectangle &rhs) const
    {
        return len == rhs.len && bre == rhs.bre;
    }

    bool operator!=(const Rectangle &rhs) const
    {
        return !(*this == rhs);
    }

    Rectangle operator+(const Rectangle &rhs) const
    {
        return Rectangle(len + rhs.len, bre + rhs.bre);
    }

    Rectangle operator-(const Rectangle &rhs) const
    {
        return Rectangle(len - rhs.len, bre - rhs.bre);
    }

    friend std::ostream &operator<<(std::ostream &os, const Rectangle &obj)
    {
        os << "Length = " << obj.len << " Breadth = " << obj.bre;
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Rectangle &obj)
    {
        is >> obj.len >> obj.bre;
        return is;
    }
};

class Cube : public Rectangle
{
private:
    int hig;

public:
    Cube(int l = 0, int b = 0, int h = 0)
        : Rectangle(l, b), hig(h){};
    int volume() { return hig * area(); }

    Cube operator+=(const Cube &rhs)
    {
        Rectangle::operator+=(rhs);
        hig += rhs.hig;
        return *this;
    }

    Cube operator-=(const Cube &rhs)
    {
        Rectangle::operator-=(rhs);
        hig -= rhs.hig;
        return *this;
    }

    Cube operator*=(const Cube &rhs)
    {
        Rectangle::operator*=(rhs);
        hig *= rhs.hig;
        return *this;
    }

    bool operator==(const Cube &rhs) const
    {
        return Rectangle::operator==(rhs) && hig == rhs.hig;
    }

    bool operator!=(const Cube &rhs) const
    {
        return !(Rectangle::operator==(rhs) && hig == rhs.hig);
    }

    friend std::ostream &operator<<(std::ostream &os, const Cube &obj)
    {
        os << (Rectangle)obj << " Hight = " << obj.hig;
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Cube &obj)
    {
        is >> (Rectangle &)obj >> obj.hig;
        return is;
    }
};

int main()
{
    Cube a, b;

    std::cout << "Enter dimensions of first cube: ";
    std::cin >> a;

    std::cout << "Enter dimensions of second cube: ";
    std::cin >> b;

    std::cout << "First cube: " << a << std::endl;
    std::cout << "Second cube: " << b << std::endl;

    std::cout << (a == b) <<"\n";

    a += b;
    b -= a;

    std::cout<< a<<std::endl << b <<std::endl;

    return 0;
}