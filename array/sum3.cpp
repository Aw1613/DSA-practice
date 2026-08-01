// failed brute force solution 

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int its = 0;
//         int ite = nums.size() - 1;
//         vector<vector<int>> sol;

//         while(its != ite || its < ite){
//             int i = 0;
//             if(nums[its] + nums[ite] < 0){
//                 int itt = ite - 1;
//                 for(; nums[itt] >= 0; itt--){
//                     if(nums[its] + nums[ite] + nums[itt] == 0){
//                         sol.push_back({});
//                         sol[i].push_back(nums[ite]);
//                         sol[i].push_back(nums[its]);
//                         sol[i].push_back(nums[itt]);
//                         i++;
//                     }
//                 }
//                 its = its + 1;
//                 ite = ite - 1;
//             }


//             if(nums[its] + nums[ite] > 0){
//                 int itt = its + 1;
//                 for(; nums[itt] <= 0; itt++){
//                     if(nums[its] + nums[ite] + nums[itt] == 0){
//                         sol.push_back({});
//                         sol[i].push_back(nums[ite]);
//                         sol[i].push_back(nums[its]);
//                         sol[i].push_back(nums[itt]);
//                         i++;
//                     }
//                 }
//                 its = its + 1;
//                 ite = ite - 1;
//             }
//         }
//         return sol;
//     }
// };


// stirver better solution but TLE
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> sol;
//         int n = nums.size();

//         for(int i = 0; i <n; i++){
//             set<int> hashset;
//             for(int j = i+1; j < n; j++){
//                 int search = -1*(nums[i] + nums[j]);
//                 if (hashset.find(search) != hashset.end()){
//                     vector<int> temp = {nums[i] , nums[j], search};
//                     sort(temp.begin(), temp.end());
//                     sol.insert(temp);
//                 }
//                 hashset.insert(nums[j]);
//             }
//         }

//         vector<vector<int>> ans(sol.begin(), sol.end());
//         return ans;
//     }
// };

// Optimal solution 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> sol;

        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            int sum;
            while(j < k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    sol.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
                else if(sum > 0){
                    k--;
                    // while(j < k && nums[k] == nums[k+1]) k--;
                    // we don't need this because if the element would be the same then automatically same condition
                    //will come and this k-- takes place
                }
                else if(sum < 0){
                    j++;
                    // while(j < k && nums[j] == nums[j-1]) j++;
                }

            }

        }
        return sol;
    }
};