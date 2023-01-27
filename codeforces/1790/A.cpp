#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> inputs(n);
    string k = "314159265358979323846264338327";
    string temp;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        inputs[i] = temp;
    }
    int c;
    for(auto i: inputs)
    {
        c = 0;
        while(c<i.length() && i[c]==k[c])
            ++c;
        cout << c << endl;
    }
    return 0;
}