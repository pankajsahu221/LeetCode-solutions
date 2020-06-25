class Solution {
public:
    long long reverse(int x){
    
    long long num=0;
    while(x){
        int a=x%10;
        num=(num*10)+a;
        x=x/10;
    }
    return (num<INT_MIN || num>INT_MAX) ? 0 : num;
    
    }
};
