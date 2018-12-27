#include <bits/stdc++.h>
using namespace std;

int main(){
    long long i,j,n,p;
    cin >> n >> p;
    long long arr[n] = {};
    long long maxpos[n] = {};
    long long catno[n] = {};
    long long fc = 0;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[0] < p){
        maxpos[0] = arr[0];
        catno[0] = 1;
    }
    for(i=1;i<n;i++){
        if(arr[i] >= p){
            maxpos[i] = 0;
            catno[i] = 0;
        }
        else{
            if(arr[i] + maxpos[i-1] < p){
                maxpos[i] = arr[i] + maxpos[i-1];
                catno[i] = 1 + catno[i-1];
            }
            else if(arr[i] + maxpos[i-1] >= p){
                maxpos[i] = arr[i] + maxpos [i-1];
                fc = catno[i-1];
                while(maxpos[i] >= p){
                    maxpos[i] -= arr[i-fc];
                    fc--;
                }
                fc++;
                catno[i] = fc;
            }
        }
    }
    long long maximum = 0;
    for(i=0;i<n;i++){
        if(catno[i] > maximum){
            maximum = catno[i];
        }
    }
    cout << maximum;
}
