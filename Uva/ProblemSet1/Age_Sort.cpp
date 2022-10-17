#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(true){
        cin >> n;
        if(!n)  break;
        vector<int> arr(n);
        for(int i = 0 ; i < n; ++i) cin >> arr[i];
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < n ;++i)
            cout << arr[i] << " \n"[i==n-1];
    }
    return 0;
}