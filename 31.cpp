#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkMax(vector<int>& nums){
        for(int i{1}; i< nums.size(); i++){
            if(nums[i-1] < nums[i])
                return false;
        }
        return true;
    }
    void nextPermutation(vector<int>& nums) {
        if(checkMax(nums)){
            sort(nums.begin(), nums.end());
        }
        else{
            int lastDif{};
            for(int i{}; i< (nums.size()-1); i++)
                if(nums[i] < nums[i+1])
                    lastDif = i;
            int l{nums[lastDif+1]}, ls{lastDif+1};
            for(int i{lastDif}; i<nums.size(); i++){
                if(nums[i]<l && nums[i]>nums[lastDif])
                    ls = i;
            }
            swap(nums[lastDif], nums[ls]);
            sort(nums.begin() + lastDif + 1, nums.end());
        }
        for(int i: nums){
            cout<<i<<" ";
        }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int &i: nums){
        cin>>i;
    }
    Solution sol;
    sol.nextPermutation(nums);
}
