#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v {1,2,3,4,5,6,7};
    size_t n = v.size();
    for (size_t i = 0; i < n; i++)
    {
        v.at(i)=i;
        cout<<v.at(i);
    }
    
return 0;
}   