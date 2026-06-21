// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int temp = -101;
//         for(auto it = nums.begin(); it != nums.end(); it++){
//             if(*it != temp){
//                 temp = *it;
//             }
//             else if(*it == temp){
//                 // TC will increase due to shifiting of elements 
//                 nums.erase(it);
//                 it--;
//             }
//         }
//         return nums.size();
//     }
// };


// new attempt 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int n = nums.size();
        while(j < n && i < n){
            if(nums[i] == nums[j]){
                j++;
            }
            else if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i+1;
    }
};