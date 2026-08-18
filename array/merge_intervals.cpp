// failed BF solution 

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>> sol;
//         for(int i = 0; i < intervals.size() - 1; i++){
//             if(intervals[i][0] > intervals[i+1][0] && intervals[i+1][0] > intervals[i][1]){
//                 if(intervals[i][1] > intervals[i+1][1]){
//                     vector<int> tup = {intervals[i][0] , intervals[i][1]};
//                     sol.push_back(tup);
//                 }
//                 else{
//                     vector<int> tup = {intervals[i][0] , intervals[i+1][1]};
//                     sol.push_back(tup);
//                 }
//             }
//             else if(intervals[i+1][0] > intervals[i][0] && intervals[i][0] > intervals[i+1][1]){
//                 if(intervals[i][1] > intervals[i+1][1]){
//                     vector<int> tup = {intervals[i+1][0] , intervals[i][1]};
//                     sol.push_back(tup);
//                 }
//                 else{
//                     vector<int> tup = {intervals[i+1][0] , intervals[i+1][1]};
//                 }
//             }
//         }
//         return sol;
//     }
// };




// better solution attemtp 2
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        sort(intervals.begin(),intervals.end());
        int num = -1;

        int mini = min(intervals[0][0],intervals[0][1]);
        int maxi = max(intervals[0][0],intervals[0][1]);
        if(intervals.size() == 1){
            vector<int> tup = {intervals[0][0],intervals[0][1]};
            sol.push_back(tup);
        }
        for(int i = 1; i < intervals.size(); i++){
            int rl = min(intervals[i][0],intervals[i][1]);
            int ru = max(intervals[i][0],intervals[i][1]);

            if (mini <= rl && rl <= maxi){
                if(maxi < ru){
                    maxi = ru;
                }
                if(sol.empty() == true){
                    vector<int> tup = {mini,maxi};
                    sol.push_back(tup);
                    num++;
                }
                else{
                    sol[num][1] = maxi;
                }
            }
            else {
                if(i < intervals.size()-1){
                    mini = min(intervals[i][0],intervals[i][1]);
                    maxi = max(intervals[i][0],intervals[i][1]);
                    vector<int> tup = {mini,maxi};
                    sol.push_back(tup);
                }
                else{
                    vector<int> tup = {intervals[i][0],intervals[i][1]};
                    sol.push_back(tup);
                }
            }            

        }
        
        return sol;
    }
};