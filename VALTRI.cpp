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

if(N%5==0 || N%6==0){
    cout << "YES"
         << "\n";
}
else{
    cout << "NO"
         << "\n";
}
}