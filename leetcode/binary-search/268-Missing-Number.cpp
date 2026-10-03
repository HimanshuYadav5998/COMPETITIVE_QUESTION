class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int len = nums.size();
         int sumL =   len * (len+1)/2;
         int sumN =0;
         for(int num : nums)  
         {
            sumN += num;
         }  
         return sumL-sumN;
    }
};