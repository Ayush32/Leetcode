#include <bits/stdc++.h>

using namespace std;
#define maxn 100000
int n;
int a[maxn];
int b[maxn];

int main()
{
    int k = 3, t = 7;
    for (int i = 0; i <= 14; i++)
        for (int j = 0; j <= 33; j++)
        {
            b[k * i + t * j] = 1;
        }
    b[0] = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (!b[a[i]])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}