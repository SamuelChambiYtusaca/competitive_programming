#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
#define print(x) for(auto a:x){cout << a << " ";}cout << "\n"
#define dbg(x) cerr << (#x) << " is " << (x) << endl
#define input(arr,x) for(int i = 0; i < x; ++i) cin >> arr[i]
const int MAX = 200001;
const int MIN = -1e4-1;
int TT = 1;



int main(){
    cin >> TT;
    for(int  i = 0; i < TT; ++i){
        int maxi = MIN;
        vs n(10);
        vi a(10);
        for(int j = 0; j  < 10; ++j){
            cin >> n[j];
            cin >> a[j];
            maxi = max(a[j],maxi);
        }
        vector<string>ans;
        for(int j = 0; j < 10; j++){
            if(a[j] == maxi) ans.push_back(n[j]);
        }
        cout << "Case #" << i+1 <<":\n";
        for(string a : ans) cout << a << endl;
    }
    return 0;
}