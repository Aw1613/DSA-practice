// Brute force solution with two nested loops 
class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int l = nums.size();
        int total = 0 ;
        for(int i = 0; i < l; i++){ 
            bit_xor<int> xor_func;
            int result = 0;
            for(int j = i; j < l; j++){
                if(j == i){
                    result = nums[j];
                    if(result == k){
                        total++;
                    }
                    continue;
                }
                result = result ^ nums[j];
                if(result == k){
                    total++;
                }
            }
        }
        return total;
    }
};