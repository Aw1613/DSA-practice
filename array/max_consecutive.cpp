// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int cnt = 0;
//         int temp = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] == 0){
//                 if(cnt >= temp){
//                     temp = cnt; 
//                     cnt = 0;
//                 }
//             }
//             else{
//                 cnt++;
//             }
//         }
//         if(cnt >= temp) temp = cnt;
//         return temp;
//     }
// };


// Attempt 2 , found the solution

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int max = 0;
//         int cnt = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] == 1){
//                 cnt++;
//             }
//             else if(nums[i] == 0){
//                 if(cnt > max){
//                     max = cnt;
//                 }
//                 cnt = 0;
//             }
//         }
//         if(max < cnt) max = cnt;
//         return max;
//     }
// };

// better code
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
                maxi = max(cnt,maxi);
            }
            else {
                cnt = 0;
            }
        }
        return maxi;
    }
};