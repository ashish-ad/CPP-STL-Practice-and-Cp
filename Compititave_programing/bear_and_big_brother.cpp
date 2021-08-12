#include <bits/stdc++.h>

using namespace std;

int main(){
    int limak,bob;
    cin>>limak>>bob;
    int i=1;
    while(1){
        limak=limak*3;
        bob=bob*2;
        if (limak>bob){
            cout<<i<<endl;
            break;
        }
        else{
            i++;
        }
    }
}