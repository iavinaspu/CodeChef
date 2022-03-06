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
    int X{0};
    cin >> X;

    if(X+3<=10){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

}