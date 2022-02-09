#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int T{0};
cin >> T;

while(T--){
    int x, y;
    cin >> x >> y;

    if(x/2<y){
        cout << x / 2 << endl;
    }
    else{
        cout << y << endl;
    }
}
}