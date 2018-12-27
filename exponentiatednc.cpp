#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,a,b,m;
    cin >> n;
    int num[n];
    for(i=0;i<n;i++){
        cin >> a >> b >> m;
        int arr[b];
        arr[0] = a;
        for(j=1;j<b;j++){
            arr[j] = (a*arr[j-1])%m;
        }
        num[i] = arr[b-1];
    }
    for(i=0;i<n;i++){
        cout << num[i] << endl;
    }
}
