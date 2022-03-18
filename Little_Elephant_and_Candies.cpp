// https://www.codechef.com/problems/LECANDY
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int curr;
            cin >> curr;
            total += curr;
        }
        if (total <= c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}