#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define reverse(v) reverse(v.begin(), v.end()) // Reverse a container
#define sort(v) sort(v.begin(), v.end())       // Sort a container
#define reverse_sort(v) sort(v.begin(), v.end(), greater<int>())
#define pi 3.141592653589793238462
#define vec vector<long long int>
#define input(v)      \
    for (auto &x : v) \
        cin >> x;
#define display(v)        \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl;
const long long MOD = 1e9 + 7;
long long string_to_int(string bin);
void sieve_of_eratosthenes(int n, vector<bool> &arr);
long long gcd(long long a, long long b);
bool isPrime(long long n);
void yes() { cout << "YES"
                  << "\n"; }
void no() { cout << "NO"
                 << "\n"; }

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        v[i] += (i + 1);
    }
    sort(v);
    int res = 0;
    while (res<n && (c -= v[res]) >= 0)
    {
        ++res;
    }
    cout << res << endl;
}

int main()
{
    ios;
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
