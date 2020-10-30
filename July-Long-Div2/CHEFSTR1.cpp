/*
Link to the problem : https://www.codechef.com/JULY20B/problems/CHEFSTR1
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        long total=0;
        for(int i=0; i<n-1; i++)
        {
            total+=abs(arr[i]-arr[i+1]);
            total--;
        }
        cout << total << endl;
    }
    return 0;
}

