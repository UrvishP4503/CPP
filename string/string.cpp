#include <bits/stdc++.h>
using namespace std;

int main()
{
    string b{"Banana"};
    string m{"Minions"};
    string tem = m + " likes " + b + ".";
    cout << tem << endl;

    string sen{};
    getline(cin, sen);
    vector<char> result;

    for (char i : sen)
    {
        if (islower(i))
        {
            result.push_back(i);
            result.push_back(i);
        }
        else if (isupper(i))
        {
            result.push_back(i);
            result.push_back(i);
            result.push_back(i);
        }
        else
            result.push_back(' ');
    }
    cout << endl;
    for (auto i : result)
        cout << i;

    return 0;
}