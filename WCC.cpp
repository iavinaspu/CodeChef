#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int T{0};
cin >> T;

while(T--){
    long int X{0};
    cin >> X;

    string s;
    getline(cin, s);

    int ccnt{0}, ncnt{0}, dcnt{0};

    for(auto it:s){
        if(it=='C'){
            ccnt++;
        }
        else if(it=='N'){
            ncnt++;
        }
        else{
            dcnt++;
        }
    }

    
    

}
}