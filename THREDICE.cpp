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

while(t--){
    int x, y;
    cin >> x >> y;

    double sum = 6 - (x + y);
    double res = sum / 6;

    cout << setprecision(6) << res << endl;
}
return 0;
}