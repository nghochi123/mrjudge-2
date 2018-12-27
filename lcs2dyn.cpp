#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,m;
    int len1, len2;
    string str1;
    string str2;
    cin >> str1 >> str2;
    len1 = str1.length();
    len2 = str2.length();
    int arr[len1+1][len2+1] = {};
    for(i=1;i<len1+1;i++){
        for(j=1;j<len2+1;j++){
            if(str1[i-1] == str2[j-1]){
                arr[i][j] = max((1+arr[i-1][j-1]),arr[i-1][j]);
            }
            else{
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    cout << arr[len1][len2];
}
