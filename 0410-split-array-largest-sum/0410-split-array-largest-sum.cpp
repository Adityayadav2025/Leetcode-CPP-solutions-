class Solution {
public:
    bool isPossible(vector<int>& nums, int k, long long mid ){
        int subarray=1;
        long long currSum=0;


        for(int num : nums){
            if(currSum + num > mid){
                subarray++;

            // adding this elements in the currSum
                currSum=num;

            }else{
                // continue adding in the current subarray 
                currSum += num;
            }

        }
        return subarray <=k;

    }

  
    int splitArray(vector<int>& nums, int k) {


        long long low =0;
        long long high =0;

          for(int num : nums){
            low =max(low, (long long )num);
            high+=num;
          }
        long long ans =high;

        // binary search

        while(low <=high){
        long long mid =low +(high-low)/2;


        if(isPossible(nums,  k,  mid)){
            high=mid-1;
            ans =mid ;
        }else{
            low =mid+1;
        }

        }
        return int(ans) ;       
    }
};