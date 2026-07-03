#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n;
    cin>>n;

    ll ans=0;
    vector<ll> arr(n);
    for(ll i=0 ; i<n ; i++) cin>>arr[i];

    for(ll i=1;i<n ; i++){
        if(arr[i-1]>arr[i]){
            ll temp = abs(arr[i]-arr[i-1]);
            arr[i]+=temp;
            ans+=temp;
        }
    }
    cout<<ans;

    return 0;
}