#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,j=0;
    cin>>n;
    string x;
    char k;

    for(int c=0;c<n;c++){
        cin>>x;
        k=x[0];
        if (x[1]==k){
            j++;
        }
        else(x[1]!=k){
            continue;
        }  
    }
    cout<<j<<endl;
    return 0;
}