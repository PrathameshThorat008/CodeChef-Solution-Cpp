// https://www.codechef.com/problems/KTTABLE
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, total = 0;
        cin >> n;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        if (b[0] <= a[0])
            total++;

        for (int i = 1; i < n; i++)
        {
            if ((a[i] - a[i - 1]) >= b[i])
            {
                total++;
            }
        }
        cout << total << endl;
    }
    return 0;
}