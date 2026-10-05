class Solution {
public:
    vector<int> leaders(vector<int>& nums) {

        vector<int> leadersv;
        int maxRight = nums[nums.size()-1];
        leadersv.push_back(maxRight);

        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i] > maxRight){
                maxRight = nums[i];
                leadersv.push_back(nums[i]);
            }
        }

        reverse(leadersv.begin(), leadersv.end());
        return leadersv;
    }
};