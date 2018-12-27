#include <bits/stdc++.h>
using namespace std;

//numbers that can be made.

int main(){
    int n,m, i, j;
    int coinval;
    cin >> n >> m;
    int possval[n+1][m] = {};
    for(i=0;i<n+1;i++){
        for(j=0;j<m;j++){
            possval[i][j] = 100001;
        }
    }
    for(i=1;i<=n;i++){
        cin >> coinval;
        for(j=0;j<m;j++){
            if(j >= coinval){
                possval[i][j] = min(1+possval[i][j-coinval],possval[i-1][j]);
            }
            else if(j+1 == coinval){
                possval[i][j] = 1;
            }
            else if(j+1 < coinval){
                possval[i][j] = possval[i-1][j];
            }
        }
    }
    if(possval[n][m-1] != 100001){
        cout << possval[n][m-1];
    }
    else{
        cout << "-1";
    }
}
