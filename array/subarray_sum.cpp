// Brute force incorrect solution
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0, sum = 0, last_i = -1;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            if(sum == k){
                cnt++;
                sum = 0;
                last_i = i;
            }
            else if(last_i != -1 && sum + nums[last_i] == k){
                cnt++;
                sum = 0;
                last_i = i;
            }
        }
        return cnt;
    }
};