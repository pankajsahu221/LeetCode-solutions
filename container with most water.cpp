class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size() ;

        int prevArea = 0 , maxi = 0;
        int f=0,s=n-1;

        while(f<n){
            int minHite = (arr[s]<arr[f])?arr[s]:arr[f] ;
            int currArea = (s - f) * minHite ; 

            if(f==s){ f++; s=n-1; continue; }
            if(arr[f] <= arr[s]){
                maxi = max(maxi,currArea) ;
                f++;
                s=n-1;
                continue ; 
            }
            maxi = max(maxi ,currArea );
            s--;
        }

            return maxi;
        
    }
};

//another optimized solution
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size() ;

        int prevArea = 0 , maxi = 0;
        int f=0,s=n-1;

        while(f<s){ 
            
            maxi = max(maxi ,(s - f) * min(arr[f],arr[s]) );
            
            if(arr[f] <= arr[s]){
                f++;
            }
            else
               s--;
        }

            return maxi;
        
    }
};
