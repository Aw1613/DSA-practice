#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        auto ptr1 = nums1.begin();
        auto ptr2 = nums2.begin();
        vector<int> sol;
        int cnt = 0;
        while(ptr1 != nums1.end() && ptr2 != nums2.end()){
            if(cnt > 0){
                if((sol[cnt - 1] != *ptr1)&&(sol[cnt - 1] != *ptr2)){
                    if(*ptr1 > *ptr2){
                        sol.push_back(*ptr2);
                        ptr2++;
                    }else{
                        sol.push_back(*ptr1);
                        ptr1++;
                    }
                }
            }
            cnt++;
        }
        while(ptr1 != nums1.end()){
            if(sol[cnt - 1] != *ptr1){
                sol.push_back(*ptr1);
            }
                ptr1++;
        }
        while(ptr2 != nums2.end()){
            if(sol[cnt - 1] != *ptr2){
                sol.push_back(*ptr2);
            }
                ptr2++;
        }
        return sol;
    }

int main() {
	vector<int> nums1 = {1, 2, 3, 4, 5};
	vector<int> nums2 = {1, 2, 7};
	vector<int> sol = unionArray(nums1, nums2);
	for(int i = 0; i < sol.size(); i++){
	    cout<<sol[i]<<endl;
	}

}