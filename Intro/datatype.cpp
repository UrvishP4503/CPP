#include <bits/stdc++.h>
using namespace std;

int main()
{
    //*#define is used in old c/c++ 
    //*It is better to use const
    const double Num {333.333};
    cout<<Num<<endl;

    long Num1{123456};
    cout << Num1 << endl;

    long long Num2{12345678910};
    cout << Num2 << endl;

    //! This is an example of overflow
    int Num3 = Num1 * Num2;
    cout << Num3 << endl;

    //*This is another example of overflow
    //*make sure that datatype can fit the value.
    short a {1000}, b {2000};
    //!C can't hold this value.
    short c = a * b;
    cout << c << endl;
    return 0;
}