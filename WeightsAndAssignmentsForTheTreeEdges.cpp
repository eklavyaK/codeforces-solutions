#include<bits/stdc++.h>
#define mod 1000000007ll
#define removezeros(s) s.erase(0,s.find("1")!=-1?s.find("1"):s.length()-1)
#define binary(n,k) bitset<k>(n).to_string()
#define makeset(s,c,sizeofc) for(int i = 0; i<sizeofc; i++){s.emplace_back(c[i]);while(i+1<sizeofc && c[i+1]==c[i])i++;}
typedef long long ll;
typedef long double ld;
void Y(){std::cout<<"YES"<<std::endl;}
void N(){std::cout<<"NO"<<std::endl;}
using namespace std;
int dist[2000001],result[200001],b[200001],a[200001];
void solve(int k,int n){
	fill(dist+1,dist+n+1,0);
	bool detect=false;int c=0;
	for(int i = 2; i<=n; i++){
		if(b[a[i]]==k){
			dist[a[i]]=++c;
			result[a[i]]=c;
		}
		else{
			if(dist[b[a[i]]]==0){
				detect=true;
				break;
			}
			else{
				dist[a[i]]=++c;
				result[a[i]]=c-dist[b[a[i]]];
			}
		}
	}
	if(detect){
		cout<<-1<<endl;
	}
	else{
		for(int i = 1; i<=n; i++){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cout.precision(28);cin.tie(NULL);
	int tc;cin>>tc;
	while(tc-->0){
		int n; cin>>n; 
		for(int i = 1; i<=n; i++){
			cin>>b[i];
		}
		for(int i = 1; i<=n; i++){
			cin>>a[i];
		}
		for(int i = 1; i<=n; i++){
			if(b[i]==i){
				if(a[1]==i){
					result[i]=0;
					solve(i,n);
				}
				else cout<<-1<<endl;break;
			}
		}
	}
	return 0;
}