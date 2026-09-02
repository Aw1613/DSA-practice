// // better solution using hash map
// class Solution{
// public:
//     int longestSubarray(vector<int> &nums, int k){
//         map<int,int> mpp;
//         int maxi = 0, cnt = 0, sum = 0;
//         for(int i = 0; i < nums.size(); i++){
//             sum = sum + nums[i];
//             mpp[sum] = i;
//             if(mpp.find(sum-k) != mpp.end()){
//                 cnt = i-mpp[sum-k];
//                 maxi = max(maxi,cnt);
//             }
//         }
//         return maxi;
//     }
// };


// optimal solution if there are no zereos or negatives in the array
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int l = 0,r = 0;
        int sum = nums[0];
        int maxi = 0;
        int cnt = 0;
        while(r < nums.size()){
            while(sum > k && l <= r){
                sum = sum - nums[l];
                l++;
            }
            if(sum == k){
                maxi = max(maxi, r-l+1);
            }
            r++;
            sum = sum + nums[r];
        }
        return maxi;
    }
};
