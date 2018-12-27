#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,m;
    int repeat = 0;
    int out = 0;
    cin >> n;
    int fibo[30] = {};
    fibo[0] = 1;
    fibo[1] = 1;
    for(i=2;i<30;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    while(n > 1){
        for(i=0;i<30;i++){
            if(n == fibo[i]){
                n = 0;
            }
        }
        if(n%2 == 0){
            n /= 2;
        }
        else if(n%2 != 0){
            n = 3*n +1;
        }
        repeat ++;
    }
    repeat --;
    cout << repeat;
}
