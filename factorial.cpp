#include <bits/stdc++.h>
using namespace std;

int factorialindex[10000] = {};

int factorial(int x){
    if(x == 1){
        return 1;
    }
    else{
            if(factorialindex[x-1] != 0){
                return factorialindex[x-1];
            }
            else{
                factorialindex[x-1] = x*factorial(x-1);
                return factorialindex[x-1];
            }
    }
}

int main(){
    factorialindex[0] = 1;
    int n;
    cin >> n;
    cout << factorial(n);
}
