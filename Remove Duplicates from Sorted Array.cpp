/*
Runtime: 16 ms, faster than 93.55% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 14 MB, less than 27.78% of C++ online submissions for Remove Duplicates from Sorted Array.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count=0,n=nums.size();
        
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]) count++;
            else{
                nums[i-count]=nums[i];
            }
        }
        return n-count;
    }
};
