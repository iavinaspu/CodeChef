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
    int n{0};
    cin >> n;

    if(n%4==0){
        cout << "GOOD" << endl;
    }
    else{
        cout << "NOT GOOD" << endl;
    }
}
}