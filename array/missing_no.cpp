// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i = 0; i < nums.size();i++){
//             if(nums[i] != i){
//                 return i;
//             }
//         }
//         return nums.size();
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int find = n*(n+1)/2;
        for(int i = 0; i < nums.size(); i++){
            find = find - nums[i];
        }
        return find;
    }
};