#include <bits/stdc++.h>
using namespace std;
int TT = 1;

string add(string a, string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string ans ;
    int i = 0;
    int llevo = 0;
    for(; i < min(a.size(), b.size()); ++i){
        int aux = (a[i] - '0') + (b[i] - '0');
        aux+=llevo;
        llevo = 0;
        if(aux >= 10){
            aux %= 10;
            llevo = 1;
        }
        ans.push_back(aux + '0'); 
    }
    if(a.size() > b.size()){   
        for(;i < a.size();++i){
            int aux = (a[i] - '0');
            aux+=llevo;
            llevo = 0;
            if(aux >= 10){
                aux %= 10;
                llevo = 1;
            }
            ans.push_back(aux + '0'); 
        }
    } 
    else if(b.size() > a.size()){
        for(;i < b.size();++i){
            int aux = (b[i] - '0');
            aux+=llevo;
            llevo = 0;
            if(aux >= 10){
                aux %= 10;
                llevo = 1;
            }
            ans.push_back(aux + '0'); 
        }
    }
    if(llevo) ans.push_back(llevo + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve(){
    string a,b; cin >> a >> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string aux1 , aux2;
    int i = 0;
    while(a[i] == '0') i++;
    aux1 = a.substr(i, a.size() - i);
    i = 0;
    while(b[i] == '0') i++;
    aux2 = b.substr(i, b.size() - i);
    /*0 0 0 1 2*/
    string ans = add(aux1, aux2);
    reverse(ans.begin(), ans.end());
    i = 0;
    while(ans[i] == '0') i++;
    ans = ans.substr(i, ans.size() - i);
    cout << ans << '\n';
}

int main(){
    cin >> TT;
    for(int i = 0 ; i < TT ;++i)   
        solve();
    return 0;
}