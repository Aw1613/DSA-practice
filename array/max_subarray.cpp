// brute force solution with TLE error in huge case 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total = 0;
        // auto it = min_element(nums.begin(), nums.end());
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                total = total + nums[j];
                if(total > max){
                    max = total;
                }
            }
            total = 0;
        }
        return max;
    }
};