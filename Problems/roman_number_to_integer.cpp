#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char,int> roman = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
        };

    string s ;
    cin>>s;
    int result=0;

    for(int i=0;i<=s.length();i++){
        if (i+1<s.length() && roman[s[i]]<roman[s[i+1]]){
            result -= roman[s[i]];
        }else{
            result += roman[s[i]];
        }

    }
    cout<<result;
    return 0;
};



