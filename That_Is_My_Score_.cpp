// https://www.codechef.com/problems/WATSCORE
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
        int arr[8 + 1] = {0}, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int q, score;
            cin >> q >> score;

            if (q > 0 && q < 9)
            {
                if (arr[q] == 0)
                {
                    sum += score;
                    arr[q] = score;
                }
                else if (arr[q] < score)
                {
                    sum -= arr[q];
                    arr[q] = score;
                    sum += arr[q];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}