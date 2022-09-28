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
const int MAX = (1e6)+1;
const int MIN = -1e4-1;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    while(true){
        cin >> a >> b;
        if(!a && !b) break;
        if (!a || !b)
            cout << 0 << " knights may be placed on a " << a << " row " << b << " column board.\n";
        else if(a == 1 || b == 1) 
            cout << max(a,b) << " knights may be placed on a " << a << " row " << b << " column board.\n";
        else{
            int ans;
            int max1, min1;
            max1 = max(a,b);
            min1 = min(a,b);
            if(min1==2){
                ans = 4 * ceil(max1/4) + 2 * min(2, max1%4);
            }
            else{
                ans = 0;
                ans += ((a&1) ? (a/2 + 1) : a/2 ) * ((b & 1) ? b/2 + 1 : b/2);
                ans += ((a&1) ? a - (a/2 + 1) : a - a/2) * ((b & 1) ? b - (b/2 + 1) : b - b/2); 
            }
            cout << ans << " knights may be placed on a " << a << " row " << b << " column board.\n"; 
        }
    }
    return 0;

}