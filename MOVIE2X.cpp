#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int x{0}, y{0};
cin >> x >> y;

int first = y / 2;
int second = x - y;

int res = first + second;
cout << res << endl;
}