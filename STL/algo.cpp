/*In binary search it can't search the number when it is not sorted thus if not sorted then the binary fails to search the value assigned to it*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    v.push_back(5);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(69);
    v.push_back(89);
    v.push_back(74);
    v.push_back(89);
    v.push_back(12);

    
    for (int i:v){
        cout<<i<<endl;
    }cout<<endl;
    sort(v.begin(),v.end());

    for (int i:v){
        cout<<i<<endl;
    }cout<<endl;
    //Using Binary search
    cout<<"Find 6 -> "<<binary_search(v.begin(),v.end(),12)<<endl;
    
    
    
    //upper_bound
    cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    
    
    //lower_bound
    cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

}