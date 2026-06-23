class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int cnt = 0;
        int temp = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(sum > k){
                temp = 0;
                sum = 0;
                continue;
            }
            if(k >= nums[i] && sum < k){
                sum = sum + nums[i];
                temp++;
                if(sum == k && temp > cnt){
                    cnt = temp;
                    temp = 0;
                    sum = 0;
                }
                
            }
        }
        return cnt;
    }
};
