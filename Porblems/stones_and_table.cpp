#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n,x,j=0;
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++){
        if (s[i]==s[i+1]){
            j++;
        }
        else{
            continue;
        }
    }
    cout<<j<<endl;
    return 0;
}