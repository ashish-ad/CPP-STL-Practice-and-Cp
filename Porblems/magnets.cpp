#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,j=1;
    cin>>n;
    string x;
    char k='0';

    for(int c=0;c<n;c++){
        k=x[0];
        cin>>x;
        
        if (x[1]==k){
            j++;
        }
        else(x[1]!=k);{
            continue;
        }
          
    }
    cout<<j<<endl;
    return 0;
}