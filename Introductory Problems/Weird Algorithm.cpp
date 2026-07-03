#include<bits/stdc++.h>
using namespace std;

main(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }else{
            n = (n*3) + 1;
            cout<<n<<" ";
        }
    }
}

// if you want to do it in bit manipulation

while(n>1){
    cout<<n<<" "
    if(n&1) n = 3*n+1;
    else n>>=1;
}

//done