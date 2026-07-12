// attempt 1 Brute force way

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(nums[i] > nums[j]){
//                     swap(nums[i],nums[j]);
//                 }
//             }
//         }
//     }
// };

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(high >= mid){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
                cout<<"1"<<endl;
            }
            else if(nums[mid] == 1){
                mid++;
                cout<<"2"<<endl;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
                cout<<"3"<<endl;
            }
        }
    }
};