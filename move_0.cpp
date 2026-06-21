// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         auto ptr = nums.begin();
//         for(auto it = nums.begin(); it != nums.end(); it++){
//             if(*ptr != 0 ){
//                 ptr++;
//             }
//             else if(*ptr == 0 && *it != 0){
//                 swap(*ptr,*it);
//                 ptr++;
//             }
//         }
//     }
// };

// 2nd attempt 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[i] != 0) i++;
            else if( nums[i] == 0 && nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
                
            }
        }
    }
};