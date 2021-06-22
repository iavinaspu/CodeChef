#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int N, K;
cin >> N >> K;

int arr[N];
for (int i = 0; i < N;i++){
    cin >> arr[i];
}
int flag = 0;
for (int i = 0; i < N;i++){
    if(arr[i]==K){
        flag = 1;
    }
    else{
        continue;
    }
}
if(flag==1){
    cout << "1"
         << "\n";
}
else{
    cout << "-1"
         << "\n";
}
return 0;
}