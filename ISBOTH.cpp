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

if (N % 5 == 0 && N % 11 == 0)
{
    cout << "BOTH"<< "\n";
}
else if(N%5==0 || N%11==0){
        cout << "ONE"
             << "\n";
}
else{
    cout << "NONE"
         << "\n";
}
}