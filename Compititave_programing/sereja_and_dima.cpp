#include <bits/stdc++.h>


using namespace std;

int main(){

    int n;
    int x;
    cin>>n;
    vector <int> cards(n);

    for (int & i:cards){
        cin>>i;
    }
    for (int i: cards){
        cout<<i<<"\t";
    }cout<<endl;

    
    vector <int> ::iterator p1;
    vector <int> ::iterator p2;
    vector <int> sereja;
    vector <int> dima;
    for (int i:sereja){
        cout<<i<<endl;
    }
    for (int i:dima){
        cout<<i<<endl;
    }
    return 0;
}
    