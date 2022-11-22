#include <bits/stdc++.h>
using namespace std;

float tex_count(long in,float tex = 0.15)
{
    return in*tex;
}

int main()
{
    long income1{1000000},income2{3000000};
    cout<<"For an income for "<<income1<<" is "<<tex_count(income1)<<endl;
    cout<<"For an income for "<<income2<<" is "<<tex_count(income2,0.30)<<endl;
    return 0;
}