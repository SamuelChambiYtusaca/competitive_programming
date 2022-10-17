
#include <bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main(){
    int i = 0;
    long long n;
    while( cin >> n ){
        arr[i++] = n;
        sort(arr,arr+i);
        if(i&1){
            cout << arr[i/2] << "\n";
        }else{
            cout << (arr[i/2] + arr[i/2-1]) / 2 << "\n";
        }
    }
    return 0;
}