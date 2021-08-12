#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> aray;
    for (int i = 0;i<n;i++){
        int x;
        cin>>x;
        aray.push_back(x);        
    }
    sort(aray.begin(),aray.end());
    for (int i : aray){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}