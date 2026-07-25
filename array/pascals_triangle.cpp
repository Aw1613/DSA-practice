// Solution is optimal but the readablilty and code style is not good 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;      
        if(numRows == 1){
            sol.push_back({});
            sol[0].push_back({1});
            return sol;
        }
        else{
            sol.push_back({});
            sol[0].push_back({1});
            for(int i = 1; i < numRows; i++){
                // First bringing the row to existence before pushing in
                sol.push_back({});
                sol[i].push_back({1});
                int row = i;
                if(row > 1){
                    for(int j = 0; j <= row-2; j++){
                    sol[i].push_back(sol[i-1][j] + sol[i-1][j+1]);
                    }
                }
                sol[i].push_back(1);
            }
        }
        return sol;
    }
};