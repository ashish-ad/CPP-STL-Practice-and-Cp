#include <bits/stdc++.h>

using namespace std;

int petya_string(string s1,string s2){
    int c=0;
    for (int i =0;i<s1.length();i++){
        if(tolower(s1[i])>tolower(s2[i])){
            return 1;
            }
        else if(tolower(s1[i])<tolower(s2[i])){
            return -1;
            }
        else c++;
    }
    if (c==s1.length()) {
        return 0;
        }
    return 0;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    int ashish = petya_string(s1,s2);
    cout << ashish<<endl;
    return 0;
}