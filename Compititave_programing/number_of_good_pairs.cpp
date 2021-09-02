#include <bits/stdc++.h>

using namespace std;



int numIdenticalPairs(vector<int>&nums){
    unordered_map <int,int> k;
    for (int x=0;x<nums.size();i++){
        k[nums[x]]=x;
    }
    for (int i:nums){
        k.at(i);
    }
    return 0;

}

int main(){
    
}