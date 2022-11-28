#include <bits/stdc++.h>
using namespace std;

class SeperateHash
{
    //* Data members are kept private
    //* since they are accessed using methods
private:
    int n;
    vector<vector<int>> v;

public:
    SeperateHash(int n)
    {
        //* Constructor to initialize
        //* the vector of vectors
        v = vector<vector<int>>(n);
        this->n = n;
    }

    int getHashIndex(int x)
    {
        return x % n;
    }

    void add(int x)
    {
        //* Adding the element according
        //* to hash index
        v[getHashIndex(x)].push_back(x);
    }

    void del(int x)
    {
        int i = getHashIndex(x);
        int t =v[i].size();

        //* Scan for the element to be removed
        for (int j = 0; j < t; j++)
        {

            //* Erase if present otherwise
            //* print no element found!
            if (v[i][j] == x)
            {
                v[i].erase(v[i].begin() + j);
                cout << x << " deleted!" << endl;
                return;
            }
        }

        cout << "No Element Found!" << endl;
    }
    void displayHash()
    {
        int t =v.size();
        //* Display the contents
        for (int i = 0; i < t; i++)
        {
            cout << i;
            int tt =v[i].size();
            for (int j = 0; j < tt; j++)
                cout << " -> " << v[i][j];
            cout << endl;
        }
    }
};

int main()
{
    int arr[] = {12, 3, 23, 4, 11, 32, 26, 33, 17, 19, 86, 101, 0, 593728, 61};

    SeperateHash obj(15);

    for (int i = 0; i < 15; i++)
        obj.add(arr[i]);

    cout << "Initial Hash:\n";
    obj.displayHash();

    cout << "\nRemoving 23 from Hash: ";
    obj.del(23);
    cout << endl;

    cout << "Final Hash:\n";
    obj.displayHash();
    return 0;
}
