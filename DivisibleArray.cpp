#include<bits/stdc++.h>
#define endl "\n"
#define F first
#define S second
#define int long long
typedef long long ll;
typedef long double ld;
using namespace std;



void code(){
    int n; cin>>n;
    int arr[n];
    iota(arr,arr+n,1);
    int k = (n*(n+1)/2)%n;
    if(n%2==0) arr[0] += k;
    for(auto i : arr) cout<<i<<' ';
    cout<<endl;
}

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t; while(t--)code();
    return 0;
}