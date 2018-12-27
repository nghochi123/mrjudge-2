#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,m;
    string str;
    cin >> n;
    cin >> str;
    int maximum = 0;
    int arr[n] = {};
    int maxval[n] = {};
    for(i=0;i<n;i++){
        if(str[i] != 'M'){
            arr[i] = int(str[i]) - 48;
        }
        else if(str[i] == 'M'){
            arr[i] = -2;
        }
    }
    maxval[0] = arr[0];
    if(maxval[0] > maximum){
        int maximum = maxval[0];
    }
    for(i=1;i<n;i++){
        maxval[i] = max((maxval[i-1]+arr[i]), arr[i]);
        if(maxval[i] > maximum){
            maximum = maxval[i];
        }
    }
    cout << maximum << endl;
}
