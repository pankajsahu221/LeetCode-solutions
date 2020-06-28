class Solution {
public:
    bool isPalindrome(int n) {
   
    int num=0,cn=n;
    
    if(n<0 || (n!=0 && n%10==0)) return false;
    
    while(n>num){
        num=(num*10)+(n%10);
        n=n/10;
    }
    return (n==num || n==num/10) ;
    }
};
