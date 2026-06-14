class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto ptr = nums.begin();
        for(auto it = nums.begin(); it != nums.end(); it++){
            if(*ptr != 0 ){
                ptr++;
            }
            else if(*ptr == 0 && *it != 0){
                swap(*ptr,*it);
                ptr++;
            }
        }
    }
};