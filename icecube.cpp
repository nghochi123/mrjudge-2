#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int mincut = 0;
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    mincut = (arr[0]-1) + (arr[1]-1)*(arr[0]) + (arr[2]-1)*(arr[1])*arr[0];
    cout << mincut;
}
