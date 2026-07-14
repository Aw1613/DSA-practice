// brute force solution with SC = O(N)

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> check_map;
//         int target = nums.size();
//         for(int i = 0; i < nums.size(); i++){
//             auto it = check_map.find(nums[i]);
//             if(it != check_map.end()){
//                 check_map[nums[i]]++;
//                 if(it->second > target/2){
//                     return it->first;
//                 }
//             }
//             else{
//                 cout<<i<<endl;
//                 check_map[nums[i]] = 1;
//             }
//         }
//         return nums[0];
//     }
// };


// Boyer-Moore Voting Algorithm TC = O(N) SC = O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                el = nums[i];
                cnt = 1;
            }
            else if(nums[i] != el){
                cnt--;
            }
            else if(nums[i] == el){
                cnt++;
            }
        }
        return el;
    }
};