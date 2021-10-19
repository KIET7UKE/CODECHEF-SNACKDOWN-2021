#include<bits/stdc++.h>
#define mx(a) *max_elements(all(a))
#define mn(a) *min_element(all(a))
#define ll long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vi vector <int>
#define pii vector<pair<int,int>>
#define vv vector <vec>
#define vs vector <string>
#define vc vector <char>
#define pi 3.141592653589793238
#define mod 1000000007
#define Mod 998244353
#define inf 1e16
#define precise(i) fixed << setprecision(10) << i
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define one cout<<-1<<endl;
#define err1(a)  cout<<#a<<" "<<a<<endl;
#define err2(a,b) cout<<#a<<" "<<a<<" "<<" "<<#b<<" "<<b<<endl;
#define err3(a,b,c) cout<<#a<<" "<<a<<" "<<" "<<#b<<" "<<b<<" "<<#c<<" "<<c<<endl;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(a) a.begin(),a.end()
#define show(a) for(auto xyz:a)cout<<xyz<<" ";cout<<endl;
#define show_n1(a) for(auto xyz:a)cout<<xyz<<endl;
#define loop(a) for(auto xyz:a)
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=b;i>=a;i--)
const long double eps = 1e-8;
const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,1,0,-1};
#define lb lower_bound
#define ub upper_bound
using namespace std;


void solve(){
    int ind =0, eng =0;

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i = 0; i < 5; i++){
        if (arr[i] == 1){
            ind++;
        }
        else if (arr[i] == 2){
            eng++;
        }
    }
    if (ind > eng){
        cout << "INDIA" << endl;
    }
    else if (eng > ind){
        cout << "ENGLAND" << endl;
    }
    else cout << "DRAW" << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        fastio
        ll t; cin >> t;
        while(t--){
            solve();
        }
}