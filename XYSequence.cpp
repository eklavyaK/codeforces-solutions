#include<bits/stdc++.h>
#define removezeros(s) s.erase(0,s.find("1")!=-1?s.find("1"):s.length()-1)
#define binary(n,k) bitset<k>(n).to_string()
#define makeset(s,c,sizeofc) for(int i = 0; i<sizeofc; i++){s.emplace_back(c[i]);while(i+1<sizeofc && c[i+1]==c[i])i++;}
typedef long long ll;
typedef long double ld;
void Y(){std::cout<<"YES"<<std::endl;}
void N(){std::cout<<"NO"<<std::endl;}
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.precision(28);cin.tie(NULL);
    int tc;cin>>tc;
    while(tc-->0){
        int n,b,x,y;cin>>n>>b>>x>>y;
        ll track = 0, sum = 0;
        for(int i = 0; i<n; i++){
            if(x+track>b){
                track-=y;
                sum+=track;
            }
            else{
                track+=x;
                sum+=track;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}