#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p, sl, l; cin >> p >> sl >> l;
    map<int,int> snakes;
    map<int,int> ladders;
    for(int i = 0; i < sl; i ++)
    {
        int a,b; cin >> a >> b;
        a > b ? snakes[a] = b : ladders[a] = b;
    }
    vector<int> players(p, 1);
    int load = 0;
    for(int i = 0; i < l; ++i){
        int a; cin >> a;
        if(load || !p) continue;
        players[i%p] += a;
        if(snakes[players[i%p]])
            players[i%p] = snakes[players[i%p]];
        if(ladders[players[i%p]])
            players[i%p] = ladders[players[i%p]];
        if(players[i%p] >= 100){   
            players[i%p] = 100;
            load = 1;
        }    
            
    }
    for(int i = 0; i < p; ++i)
        printf("Position of player %d is %d.\n", i+1, players[i]);
}

int main(){
    int TT; cin >> TT;
    for(int i = 0; i < TT ; i++)
        solve();

    return 0;
}