// https://www.codechef.com/problems/TEMPLELA
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n % 2 > 0 && arr[0] == 1 && arr[n - 1] == 1)
        {

            int is = 1;
            for (int i = 0; i < n; i++)
            {
                if (i <= n / 2)
                {
                    if (arr[i] != i + 1)
                        is = 0;
                }
                else
                {
                    if (arr[i] != arr[i - 1] - 1)
                        is = 0;
                }
            }
            if (is)
            {
                cout << "yes" << endl;
                continue;
            }
        }
        cout << "no" << endl;
    }
    return 0;
}