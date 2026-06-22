class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++){
            if(val == nums[i]){
                cout<<i<<endl;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};