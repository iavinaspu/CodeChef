#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int N;
cin >> N;

vector<int> v;
int cnt = 0;
for (int i = 1; i <=N;i++){
    if(N%i==0){
        cnt += 1;
        v.push_back(i);
    }

}
cout << cnt << "\n";

for (int i = 0; i < v.size();i++){
    cout << v.at(i) << " ";
}

return 0;
}