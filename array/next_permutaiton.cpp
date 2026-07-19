// optimal failed attempt

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int i = 0;
//         int j = i+1;

//         for(int k = 0; k < nums.size(); k++){
//             if(nums[i] > nums[j]){
//                 swap(nums[i],nums[j]);
//                 i++;
//                 sort(nums.begin()+j ,nums.end());
//                 continue;
//             }
//             if(j == nums.size() - 1){
//                 swap(nums[j],nums[i]);
//             }
//             i++;
//         }
//     }
// };

// attempt 2 RTE
// Rechecked , correct sol l -> i

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int l = nums.size();
//         bool yes = 0;
//         for(int i = l-2; i >= 0; i--){
//             if(nums[i] < nums[i+1]){
//                 yes = 1;
//                 for(int k = l-1; k > i; k--){
//                     if(nums[k] > nums[i]){
//                         swap(nums[k],nums[i]);
//                         break;
//                     }
//                 }
//                 reverse(nums.begin() + i + 1, nums.end());
//                 return ;
//             }
//         }
//         if(yes == 0){
//             reverse(nums.begin(), nums.end());
//             return;
//         }
//     }
// };

// Optimal solution

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l = nums.size();
        int ind = -1;
        for(int i = l-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = l-1; i > ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[ind],nums[i]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
        return ;
    }
};