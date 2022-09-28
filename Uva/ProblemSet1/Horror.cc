#include <bits/stdc++.h>
using namespace std;
//#define apura ios::sync_with_stdio(false);
//#define compila cin.tie(NULL);
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
const int MAX = (1e6)+1;
const int MIN = -1e4-1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c; cin >> c;
    vi arr;
    for(int i = 0 ; i < c; ++i){
        int s; cin >> s;
        int maxi = MIN;
        for(int j = 0; j < s; j++){
            int aux; cin >> aux;
            maxi = max(aux,maxi);
        }
        cout << "Case " << i+1 << ": " << maxi << endl;
    }
    return 0;
}