// Brute force solution which did not worked

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//        int max = prices[prices.size()-1];
//        int min = prices[prices.size()-1];
//        int sell = prices.size()-1;
//        int buy = 0;

//        for(int i = prices.size()-2; i >= 0; i--){
//         if(prices[i] > max && i > buy){
//             max = prices[i];
//             sell = i;
//         }
//         else if(prices[i] < min && sell > i){
//             min = prices[i];
//             buy = i;
//         }
//        }

    
//        return max-min;
//     }
// };

// Tried other approach to find the max and min and see if they aren't crossing eachother
// but we have to find the possible max sol , not absolute max

//    auto max_it = max_element(prices.begin(),prices.end());
    //    int max_idx = distance(prices.begin(),max_it);
    //    auto min_it = min_element(prices.begin(),prices.end());
    //    int min_idx = distance(prices.begin(),min_it);
    //    if(min_idx >= max_idx){
    //     return 0;
    //    }
    //    else{
    //     return *max_it - *min_it;
    //    }