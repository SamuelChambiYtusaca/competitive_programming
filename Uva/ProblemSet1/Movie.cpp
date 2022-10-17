#include <bits/stdc++.h>
using namespace std;
#define apura ios::sync_with_stdio(false);
#define compila cin.tie(NULL);
#define LSOne(S) ((S) & -(S))
#define SQ(x) (x)*(x)
#define all(x) x.begin(),x.end()
#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
#define print(x) for(auto a:x){cout << a << " ";}cout << "\n"
#define dbg(x) cerr << (#x) << " is " << (x) << endl
#define input(arr,x) for(int i = 0; i < x; ++i) cin >> arr[i]
int MAX = (1e5);
int MIN = -1e4-1;
int TT = 1;
    
    
class BIT{
    private:
        vll sum;
    public:
        BIT(int m){
            sum.assign(m+1,0);
        }

        BIT(const vll &arr){ build(arr); }

        void build(const vll &arr){
            int m = (int)arr.size()-1;
            sum.assign(m+1,0);
            for(int i = 1; i<=m; ++i)
            {   
                sum[i] += arr[i];
                if(i+LSOne(i) <= m)
                    sum[i+LSOne(i)] += sum[i];
            }
        }

        void update(int i){
            update(i,1);
        }

        void update(int i, int j){
            for(;i < (int)sum.size() ; i += LSOne(i))
                sum[i] += j;
        }

        ll rsq(int j){
            ll ans = 0;
            for(;j;j-=LSOne(j))
                ans += sum[j];
            return ans;
        }
        ll rsq(int i, int j){
            return rsq(j) - rsq(i-1);
        }
};

void solve(){
    int m,r; cin >> m >> r;
    BIT fenc_tree(m+MAX);
    for(int i = 2 ; i <= m; ++i)
        fenc_tree.update(i+MAX,1);
    vi ans;
    vi repres(m+1);
    for(int i = 1; i <= m; i++) repres[i] = i + MAX;
    int prev = MIN; int x = MAX;
    for(int i = 1; i <= r; ++i){
        int aux; cin >> aux;
        ans.push_back(fenc_tree.rsq(repres[aux]));
        fenc_tree.update(repres[aux], -1);
        fenc_tree.update(x+2-i,1);
        repres[aux] = MAX+1 - i;
    }
    for(int i = 0 ; i < ans.size() ;++i)
        cout << ans[i] << " \n"[i==ans.size()-1];
    
}

int main(){
    cin >> TT;
    for(int i = 0; i < TT ; i++)
        solve();
    return 0;
}