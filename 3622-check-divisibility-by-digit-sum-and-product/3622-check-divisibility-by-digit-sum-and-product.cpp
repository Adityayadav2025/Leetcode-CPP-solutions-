class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int original=n;
        int k=0;

        while(n>0){
            int digits =n%10;
            sum+=digits;
            

            prod*=digits;
            
            n/=10;
            
        } 
            return original%(sum+prod)==0;
    }
};