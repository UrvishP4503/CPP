#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "P-Print members" << endl
         << "A-Add number" << endl
         << "L-Maximum" << endl
         << "S-Smallest" << endl
         << "M-Mean" << endl;
    vector<int> v{12, 32, 54, 22, 42};
    char con{};
    do
    {
        cout << "Enter choice ";
        cin >> con;
        switch (con)
        {
        case 'p':
        case 'P':
        {
            cout << endl
                 << "[ ";
            for (auto i : v)
                cout << i << " ";
            cout << "]" << endl;
            break;
        }
        case 'a':
        case 'A':
        {
            int num{};
            cout << "Enter a number ";
            cin >> num;
            v.push_back(num);
            cout << endl;
            break;
        }
        case 'l':
        case 'L':
        {
            int max{INT_MIN};
            for (auto i : v)
                if (i > max)
                    max = i;
            cout << endl
                 << "Max =" << max << endl;
            break;
        }
        case 's':
        case 'S':
        {
            int min{INT_MAX};
            for (auto i : v)
                if (i < min)
                    min = i;
            cout << endl
                 << "Min =" << min << endl;
            break;
        }
        case 'm':
        case 'M':
        {
            double mean{}, sum{};
            for (auto i : v)
                sum += i;
            cout << endl
                 << "Mean =" << (sum / static_cast<int>(v.size()));
            cout << endl;
            break;
        }
        default:
            break;
        }
    } while (con != 'q' && con != 'Q');
    cout << "Goodbye" << endl;
    v.clear();
    return 0;
}