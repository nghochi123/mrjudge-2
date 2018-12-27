#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,i,j;
    cin >> n;
    long long arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int lisarr[n];
    for(i=0;i<n;i++){
        lisarr[i] = 1;
    }
    int maximum = 0;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
           if(arr[i] > arr[j]){
                if(lisarr[j] > maximum){
                    maximum = lisarr[j];
                    lisarr[i] = maximum + 1;
                }
            }
        }
    maximum = 0;
    }
    sort(lisarr,lisarr+n,greater<long long>());
    cout << lisarr[0];
}
