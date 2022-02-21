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

    if(X>65){
        cout << "Overload " << endl;
    }
    else if(X<35){
        cout << "Underload" << endl;
    }
    else{
        cout << "Normal" << endl;
    }
}
}