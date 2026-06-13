class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        k = k%s;
        vector<int> temp(s,0);
        for(int i = 0; i < s; i++){
            temp[i] = nums[(i+k)%(s)];
            cout<<"this one "<<(i+k)%(s)<<endl;
        }
        // for(int i = 0 ; i < s; i++){
        //     cout<<temp[i]<<endl;
        // }
        nums = temp;
    }
};