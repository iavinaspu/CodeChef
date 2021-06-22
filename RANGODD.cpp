#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int L, R;
cin >> L >> R;

for (int i = L; i <= R;i++){
    if(i%2!=0){
        cout << i << " ";
    }
}
}