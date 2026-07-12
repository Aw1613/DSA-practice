// brute force solution with SC = O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> check_map;
        int target = nums.size();
        for(int i = 0; i < nums.size(); i++){
            auto it = check_map.find(nums[i]);
            if(it != check_map.end()){
                check_map[nums[i]]++;
                if(it->second > target/2){
                    return it->first;
                }
            }
            else{
                cout<<i<<endl;
                check_map[nums[i]] = 1;
            }
        }
        return nums[0];
    }
};