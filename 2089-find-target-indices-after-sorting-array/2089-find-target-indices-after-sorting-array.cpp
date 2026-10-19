class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int  n =nums.size();
        int less_count =0;
        int target_count =0;

       for(int x: nums){
            if(x< target) less_count++;
            else if (x==target) target_count++;
        }
        vector<int>result;
        for(int i=0;i<target_count;i++) {
                result.push_back(less_count+i);
        }
        
        return result ;
    }
};