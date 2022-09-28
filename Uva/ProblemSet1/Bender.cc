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
    while(true){
        cin >> TT;
        if(!TT) break;
        int x = 1, y = 0, z = 0;
        for(int i = 0; i < TT-1; i++){
            string query; cin >> query;
            int aux;
            if(query == "No") continue;
            else if(query == "+y") 
                aux = y, y = x, x = -aux;
            else if(query == "-y") 
                aux = x, x = y, y = -aux;
            else if(query == "+z") 
                aux = x, x = -z, z = aux;
            else 
                aux = x, x = z, z = -aux;
        }
        if(x+y+z<0) cout << '-';
        else cout << '+';
        if(x) cout << 'x';
        else if(y) cout << 'y';
        else cout << 'z';
        cout << '\n';
    }
 
    return 0;
}