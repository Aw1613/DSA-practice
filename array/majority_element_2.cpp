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

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         map<int,int> mpp;
//         int mini = floor((nums.size())/3);
//         vector<int> sol;

//         for(int i = 0; i < nums.size(); i++){
//             mpp[nums[i]]++;
//             if(mpp[nums[i]] == mini + 1){
//                 sol.push_back(nums[i]);
//             }
//             if(sol.size() == 2) break;
//         }  
//         return sol;
//     }
// };


// ATP 2
// edge case couldn't handel properly 
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mpp;
//         vector<int> sol;
//         int t = floor((nums.size())/3);
//         for(int i = 0; i < nums.size() ; i++){
//             // if(i == 0) mpp[nums[i]]++;
//             if(mpp[nums[i]] <= t){
//                 mpp[nums[i]]++;
//             }
//             else if(mpp[nums[i]] > t){
//                 sol.push_back(nums[i]);
//             }
//         }
//         return sol;
//     }
// };


// Optimal solution 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        int cnt1 = 0, cnt2 = 0;
        vector<int> sol;
        for(int i = 0; i < nums.size(); i++){
            if(cnt1 == 0 && el2 != nums[i]){
                el1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                el2 = nums[i];
                cnt2 = 1;
            }
            else if(el1 == nums[i]){
                cnt1++;
            }
            else if(el2 == nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(el1 == nums[i]){
                cnt1++;
            }
            else if(el2 == nums[i]){
                cnt2++;
            }
        }
        int req = (int)(nums.size()/3);
        if(cnt1 > req) sol.push_back(el1);
        if(cnt2 > req) sol.push_back(el2);
        return sol;

    }
};