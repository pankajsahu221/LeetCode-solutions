// brute force
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

// using c++ stl
// Runtime: 8 ms, faster than 93.56% of C++ online submissions for Search Insert Position.
// Memory Usage: 9.7 MB, less than 58.50% of C++ online submissions for Search Insert Position.
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        return lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    }  
};

// tranversing from back side
// Runtime: 12 ms, faster than 57.35% of C++ online submissions for Search Insert Position.
//Memory Usage: 9.9 MB, less than 22.85% of C++ online submissions for Search Insert Position.
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums[nums.size()-1] < target ) return nums.size();
        for(int i= nums.size()-1; i>=0; i--){
            if(nums[i]==target) return i;
            if(nums[i]<target) return i+1;
        }
         return 0;
    }  
};
