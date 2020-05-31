//https://leetcode.com/contest/weekly-contest-191/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end()); 
        int n1 = nums.at(size-1);
        int n2 = nums.at(size-2);
        int max = (n1-1) * (n2-1);
        return max;
        
    }
};
