// optimal failed attempt

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = 0;
        int j = i+1;

        for(int k = 0; k < nums.size(); k++){
            if(nums[i] > nums[j]){
                swap(nums[i],nums[j]);
                i++;
                sort(nums.begin()+j ,nums.end());
                continue;
            }
            if(j == nums.size() - 1){
                swap(nums[j],nums[i]);
            }
            i++;
        }
    }
};