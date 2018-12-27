#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j;
    cin >> n >> m;
    int row = 0;
    int arr[n][n] = {};
    for(i=0;i<n;i++){
        arr[i][0] = 1;
        arr[i][row] = 1;
        row ++;
    }
    row = 3;
    for(i=2;i<n;i++){
        for(j=1;j<row;j++){
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
        }
        row++;
    }
    cout << arr[n-1][m-1];
}
