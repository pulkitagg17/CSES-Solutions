#include<bits/stdc++.h>
using namespace std;

main(){
    int n;
    cin>>n;

    int ttl = (n*(n+1))/2;
    
    while(n>1){
        int temp;
        cin>>temp;
        ttl-=temp;
        n--;
    }
    
    cout<<ttl;
}