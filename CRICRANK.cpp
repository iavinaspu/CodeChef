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
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;

    int f1 = 0;
    int f2 = 0;

    if(a>x){
        f1++;
    }
    else{
        f2++;
    }

    if (b > y)
    {
        f1++;
    }
    else
    {
        f2++;
    }

    if (c > z)
    {
        f1++;
    }
    else
    {
        f2++;
    }

    if (f1 > f2)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
    }
}
return 0;
}