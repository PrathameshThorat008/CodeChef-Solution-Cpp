// https://www.codechef.com/problems/ATM2
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;

            if (k < ai)
                cout << 0;
            else
            {
                k -= ai;
                cout << 1;
            }
        }
        cout << endl;
    }

    return 0;
}