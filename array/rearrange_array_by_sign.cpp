// brute force solution 

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> positive;
//         vector<int> neg;
//         vector<int> sol;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] >= 0){
//                 positive.push_back(nums[i]);
//             }
//             else{
//                 neg.push_back(nums[i]);
//             }
//         }
//         int j = 0;
//         int k = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(i%2 == 0){
//                 sol.push_back(positive[j]);
//                 j++;
//             }
//             else{
//                 sol.push_back(neg[k]);
//                 k++;
//             }
//         }
//         return sol;
//     }
// };

// Optimal solution

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> sol(nums.size());
        int pos = 0;
        int neg = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0){
                sol[pos] = nums[i];
                pos = pos+2;
            }
            if(nums[i] < 0){
                sol[neg] = nums[i];
                neg = neg + 2;
            }
        }
        return sol;
    }
};