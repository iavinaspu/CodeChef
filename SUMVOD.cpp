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

long int esum{0},osum{0},cnt{0};

    for (int i = 1;;i++){
        if(i%2==0){
            osum += i;
            cnt += 1;
            if(cnt==N*2){
                break;
            }
        }
        else{
            esum += i;
            cnt += 1;
            if(cnt==N*2){
                break;
            }
        }
    }
cout << esum << " " << osum << "\n";
return 0;
}