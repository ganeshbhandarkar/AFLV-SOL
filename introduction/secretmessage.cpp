#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define tc() int t; cin>>t; while(t--)
#define clr(a) memset(a,0,sizeof(a))
#define vi vector<int>
#define vll vector<long long>
#define mi map<int, int>
#define mll map<long long, long long>
#define mc map<char, int>
#define si set<int>
#define pb push_back
#define eb emplace_back
#define sz size()
#define fi first
#define se second
#define mk make_pair
#define MOD 1000000007
#define INF 1e9+1
// #define GCD(ll a,ll b) ll gcd(ll a,ll b){if(b==0){return a;} return gcd(b,b%a)}
// #define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) 

void IO(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef OJ
	freopen("C:/Users/KIIT/GITHUB/input.txt","r",stdin);
	freopen("C:/Users/KIIT/GITHUB/output.txt","w",stdout);
	#endif
}

void solve(){

	string s;
	cin>>s;
	int k = 1;
	while(k*k<s.length()){
		k++;
	}
	int x = 0;
	char c[k][k];
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			if(s[x]!='\0'){
				c[i][j]=s[x];
				x++;
			} 
			else c[i][j]='*';
		}
	}

	for(int j=0;j<k;j++){
		for(int i=k-1;i>=0;i--){
			if(c[i][j]!='*')
				cout<<c[i][j];
		}
	}
	cout<<"\n";
	
}

int main(){

	//IO();

	// solve();
	tc(){
		
		solve();

	}

	return 0;
}