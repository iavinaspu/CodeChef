#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int N, x;
cin >> N;

vector<int> v;
for (int i = 0; i < N;i++){
    cin >> x;
    v.push_back(x);
}

for (auto it = v.rbegin(); it != v.rend(); it++)
    cout << *it << " ";
}
