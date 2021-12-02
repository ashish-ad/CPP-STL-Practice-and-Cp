#include <bits/stdc++.h>


using namespace std;


vector <int> twoSum(vector<int>&nums,int target){
    vector<int> re;
    
    unordered_map<int, int> k;
    for (int i =0;i<nums.size();i++){
        int remain = target-nums[i];
        //k[i]=nums[i];
        if (k.find(remain)!=k.end()){
            re.push_back(i);
            re.push_back(k[remain]);
        }
        else{
            k[nums[i]]=i;
        }
    }
        return re;
}

int main(){
    int target = 11;
    vector<int> nums = {1,3,7,9,2};
    vector <int> a = twoSum(nums,target);
    for (int i:a){
        cout<<i<<endl;
    }
}

