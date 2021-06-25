#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t;
cin >> t;
while (t--)
{
    int X, Y, K;
    cin >> X >> Y >> K;
    int res = (X + Y) / K;
    if ((res+1)%2== 0)
    {
        cout << "Paja"
             << "\n";
    }
    else
    {
        cout << "Chef"
             << "\n";
    }
}

return 0;
}