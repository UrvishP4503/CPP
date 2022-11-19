#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 {10,20};
    vector<int> v2 {100,200};
    vector<vector<int>> v2d; 
    v2.push_back(v1.at(0));
    v2.push_back(v1.at(1));
    for (auto i : v2)
        cout<<i<<endl;
    v2d.push_back(v1);
    v2d.push_back(v2);
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1.size(); j++)
        {
            cout<<v2d.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}