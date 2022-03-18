// https://www.codechef.com/problems/TLG
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int p1[n], p2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p1[i];
        cin >> p2[i];
    }

    int p1_lead = 0, p2_lead = 0, p1_top = INT_MIN, p2_top = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        p1[i] += (i == 0) ? 0 : p1[i - 1];
        p2[i] += (i == 0) ? 0 : p2[i - 1];

        if ((p1[i] - p2[i]) > (p2[i] - p1[i]))
            p1_lead += p1[i] - p2[i];
        else if ((p2[i] - p1[i]) > (p1[i] - p2[i]))
            p2_lead += p2[i] - p1[i];

        p1_top = max(p1_top, p1[i] - p2[i]);
        p2_top = max(p2_top, p2[i] - p1[i]);
    }

    if (p1_lead > p2_lead)
        cout << 1 << " " << p1_top;
    else if (p1_lead < p2_lead)
        cout << 2 << " " << p2_top;
    return 0;
}