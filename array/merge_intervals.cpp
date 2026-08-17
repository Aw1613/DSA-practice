// failed BF solution 

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        for(int i = 0; i < intervals.size() - 1; i++){
            if(intervals[i][0] > intervals[i+1][0] && intervals[i+1][0] > intervals[i][1]){
                if(intervals[i][1] > intervals[i+1][1]){
                    vector<int> tup = {intervals[i][0] , intervals[i][1]};
                    sol.push_back(tup);
                }
                else{
                    vector<int> tup = {intervals[i][0] , intervals[i+1][1]};
                    sol.push_back(tup);
                }
            }
            else if(intervals[i+1][0] > intervals[i][0] && intervals[i][0] > intervals[i+1][1]){
                if(intervals[i][1] > intervals[i+1][1]){
                    vector<int> tup = {intervals[i+1][0] , intervals[i][1]};
                    sol.push_back(tup);
                }
                else{
                    vector<int> tup = {intervals[i+1][0] , intervals[i+1][1]};
                }
            }
        }
        return sol;
    }
};