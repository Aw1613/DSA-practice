// Brute force solution, single test case passed earlier

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         vector<int> i_store;
//         vector<int> j_store;
//         for(int i = 0; i < matrix.size(); i++){
//             for(int j = 0; j < matrix[i].size(); j++){
//                 if(matrix[i][j] == 0){
//                     i_store.push_back(i);
//                     j_store.push_back(j);
//                 }
//             }
//         }
//         auto it_i = i_store.begin();
//         auto it_j = j_store.begin();

//         for(int i = 0; true; i++){
//             matrix[*it_i][i] = 0;
//             if(i == matrix[1].size()-1){
//                 it_i = it_i + 4;
//             }
//             if(it_i == i_store.end()){
//                 break;
//             }
//         }
//         for(int j = 0; true; j++){
//             matrix[j][*it_j] = 0;
//             if(j == matrix.size()-1){
//                 it_j = it_j + 4;
//             }
//             if(it_j == j_store.end()){
//                 break;
//             }
//         }
//     }
// };

// Better solution not the optimal with TC = O(N^2) approx
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row(matrix.size(),0);
        vector<int> col(matrix[0].size(),0);

        // upadate the value of our extra space as marker
        for(int y = 0; y < matrix.size(); y++){
            for(int x = 0; x < matrix[0].size(); x++){
                if(matrix[y][x] == 0){
                    col[x] = 1;
                    row[y] = 1;
                }
            }
        }

        for(int y = 0; y < matrix.size(); y++){
            for(int x = 0; x < matrix[0].size(); x++){
                if(row[y] == 1 || col[x] == 1){
                    matrix[y][x] = 0;
                }
            }
        }
    }
};