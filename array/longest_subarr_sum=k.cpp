// optimal sol
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        mpp[0] = 1;
        for(int i = 0; i < n; i++){
            // what i tried to solve
            sum = sum + nums[i];
            mpp[sum]++;
            
            if(mpp.find(sum-k) != mpp.end()){
                mpp[sum-k]++;
                cnt++;
            }   

            // sum = sum + nums[i];
            // int remove = sum - k;
            // cnt = cnt + mpp[remove];
            // mpp[sum] = mpp[sum] + 1;
        }
        return cnt;
    }
};