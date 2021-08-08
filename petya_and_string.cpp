#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    vector<int> a,b;
    for (int i:s1){
        a.push_back(i);
    }
    for (int i:s2){
        b.push_back(i);
    }
    bool flag1, flag2, flag3;
    for (int i=0;i<a.size();i++){
        if (a[i]>b[i]){
            flag1 = false;
            break;
        }
        else if(a[i]<b[i]){
            flag2 = false;
            break;
        }
        else (a[i]==b[i]);{
            flag3 = false;
            continue;
        }
             

    }
    if (!flag1){
        cout<<1<<endl;
    }
    else if(!flag2){
        cout<<-1<<endl;
    }
    else if(flag3){
        cout<<0<<endl;
    }
    
    return 0;
}