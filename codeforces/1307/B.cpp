#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int a;
    int maxa = 0;
    bool eq = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == x)
            eq = true;
        maxa = max(a, maxa);
    }
    if(eq)
        cout << 1 << endl;
    else
        cout << max(2, (x + maxa - 1) / maxa) << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif
    long long t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}