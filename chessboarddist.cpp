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
    int X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    int x = abs(X1 - X2);
    int y = abs(Y1 - Y2);

    if(x>y){
        cout << x << endl;
    }
    else{
        cout << y << endl;
    }
}
}