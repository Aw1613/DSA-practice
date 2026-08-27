// class Solution {
//   public:
//     int maxLen(vector<int>& arr) {
//         // vector<int> triper;
//         int l = arr.size();
//         int maxi = 0;
//         for(int i = 0; i < l; i++){
//             vector<int> triper(arr.begin()+i, arr.end());
//             int sum = std::accumulate(triper.begin(),triper.end(),0);
//             while(sum != 0 && triper.size() >= 0){
//                 int num = triper.back();
//                 sum = sum - num;
//                 triper.pop_back();
//             }
//             int len = triper.size();
//             maxi = std::max(maxi,len);
//         }
//         return maxi;
//     }
// };


// Optimal solution 
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int l = arr.size();
        int sum = 0;
        int maxi = 0;
        map<int,int> mpp;
        for(int i = 0; i < l; i++){
            sum = sum + arr[i];
            auto it = mpp.find(sum);
            if(it != mpp.end()){
                maxi = max(maxi,i-it->second);
            }
            else{
                mpp[sum] = i;
            }
            
        }
        return maxi;
    }
};