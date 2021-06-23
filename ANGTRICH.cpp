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

if((a+b>c || b+c>a || a+c>b) && a+b+c==180 && a>0 && b>0 && c>0){
    cout << "YES";
} 
else{
    cout << "NO";
}
return 0;
}