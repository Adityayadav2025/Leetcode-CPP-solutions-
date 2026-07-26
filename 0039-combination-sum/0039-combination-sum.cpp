class Solution {

       void  findcombinationSum(int ind,int target ,vector<int>& arr,vector<vector<int>>&ans, vector<int>&ds) {
        if(ind ==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return ;
        }
        //picking up the elment 

    if(arr[ind]<= target){
        ds.push_back(arr[ind]);
        findcombinationSum( ind, target-arr[ind] , arr,ans, ds) ;
        ds.pop_back();
        
    }
       findcombinationSum(ind+1, target , arr,ans, ds);
}


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcombinationSum(0, target , candidates,ans, ds);
        return ans;
        
    }
};