#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int guys,mini;

    cin>>guys>>mini;
    int height[guys];
    for (int i=0;i<guys;++i){
        cin>>height[i];
    }
    int width=sizeof(height)/sizeof(height[0]);
    for (int i:height){
        if(i>mini){
            width+=1;
        }
        else{
            continue;
        }
    }cout << endl<<"\n";
    cout<<width<<endl;
    return width;

}