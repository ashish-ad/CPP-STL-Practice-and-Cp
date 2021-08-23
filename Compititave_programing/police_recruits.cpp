/*
3
-1 -1 1

8
1 -1 1 -1 -1 1 1 1

11
-1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1

21
-1 -1 -1 -1 -1 3 2 -1 6 -1 -1 2 1 -1 2 2 1 6 5 -1 5

ans = 5

*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,crimes=0,recruites=0;
    cin>>n;
    vector<int> arr(n);
    for (auto & i:arr){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        if (arr[i]>=0){
            recruites+=arr[i];
        }
        else if(arr[i]<0)
        {
            recruites+=arr[i];
            if (recruites<0){
                crimes+=recruites;
                recruites = 0;
        }
    }

    }
    
    cout<<crimes*(-1)<<endl;
    return 0;
}