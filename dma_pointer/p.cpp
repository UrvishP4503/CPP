#include <bits/stdc++.h>
using namespace std;

int main()
{
    int in{12}, *ptr{nullptr};
    double dd{2396532.5004}, *ptrd{nullptr};
    long ll{340298353}, *ptrl{nullptr};
    string ss{"BabaJi"}, *ptrs{nullptr};

    ptr = &in;
    ptrd = &dd;
    ptrl = &ll;
    ptrs = &ss;

    cout << *ptr << endl;
    cout << *ptrd << endl;
    cout << *ptrl << endl;
    cout << *ptrs << endl;

    return 0;
}