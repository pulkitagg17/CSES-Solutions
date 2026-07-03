#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    ll n;
    cin>>n;
    if(n==1) cout<<1;
    else if(n<=3) cout<<"NO SOLUTION";
    else{
        ll odd=1;
        ll even=2;

        while(even<=n) cout<<even<<" ", even+=2;
        while(odd<=n) cout<<odd<<" ", odd+=2;
    }

    return 0;
}