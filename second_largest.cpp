#include <bits/stdc++.h>
using namespace std;
// link :- https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/2029608260/
bool isSorted(vector<int>& nums) {
        int cnt = 0;
        int index;
        for(int i = 0; i < nums.size()-2; i++){
			    if(nums[i] > nums[i+1]){
                    cnt++;//i + 1 is culprit
                    index = i+1;
                    cout<<index<<endl;
			    }
		}

        if(cnt == 1){
            auto it = nums.begin() + (index);
            cout<<"location of start "<<*it<<endl;
            cout<<"Loop1"<<endl;
            while(it != nums.end()){
                cout<<*(it)<<endl;
                if(*it > *(it+1) && (it+1 != nums.end())) {
                    return false;
                    
                }
                it++;
            }
            it = nums.begin();
            cout<<"loop2"<<endl;
            while(it != nums.begin() + (index - 1)){
                cout<<*(it)<<endl;
                if(*it > *(it+1)) {
                    return false;
                }
                it++;
            }
        }else if(cnt > 1) return false;

		return true;
    }

int main() {
	vector<int> ary = {3,4,5,1,2};
	int ans = isSorted(ary);
	cout<<ans;

}
