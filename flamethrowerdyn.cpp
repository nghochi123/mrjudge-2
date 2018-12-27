#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,m;
    cin >> n >> m;
    int maximum = 0;
    int arr[n] = {};
    int value[n-m+1] = {};
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        if(i+1==m){
            for(j=0;j<m;j++){
                value[0] += arr[j];
            }
            if (value[i+1-m] > maximum){
                maximum = value[i+1-m];
            }
        }
        else if(i+1>m){
            value[i+1-m] = value[i-m] - arr[i-m] + arr[i];
            if (value[i+1-m] > maximum){
                maximum = value[i+1-m];
            }
        }
    }
    cout << maximum;
}
