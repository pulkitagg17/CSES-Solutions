#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=s.size();
    int cur=1;
    int maxi = 1;
    for(int i=1 ; i<n ; i++){
        if(s[i] == s[i-1]) cur++, maxi=max(maxi, cur);
        else cur=1;
    }
    cout<<maxi;

    return 0;
}