#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int A, B, C;
cin >> A >> B >> C;

int mx = max({A, B, C});
int mn = min({A, B, C});

vector<int> v{A, B, C};
for (int i = 0; i < v.size();i++){
    if(v[i]==mx){
        continue;
    }
    else if(v[i]==mn){
        continue;
    }
    else{
        cout << v[i];
    }
}
    return 0;
}