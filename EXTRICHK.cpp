#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int a, b, c;
cin >> a >> b >> c;

if(a+b>c && b+c>a && a+c>b){
    if (a == b && b == c && a == c)
    {
        cout << "1";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "2";
    }
    else if (a != b && b != c && a != c)
    {
        cout << "3";

    }    
}
else
    {
        cout << "-1";
    }

return 0;
}