class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                if(cnt >= temp){
                    cout<<i<<endl;
                    cout<<"cnt value: "<<cnt<<endl;
                    temp = cnt; 
                    cout<<"temp value: "<<temp<<endl<<endl;
                    cnt = 0;
                }
            }
            else{
                cnt++;
            }
        }
        if(cnt >= temp) temp = cnt;
        return temp;
    }
};