#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int N;
long long int sum = 0;
cin >> N;

for (int i = 1; i <= N;i++){
    sum += i;
}

cout << sum << "\n";
return 0;
}