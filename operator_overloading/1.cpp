#include <iostream>

class Test
{
public:
    int a;
    int b;
    Test(int a = 0,int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    Test operator+(Test x);
};
/**
 * @brief operator overloading 
 * 
 * @param x 
 * @return Test 
 */
Test Test::operator+(Test x)
{
    Test temp;
    temp.a = a + x.a;
    temp.b = b + x.b;
    return temp;
}

int main()
{
    Test a(12,43),b(18,7),c;
    c = a + b;
    std::cout<<c.a<<" "<<c.b;
    return 0;
}