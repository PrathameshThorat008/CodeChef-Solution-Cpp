// https://www.codechef.com/problems/MSNSADM1
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int maxPts = 0;

        for (int i = 0; i < n; i++)
        {
            int pts = (a[i] * 20) - (b[i] * 10);
            maxPts = max(maxPts, pts);
        }

        cout << maxPts << endl;
    }
    return 0;
}