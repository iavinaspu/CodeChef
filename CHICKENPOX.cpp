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
    int x{0}, y{0};
    cin >> x >> y;
    if(x!=y){
        cout << ((x - y) + (y * 2)) << endl;
    }
    else{
        cout << y * 2 - 1 << endl;
    }
    
}
}