class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
    int n = nums.size();
   
    for ( int st = 0; st< n; st++)
     {
         int currSum = 0;
    for (int end = st; end < n; end++)
    {
        currSum += nums[end];        // just add the new candy
        maxsum = max(currSum, maxsum);
    }

    }
      return maxsum;

     
        
    }
     
};
