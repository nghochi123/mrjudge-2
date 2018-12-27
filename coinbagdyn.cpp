#include <bits/stdc++.h>
using namespace std;

int main(){
    long long bagsize, coinno;
    cin >> coinno >> bagsize;
    long long arr[coinno+1][bagsize] = {};
    long long keep[coinno+1][bagsize] = {};
    long long cw = 0, cv = 0;
    long long i,j,n,m;
    for(i=0;i<coinno;i++){
        cin >> cw >> cv;
        for(j=0;j<bagsize;j++){
            if(j+1 >= cw){
                if(j >= cw){
                    arr[i+1][j] = max((cv + arr[i][j-cw]),arr[i][j]);
                    if(arr[i+1][j] == cv + arr[i][j-cw]){
                        keep[i+1][j] = 1;
                    }
                }
                else if(j+1 == cw){
                    arr[i+1][j] = max(cv,arr[i][j]);
                    if(arr[i+1][j] == cv){
                        keep[i+1][j] = 1;
                    }
                }
            }
            else{
                arr[i+1][j] = arr[i][j];
            }
        }
    }
    cout << arr[coinno][bagsize - 1];
}
