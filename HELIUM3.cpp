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
    int A{0}, B{0}, X{0}, Y{0};
    cin >> A >> B >> X >> Y;

    if(X*Y>=A*B){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}
}