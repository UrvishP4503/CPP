#include <bits/stdc++.h>
using namespace std;

float tex_count(long in,float tex = 0.15)
{
    return in*tex;
}

void print(int data)
{
    cout<<endl<<data<<endl;
}
void print(double data)
{
    cout<<endl<<data<<endl;
}
void print(char data)
{
    cout<<endl<<data<<endl;
}
void print(string data)
{
    cout<<endl<<data<<endl;
}
void print(vector<int> data)
{
    for (auto i : data)
        cout<<i<<" ";
}
void print(vector<string> data)
{
    for (auto i : data)
        cout<<i<<" ";
}

int main()
{
    long income1{1000000},income2{3000000};
    cout<<"For an income for "<<income1<<" is "<<tex_count(income1)<<endl;
    cout<<"For an income for "<<income2<<" is "<<tex_count(income2,0.30)<<endl;
    print(12);
    print(12.322);
    print('A');
    string a {"Urvish Patel"};
    print(a);
    vector<int> ab{1,2,34,56,78};
    print(ab);
    vector<string> bc{"Urvish","Patel"};
    print(bc);
    return 0;
}