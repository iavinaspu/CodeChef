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
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int valid = A + B + C + D;
    if(valid==360){
        if(A+C==180 && B+D==180){
            cout << "YES"
                 << "\n";
        }
        else{
            cout << "NO"
                 << "\n";
        }
    }
    else{
        cout << "NO"
             << "\n";
    }
}
return 0;
}