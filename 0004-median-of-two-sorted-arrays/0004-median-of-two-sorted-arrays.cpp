class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> result=nums1;
         result.insert(result.end(),nums2.begin(),nums2.end());
         sort(result.begin(),result.end());
         int n =result.size();
         int k=n/2;
        double median;

         if(n%2==0){
            median=(result[k]+result[k-1])/2.0;

         }else{
        median=result[k];
         }

        return median;
    }
};