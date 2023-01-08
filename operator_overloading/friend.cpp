#include <iostream>

class Complex
{
private:
    int a;
    int b;
public:
    Complex(int a = 0,int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    void Display()
    {
        std::cout<<a<<" + "<<b<<"i \n";
    }
    friend Complex operator+(Complex o1,Complex o2);
};
/**
 * @brief 
 * 
 * @param o1 
 * @param o2 
 * @return Complex 
 */
Complex operator+(Complex o1,Complex o2)
{
    Complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    Complex a(12,44),b(88,66),c;
    c = a + b;
    c.Display();
    return 0;
}