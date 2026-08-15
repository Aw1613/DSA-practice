// optimal solution formt the 3 sum pattern 
// did not worked for the array shorter than size 2

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int s = nums.size();
        int j = s - 1;
        vector<vector<int>> sol;
        for(int i = 0; i < s; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            j = s-1;
            for(;i < j; j--){
                if(j < s && nums[j] == nums[j+1]) continue;
                int k = i + 1;
                int l = j - 1;
                while(k < l){
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum > target){
                        l--;
                    }
                    else if (sum < target){
                        k++;
                    }
                    else{
                        vector<int> tup = {nums[i], nums[k], nums[l], nums[j]};
                        sol.push_back(tup);
                        k++;
                        l--;
                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                }
            }
        }
        return sol;
    }
};