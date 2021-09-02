#include <bits/stdc++.h>

using namespace std;


int fibonaci(int n){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (n<2){
        return n;
    }
    // cout<<n<<endl;
    return fibonaci(n-1) + fibonaci(n-2);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ashish;
    cin>>ashish;
    long long int j=fibonaci(ashish);
    cout<<j<<endl;
    return 0;
}