#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,i,j;
    long long minimum = 99999999;
    cin >> n;
    long long arr[n] = {};
    long long minsum[n] = {};
    for(i=0;i<n;i++){
        cin >> arr[i];
        if(i == 0){
            minsum[i] = arr[i];
        }
        else if(i > 0){
            minsum[i] = min((arr[i] + minsum[i-1]), arr[i]);
        }
        if(minsum[i] < minimum){
            minimum = minsum[i];
        }
    }
    cout << minimum;
}
