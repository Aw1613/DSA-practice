// Brute force solution , SC = O(N^2), need to do in place 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> sol(matrix.size(), vector<int>(matrix.size(), 0));
        int ind = 0;
        int m = matrix[0].size() -1;
        int n = matrix.size() -1;

        for(int i = n; i >= 0; i--){
            for(int j = n; j >= 0; j--){
                sol[n-i][n-j] = matrix[j][ind];
            }
            ind++;
        }

        matrix = sol;
        return;
    }
};