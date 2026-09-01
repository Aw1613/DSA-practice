// better solution using hash map
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        map<int,int> mpp;
        int maxi = 0, cnt = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            mpp[sum] = i;
            if(mpp.find(sum-k) != mpp.end()){
                cnt = i-mpp[sum-k];
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};
