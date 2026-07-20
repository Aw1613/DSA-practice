// BF solution , RTE

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // int cnt = 1;
        // for(int i = 0; i < nums.size(); i++){
        //     mpp[nums[i]] = i;
        // }
        // for(int i = 0; i < nums.size(); i++){
        //     auto it = mpp.find(nums[i]+1);
        //     if(it == mpp.end()){
        //         cnt = 0;
        //     }
        //     else {
        //         cnt++;
        //     }
        // }
        // return cnt;

        
        int cnt = 1;
        int maxi = 1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i]+1 == nums[i+1]){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else if(nums[i+1] == nums[i]){

            }
            else{
                cnt = 1;
            }
        }
        return maxi;
    }
};