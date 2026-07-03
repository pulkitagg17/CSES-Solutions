#include<bits/stdc++.h>
using namespace std;

main(){
    long long n;
    cin>>n;

    long long ttl = (n*(n+1))/2;
    
    while(n>1){
        long long temp;
        cin>>temp;
        ttl-=temp;
        n--;
    }
    
    cout<<ttl;
}