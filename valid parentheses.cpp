/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.2 MB, less than 82.13% of C++ online submissions for Valid Parentheses
*/

bool check(char a, char b){
    if(a=='(' && b==')') return true;
    if(a=='{' && b=='}') return true;
    if(a=='[' && b==']') return true;
    
    return false;
}

class Solution {
public:
    bool isValid(string s) {
       
            stack<char>stk;

            for(int i=0; i<s.length(); i++){
                if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                    stk.push(s[i]);
                }
                else{
                    if( stk.empty() ){  return false; }
                    if( check(stk.top() ,s[i]) ) stk.pop();
                    else{ 
                        return false;
                    }
                }
            }
            if(stk.empty()) return true;
            else return false;
        
    }
};
