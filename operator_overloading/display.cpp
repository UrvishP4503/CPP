#include <iostream>

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        std::cout << real << "+i" << img << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &out, Complex &c);
};

std::ostream &operator<<(std::ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img << std::endl;
    return out;
}

int main()
{
    Complex c(10, 5);

    std::cout << c << std::endl;

    operator<<(std::cout, c);
}