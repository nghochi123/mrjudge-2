#include <bits/stdc++.h>
using namespace std;

int main(){
    long long i,j,k,h,w;
    cin >> h >> w;
    string str[h];
    long long arr[h][w] = {};
    for(i=0;i<h;i++){
        cin >> str[i];
    }
    arr[h-1][w-1] = 1;
    for(i=h-2;i>-1;i--){
        if(str[i][w-1] == '.'){
            arr[i][w-1] = arr[i+1][w-1];
        }
    }
    for(i=w-2;i>-1;i--){
        if(str[h-1][i] == '.'){
            arr[h-1][i] = arr[h-1][i+1];
        }
    }
    for(i=h-2;i>-1;i--){
        for(j=w-2;j>-1;j--){
            if(str[i][j] == '.'){
                if(str[i][j+1] == '.'){
                    arr[i][j] += arr[i][j+1]%1000000007;
                }
                if(str[i+1][j] == '.'){
                    arr[i][j] += arr[i+1][j]%1000000007;
                }
            }
        }
    }
    cout << arr[0][0]%1000000007;
}
