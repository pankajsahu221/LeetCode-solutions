//brute force O(n^2)
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

// two pointer O(n)
// Runtime: 56 ms, faster than 39.43% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 10.9 MB, less than 28.97% of C++ online submissions for Longest Substring Without Repeating Characters.
class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
      
        int i=0, j=0, maxi=0, n=s.size();
        unordered_set<char> set;
    
        while(i<n && j<n){
            if(set.find(s[j]) == set.end()){    //if the char is not present in the set

                set.insert(s[j++]);    //add it to the set
                maxi = max(maxi , j-i );  //increase it if it's greater
             }
            else{                 //if char is present in the set
                set.erase(s[i++]);//we erase the first occurence of the char in the set
             }
           }
    return maxi;
    }
};
