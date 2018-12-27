#include <bits/stdc++.h>
using namespace std;

string str1;
string str2;
int lcsnum = 0;
int strarr[1000][1000] = {};

int LCS(int a, int b){
    if(a == 0 || b == 0){
        strarr[a][b] = 0;
    }
    else{
        if(str1[a-1] == str2[b-1]){
            strarr[a][b] = max({LCS(a-1,b-1) + 1, LCS(a-1,b), LCS(a,b-1)});
        }
        else{
            if(strarr[a-1][b] != 0 || strarr[b-1][a] != 0){
                strarr[a][b] = max(strarr[b-1][a], strarr[a-1][b]);
            }
            else{
                strarr[a][b] = max(LCS(a-1,b), LCS(a,b-1));
            }
        }
    }
    return strarr[a][b];
}

int main(){
    cin >> str1 >> str2;
    lcsnum = LCS(str1.length(),str2.length());
    for(int i =0;i<str1.length()+1;i++){
        for(int j=0;j<str2.length()+1;j++){
            cout << strarr[i][j] << " ";
        }
        cout << endl;
    }
}
