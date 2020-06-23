//brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
         vector<int> v1;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]==target-nums[i]){
             //vector<int> v1;
                v1.push_back(i);
                v1.push_back(j);
             return v1;  
            }   
        }
    }
  return v1;
        
    }
};
//hash map
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
        unordered_map<int,int>hash;
        vector<int>res;
        
        for(int i=0; i<nums.size(); i++){
            int diff=target-nums[i];
            
            if(hash.find(diff)!=hash.end()){ //we can also use hash.count(diff) to check if diff is present or not
                res.push_back(hash[diff]);
                res.push_back(i);
                
                return res;
            }
            hash[nums[i]]=i;
        }
        return res;
    }
};

*/
