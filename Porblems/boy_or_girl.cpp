#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> com;
    for (char i :s){
        com.insert(i);
    }
    
    if (com.size()%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else if(com.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}