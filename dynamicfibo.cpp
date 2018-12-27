#include <bits/stdc++.h>
using namespace std;

long long result;
long long endd;
long long fiboindex[100000] = {};
int j;

int fibo(int x){
    if(x == 1 || x == 2){
        return 1;
    }
    else{
        if(fiboindex[x-1] != 0){
            return fiboindex[x-1];
        }
        else{
            result = (fibo(x-1) + fibo(x-2))%j;
            fiboindex[x-1] = result;
            return result;
        }
    }
}

int main(){
    int h;
    cin >> h >> j;
    endd = fibo(h);
    cout << endd;
}
