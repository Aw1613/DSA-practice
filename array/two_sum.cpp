// // brute force approach 
// // TLE in big test case

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> sol;
//         for(int i = 0; i < nums.size()-1; i++){
//             cout<<i<<endl;
//             for(int j = nums.size()-1; j  0; j--){
//                 cout<<"j : "<<j<<endl;
//                 if(nums[i] + nums[j] == target){
//                     sol.push_back(i);
//                     sol.push_back(j);
//                     return sol;
//                 }
//             }
//         }
//         return sol;
//     }
// };



// 2nd Attempt 
// all test case passed
// brute force way solution 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    sol.push_back(i);
                    sol.push_back(j);
                    return sol;
                }
            }
        }
        return sol;
    }
};