//Runtime: 8 ms, faster than 93.56% of C++ online submissions for Search Insert Position.
//Memory Usage: 9.6 MB, less than 98.33% of C++ online submissions for Search Insert Position.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= target) return i;
        }
        return nums.size();
    }  
};
