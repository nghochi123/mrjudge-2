#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,m, numb;
    int prime;
    int index[10006] = {};
    int primeindex = 0;
    int arr[10006] = {};
    int numbr[10006] = {};
    int pchk = 0;
    cin >> n;
    for(i=2;i<104730;i++){
        prime = 1;
        for(j=2;j<450;j++){
            if(i%j == 0 && i!=j){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            index[primeindex] = i;
            primeindex ++;
        }
    }
    cout << index[n-1];
}
