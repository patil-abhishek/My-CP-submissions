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
    string a;
    string b;
    cin>>a>>b;
    int n = a.length();
    int m = b.length();
    if(a[n-1]==b[m-1])
    {
        yes();
        cout<<"*"<<a[n-1]<<endl;
        return;
    }
    if(a[0]==b[0])
    {
        yes();
        cout<<a[0]<<"*"<<endl;
        return;
    }
    for(int i = 0; i<n-1; ++i)
    {
        if(b.find(a.substr(i, 2))!=string::npos)
        {
            yes();
            cout<<"*"<<a.substr(i, 2)<<"*"<<endl;
            return;
        }
    }   
    no();
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

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void sieve_of_eratosthenes(int n, vector<bool> &arr)
{
    arr[0] = false;
    arr[1] = false;
    for (int p = 2; p * p <= n; ++p)
    {
        if (arr[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                arr[i] = false;
            }
        }
    }
}

ll string_to_int(string bin)
{
    int val = 0;
    ll ans = 0;
    for (int i = bin.size() - 1; i >= 0; --i)
    {
        ans = ans + (bin[i] - '0') * pow(2, val);
        val += 1;
    }
    return ans;
}

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}