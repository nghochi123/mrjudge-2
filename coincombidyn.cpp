#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,m,i,j,k;
    unsigned long long coinval;
    cin >> n >> m;
    unsigned long long combino[n+1][m] = {};
    for(i=1;i<n+1;i++){
        cin >> coinval;
        for(j=0;j<m;j++){
            if(j+1 == coinval){
                combino[i][j] = 1;
            }
            if(combino[i-1][j] > 0){
                combino[i][j] = combino[i-1][j] + combino[i][j];
            }
            if(j+1 > coinval && combino[i][j-coinval] != 0){
                combino[i][j] += combino[i][j-coinval];
            }
        }
    }
    cout << (combino[n][m-1])%13371337;
}
