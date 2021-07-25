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
    int a, b;
    cin >> a >> b;

    int res = a + b;

    if(res < 3){
        cout << "1"<< endl;
    }
    else if(res>=3 && res<=10){
        cout << "2" << endl;
    }
    else if (res>=11 && res<=60){
        cout << "3" << endl;
    }
    else if(res>60){
        cout << "4" << endl;
    }
}
return 0;
}