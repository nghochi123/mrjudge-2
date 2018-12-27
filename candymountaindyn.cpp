#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, ms, i, j;
    cin >> n >> ms;
    long long arr[n+1] = {};
    long long minpos[n+1] = {};
    long long minno = 9223372036854775807;
    if(n >= ms){
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        for(i=0;i<ms;i++){
            minpos[i] = arr[i];
        }
        long long minsub = 9223372036854775807;
        for(i=ms;i<n+1;i++){
            for(j=i-ms;j<i;j++){
                if(minpos[j] < minsub){
                    minsub = minpos[j];
                }
            }
            minpos[i] = max(minsub, arr[i]);
            minsub = 9223372036854775807;
        }
        for(i=n-ms;i<n;i++){
            if(minpos[i] < minno){
                minno = minpos[i];
            }
        }
        cout << endl << minno;
    }
    else{
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << "0";
    }
}
