//Link to the problem : https://www.codechef.com/problems/CHEFWARS

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h,p;
        cin >> h >> p;
        if (h>p)
        {
            if (h-p>=p)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
        else
            cout << 1 << "\n";
    }
    return 0;
}
