#include <bits/stdc++.h>

using namespace std;

int main(){
    long int n ;
    string s;
    cin>>n>>s;
    char arr[n];
    for (int i=0;i<n;i++){
        arr[i]=s[i];
    }
    int anton=0,danik=0;
    for (char i : arr){
        //cout<<i<<" ";
        if(i=='A'){
            anton+=1;
            
        }
        else {
            danik+=1;
        }
    }
    //cout<<endl<<anton<<endl<<danik<<endl;
    if (anton>danik){
        cout<<"Anton"<<endl;
    }
    else if (danik>anton){
        cout<<"Danik"<<endl;
    }
    else if(danik==anton)
    {
        cout<<"Friendship"<<endl;
    }
    
    return 0;
}