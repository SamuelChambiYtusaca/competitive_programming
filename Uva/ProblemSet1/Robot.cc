#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
#define print(x) for(auto a:x){cout << a << " ";}cout << "\n"
#define dbg(x) cerr << (#x) << " is " << (x) << endl
#define input(arr,x) for(int i = 0; i < x; ++i) cin >> arr[i]
#define all(x) x.begin(),x.end()
const int MAX = 1e6+1;
const int MIN = -1e4-1;
int TT = 1;


int main(){
    cin >> TT;
    for(int i = 0; i < TT; ++i){
        int ins; cin >> ins;
        vi it(ins+1, 0);
        int pos = 0;
        for(int j = 1; j <= ins; j++){
            string move; cin >> move;
            if(move == "LEFT") it[j] = -1;
            else if(move == "RIGHT") it[j] = 1;
            else{
                string trsh; cin >> trsh;
                int mov; cin >> mov;
                it[j] = it[mov];
            }
        }
        pos += accumulate(all(it),0);
        cout << pos << endl;
    }
 
    return 0;
}