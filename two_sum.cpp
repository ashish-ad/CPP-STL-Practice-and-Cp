#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    vector<int> re;
    int target = 9;
    vector<int> nums = {2,7,11,15};
    unordered_map<int, int> k;
    for (int i; i<nums.size();i++){
        int reminder = target - nums[i];
        k[nums[i]]=target;
        if (k.find(nums[i]) == reminder){
            re.push_back(nums[i]);
        }
        else{
            continue;
        }
}