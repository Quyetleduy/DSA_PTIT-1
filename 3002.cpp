#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '6')
                a[i] = '5';
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '6')
                b[i] = '5';
        }
        cout << stol(a) + stol(b) << " ";

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '5')
                a[i] = '6';
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '5')
                b[i] = '6';
        }
        cout << stol(a) + stol(b) << " ";

    }
}