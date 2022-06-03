#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p,t,v;
    cin>>n;
    int sum;
    int j = 0;
    for(int i=0;i<n;i++){
        cin>>p>>v>>t;
        sum = p+v+t;
        if (sum>=2){
            j++;
        }
        else{
            continue;
        }

    }
    cout<<j<<endl;
    return 0;

}