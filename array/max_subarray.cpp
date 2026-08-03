// brute force solution with TLE error in huge case 

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int total = 0;
//         // auto it = min_element(nums.begin(), nums.end());
//         int max = 0;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i; j < nums.size(); j++){
//                 total = total + nums[j];
//                 if(total > max){
//                     max = total;
//                 }
//             }
//             total = 0;
//         }
//         return max;
//     }
// };


// ATP 2 , using kadane's algo 
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum = accumulate(nums.begin(),nums.end(),0);
//         int temp = 0;
//         for(int i = 0; i < nums.size(); i++){
//             temp = temp + nums[i];
//             if(temp < 0){
//                 sum = max(sum,temp);
//                 temp = 0;
//             }
//             else if(temp >= 0){
//                 sum = max(sum,temp);
//             }
//         }
//         return sum;
//     }
// };

// negative case couldn't handel properly 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        auto it = min_element(nums.begin(),nums.end());
        int sum = *it;
        cout<<sum<<endl;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            temp = temp + nums[i];
            sum = max(temp,sum);
            if(temp < 0){
                temp = 0;
            }
        }
        temp = *min_element(nums.begin(),nums.end());
        sum = max(sum,temp);
        return sum;
    }
};