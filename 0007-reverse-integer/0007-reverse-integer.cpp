class Solution {
public:
    int reverse(int x) {

        int rev=0;
        while(x){
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            int l=x%10;
            rev=rev*10+l;
            x=x/10;
        }
        
        return int(rev);
        
    }
    
};