#include<bits/stdc++.h>
using namespace std;
#define ll long long

//Chebyshev distance - interesting part!!
// also need to know
// vectical/column - (n-1)^2 + 1 + row-1
// horizontal/row  - n^2 - (col-1)

void solve(){
    int row, col;
    cin>>row>>col;
    int layer = max(row,col);
    if(layer%2 == 1) swap(row,col);

    if(col == layer){
        cout<<(long long)(layer-1)*(layer-1) + 1+ row-1<<endl;
    }else{
        cout<<(long long) layer*layer - (col-1)<<endl;
    }
}


int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}