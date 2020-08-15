//brute force
//Runtime: 60 ms, faster than 35.27% of C++ online submissions for Longest Substring Without Repeating Characters.
//Memory Usage: 7 MB, less than 86.44% of C++ online submissions for Longest Substring Without Repeating Characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxi = 0;  
       for(int j=0; j<s.size(); j++){
        bool visited[200]={false};
        int locu = 0;
        for(int i=j; i<s.size(); i++){
            if(!visited[int(s[i])]){
                visited[int(s[i])]=true;
                locu++;
            }
            else{
                break;
            }
        }
         maxi = max(locu, maxi);  
      }
        return maxi;        
    }
};
