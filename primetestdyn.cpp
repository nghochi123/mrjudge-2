#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,m, numb;
    int prime;
    int index[170] = {};
    int primeindex = 0;
    int arr[100] = {};
    int numbr[100] = {};
    int pchk = 0;
    cin >> n;
    for(i=2;i<1001;i++){
        prime = 1;
        for(j=2;j<33;j++){
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
    for(i=0;i<n;i++){
        cin >> numbr[i];
        for(j=0;j<171;j++){
            if(numbr[i] == index[j]){
                arr[i] = 1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr[i] == 0){
            cout << numbr[i] << " is a composite number." << endl;
        }
        else if(arr[i] == 1){
            cout << numbr[i] << " is a prime number." << endl;
        }
    }
}
