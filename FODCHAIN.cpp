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
    int e, k;
    cin >> e >> k;

    int cnt = 1;
    while(1){
        int res = floor(e / k);
        if(res!=0){
            e = res;
            cnt += 1;
            continue;
        }
        else{
            break;
        }
    }

    cout << cnt << endl;
}
}