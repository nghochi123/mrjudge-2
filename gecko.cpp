#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,h,w;
    cin >> h >> w;
    int maximum = 0;
    int arr[h][w] = {};
    int maxnum[h][w] = {};
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cin >> arr[i][j];
            if(arr[i][j] > maximum){
                maximum = arr[i][j];
            }
        }
    }
    for(i=0;i<w;i++){
        maxnum[h-1][i] = arr[h-1][i];
    }
    if(h==1){
        cout << maximum;
    }
    else if(w == 1){
        maximum = 0;
        for(i=0;i<h;i++){
            maximum += arr[i][0];
        }
        cout << maximum;
    }
    else{
        maximum = 0;
        for(i=h-2;i>=0;i--){
            for(j=0;j<w;j++){
                if(j==0){
                    maxnum[i][j] = arr[i][j] + max(maxnum[i+1][j], maxnum[i+1][j+1]);
                }
                else if(j == w-1){
                    maxnum[i][j] = arr[i][j] + max(maxnum[i+1][j], maxnum[i+1][j-1]);
                }
                else{
                    maxnum[i][j] = arr[i][j] + max({maxnum[i+1][j], maxnum[i+1][j-1], maxnum[i+1][j+1]});
                }
                if(maxnum[i][j] > maximum){
                    maximum = maxnum[i][j];
                }
            }
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cout << maxnum[i][j] << " ";
        }
        cout << endl;
    }
}
