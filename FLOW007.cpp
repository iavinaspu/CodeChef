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
    int N;
    cin >> N;
    string s;
    while(N!=0){
        int dig = N % 10;
        N = N / 10;
        if(s.empty() && dig==0){
            continue;
        }
        s += to_string(dig);
    }
    cout << s << "\n";
}

return 0;
}