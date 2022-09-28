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

void wave(int a){
    for(int i = 1 ; i <= a; i++){
        for(int j = 1; j<= i; j++)
            cout << i;
        cout << endl;
    }   
    for(int i = a-1; i >= 1; i--){
        for(int j = 1; j<= i; j++)
            cout << i;
        cout << endl;
    }
}

int main(){
    cin >> TT;
    for(int i = 0; i < TT; ++i){
        int a,b; cin >> a >> b;
        for(int j = 0; j < b; j++){
            wave(a);
            if(j!=b-1) cout << endl;
        }
        if(i!=TT-1) cout << endl;    
    }
 
    return 0;
}