class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int resultxor=0;
        bool allZeros=true;

        for(int x  : nums){
            resultxor=(resultxor^x);

        if(x!=0){// we found at least one element which is non zero 
        allZeros =false;
        }
     }
     if(allZeros){//we can't find any subsequence 
    return 0;
     }
     return(resultxor==0) ? n-1: n;
        
    }
};