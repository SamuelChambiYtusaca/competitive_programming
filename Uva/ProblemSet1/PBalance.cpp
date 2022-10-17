#include <bits/stdc++.h>
using namespace std;
int TT;
int i;
bool solve(){
    string line; 
    getline(cin,line);
    stack<char> pends;
    for(char a : line){
        if(a == '(' || a == '[') 
            pends.push(a);
        else if(a == ')') {
            if(pends.empty() || pends.top() != '(' ) 
                return false;
            else 
                pends.pop();
        }
        else if(a==']'){
            if(pends.empty() || pends.top() != '[')
                return false;
            else
                pends.pop();
        }
    }
    return pends.empty();
}

int main(){
    i = 0;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> TT;
    for(; i < TT+1; i++){
        bool ans = solve();
        if(ans){
            if(i)
                cout << "Yes\n";
            else 
                continue; 
        }
        else
            cout << "No\n";
    }
}