class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = -101;
        for(auto it = nums.begin(); it != nums.end(); it++){
            if(*it != temp){
                temp = *it;
            }
            else if(*it == temp){
                // TC will increase due to shifiting of elements 
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};