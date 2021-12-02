#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,l;
    long long int sum=0;
    string squares;

    cin>>a>>b>>c>>d;
    cin>>squares;

    //l=size(squares);
    for (char i : squares){
        switch(i){
            case '1': sum+=a; break;
            case '2': sum+=b; break;
            case '3': sum+=c; break;
            case '4': sum+=d; break;

        }
        
    }
    cout<<sum<<endl;
    return 0;

}