#include <bits/stdc++.h>


using namespace std;

int main(){

    int n;
    int x;
    cin>>n;
    vector <int> cards(n);
    int sum=0;

    for (auto & i:cards){
        cin>>i;
        sum +=i;
    }
    int a = 0,b = n-1;
    bool ch = true;
    int ans=0;
    while(a<=b){
        if (cards[a]>cards[b]){
            if (ch){
                ans+=cards[a];
            }
            a++;

        }
        else{
            if (ch){
                ans+=cards[b];
            }
            b--;

        }
        ch = !ch;
    }
    cout << ans <<" "<<sum-ans<<endl;
    return 0;
    

}
    