//leetcode:https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sz = nums.size();
        for(int i=0;i<sz;i++){
            int t1 = nums[i];   
            for(int j=i+1;j<sz;j++){
                int t2 = nums[j];
                if(t1+t2 == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }          
            }
        }
        return ans;
    }
};