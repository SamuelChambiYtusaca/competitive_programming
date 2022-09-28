#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
#define print(x) for(auto a:x){cout << a << " ";}cout << "\n"
#define dbg(x) cerr << (#x) << " is " << (x) << endl
#define input(arr,x) for(int i = 0; i < x; ++i) cin >> arr[i]
const int MAX = 1e6+1;
const int MIN = -1e4-1;
int TT = 1;


int main(){
    int n,b,h,w;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> n >> b >> h >> w){
        ll ans = MAX;
        for(int i = 0; i < h; i++){
            int price; cin >> price;
            for(int j = 0; j < w; j++){
                int av; cin >> av;
                if(av>=n) ans=min(n*price*1LL, ans);
            }
        }
        if(ans > b) cout << "stay home\n";
        else cout << ans << endl;
    }

 
    return 0;
}