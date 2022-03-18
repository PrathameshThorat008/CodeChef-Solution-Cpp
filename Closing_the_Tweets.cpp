// https://www.codechef.com/problems/TWTCLOSE
#include <iostream>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;

    int tweets[n] = {0}, opened = 0;

    for (int i = 0; i < k; i++)
    {
        string str;
        int x;
        cin >> str;

        if (str == "CLOSEALL")
        {
            opened = 0;
            for (int j = 0; j < n; j++)
                tweets[j] = 0;
        }
        else
        {
            cin >> x;
            if (tweets[x - 1] == 0)
            {
                tweets[x - 1] = 1;
                opened++;
            }
            else
            {
                tweets[x - 1] = 0;
                opened--;
            }
        }
        cout << opened << endl;
    }

    return 0;
}