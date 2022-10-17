#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int TT = 1;
    cin >> a >> b;
    if(!a && !b) return 1;
    while (true)
    {
        
        vector<string> tab(a);
        for(int i = 0; i < a; ++i) cin >> tab[i];
        map<pair<int,int>, int> counts;
        for(int i = 0 ; i < a; ++i)
            for(int j = 0; j < b; ++j)
            {
                if(tab[i][j] == '*'){
                    counts[{i-1,j-1}]++;
                    counts[{i-1,j}]++;
                    counts[{i-1,j+1}]++;
                    counts[{i,j-1}]++;
                    counts[{i,j+1}]++;
                    counts[{i+1,j-1}]++;
                    counts[{i+1,j}]++;
                    counts[{i+1,j+1}]++;
                }
            }
        printf("Field #%d:\n", TT);
        for(int i = 0 ; i < a; ++i){
            for(int j = 0; j < b; ++j)
                tab[i][j] == '*' ? cout << '*' : cout << counts[{i,j}];
            cout << '\n';
        }
        cin >> a >> b;
        if(!a && !b) break;
        cout << '\n';
        TT++;
    }
    
    return 0;
}