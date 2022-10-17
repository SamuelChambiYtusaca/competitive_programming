#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    int size;
    while(cin >> size && size != EOF){
        bool ans = 1;
        vi arr(size);
        input(arr,size);
        vi use(size,0);
        for(int i = 0 ; i < size - 1 ; i++){
            int diff = (abs(arr[i] - arr [i+1]));
            if(diff == 0 || diff >= size || use[diff])
                ans = 0;
            else
                use[diff]++;
        }
        for(int i = 1 ; i < size; i++) 
            ans &= use[i];
        ans? cout <<  "Jolly\n" : cout << "Not jolly\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}