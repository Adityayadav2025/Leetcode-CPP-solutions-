class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
// we are using sccumulate to find the sum of first and second half
        sort(begin(nums),end(nums));

long long Largehalf=accumulate(begin(nums)+n/2,end(nums),0LL);
long long Smallhalf=accumulate(begin(nums),begin(nums)+n/2,0LL);

return Largehalf-Smallhalf;
    }
};