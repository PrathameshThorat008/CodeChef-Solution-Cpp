// https://www.codechef.com/problems/CHEFWORK
#include <iostream>
using namespace std;


int main()
{
    int n, minPay[3] = {100000, 100000, 100000};
    cin >> n;
    int c[n], t[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 3 && minPay[2] > c[i])
            minPay[2] = c[i];
        else if (t[i] == 2 && minPay[1] > c[i])
            minPay[1] = c[i];
        else if (t[i] == 1 && minPay[0] > c[i])
            minPay[0] = c[i];
    }

    if ((minPay[0] + minPay[1]) >= minPay[2])
        cout << minPay[2];
    else
        cout << minPay[0] + minPay[1];

    return 0;
}