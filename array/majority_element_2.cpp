// Brute force solution 

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> sol;
//         int lim = nums.size()/3;
//         int cnt = 0;
        
//             for(int i = 0; i < nums.size(); i++){
//                 if(i = nums.size() - 1 && nums[i] == nums[i-1]){
//                     cnt++;
//                     if(cnt == lim){
//                         sol.push_back(nums[i]);
//                         cnt = 0;
//                     }
//                 }
//                 else if(nums[i] == nums[i+1]){
//                     cnt++;
//                 }
//                 if(cnt == lim){
//                     sol.push_back(nums[i]);
//                     cnt = 0;
//                 }
//             }
        
//         return sol;   
//     }
// };



// bettwer solution using hash maps and iterating it through in one go thrtough hash map

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        int mini = floor((nums.size())/3);
        vector<int> sol;

        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini + 1){
                sol.push_back(nums[i]);
            }
            if(sol.size() == 2) break;
        }  
        return sol;
    }
};