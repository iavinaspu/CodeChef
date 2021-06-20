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
    int arr[N];
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < N;i++){
        sum += arr[i];
    }

    if(sum%2==0){
        cout << "1" << endl;
    }
    else{
        cout << "2" << endl;
    }
    
}
}