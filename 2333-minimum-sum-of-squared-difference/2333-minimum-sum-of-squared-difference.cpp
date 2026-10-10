
using namespace std;

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        const int MAX_DIFF = 100000;
        vector<int> countDiff(MAX_DIFF + 1, 0);
        int n = nums1.size();

        for (int i = 0; i < n; i++) {
            int d = abs(nums1[i] - nums2[i]);
            countDiff[d]++;
        }

        long long k = (long long)k1 + k2;

        for (int currdiff = MAX_DIFF; currdiff > 0 && k > 0; currdiff--) {
            if (countDiff[currdiff] == 0) continue;

            long long countOps = min((long long)countDiff[currdiff], k);

            countDiff[currdiff] -= countOps;
            countDiff[currdiff - 1] += countOps;
            k -= countOps;
        }

        long long result = 0;
        for (long long d = 1; d <= MAX_DIFF; d++) {
            result += (long long)countDiff[d] * d * d;
        }

        return result;
    }
};