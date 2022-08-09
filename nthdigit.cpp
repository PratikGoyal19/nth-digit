#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fd = n / 10;
    int sd = n % 10;

    if (n <= 9)
    {
        cout << n;
    }
    else if (sd % 2 == 0)
    {
        cout << (fd + 1) / 2;
    }
    else
    {
        if (fd % 2 != 0)
        {
            cout << sd - (sd + 1) / 2;
        }
        else
        {
            cout << sd - (sd + 1) / 2 + 5;
        }
    }

    return 0;
}
