// https://www.codechef.com/problems/DEPCHEF
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;

    t = (t > 0) ? t : 0;

    while (t--)
    {
        int n, best = -1;
        n = (n > 2) ? n : 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            int next = i + 1, pre = i - 1;
            if (i == n - 1)
                next = 0;
            if (i == 0)
                pre = n - 1;

            if (a[next] + a[pre] < b[i])
                best = max(best, b[i]);
        }

        cout << best << endl;
    }
    return 0;
}