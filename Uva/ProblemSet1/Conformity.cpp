#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
#define print(x) for(auto a:x){cout << a << " ";}cout << "\n"
#define dbg(x) cerr << (#x) << " is " << (x) << endl
#define input(arr,x) for(int i = 0; i < x; ++i) cin >> arr[i]
const int MAX = (1e6)+1;
const int MIN = -1e4-1;
int TT = 1;

void solve(){
    int n; 
    while(true){
        cin >> n;
        if(!n) break;
        map<vi , int> reps;
        for(int i = 0; i < n; ++i){
            vi aux(5);
            input(aux,5);
            sort(all(aux));
            reps[aux]++;
        }
        int ans = MIN;
        for(auto vec : reps){
            ans = max(vec.second , ans);
        }
        int times = 0;
        for(auto vec : reps){
            if(vec.second == ans) times++; 
        }
        cout << ans*times << endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}