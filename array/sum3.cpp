class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int its = 0;
        int ite = nums.size() - 1;
        vector<vector<int>> sol;

        while(its != ite || its < ite){
            int i = 0;
            if(nums[its] + nums[ite] < 0){
                int itt = ite - 1;
                for(; nums[itt] >= 0; itt--){
                    if(nums[its] + nums[ite] + nums[itt] == 0){
                        sol.push_back({});
                        sol[i].push_back(nums[ite]);
                        sol[i].push_back(nums[its]);
                        sol[i].push_back(nums[itt]);
                        i++;
                    }
                }
                its = its + 1;
                ite = ite - 1;
            }


            if(nums[its] + nums[ite] > 0){
                int itt = its + 1;
                for(; nums[itt] <= 0; itt++){
                    if(nums[its] + nums[ite] + nums[itt] == 0){
                        sol.push_back({});
                        sol[i].push_back(nums[ite]);
                        sol[i].push_back(nums[its]);
                        sol[i].push_back(nums[itt]);
                        i++;
                    }
                }
                its = its + 1;
                ite = ite - 1;
            }
        }
        return sol;
    }
};