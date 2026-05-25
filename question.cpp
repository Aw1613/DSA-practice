#include <iostream>
using namespace std;

// Bubble sort

int main() {
	int arr[] = {24,13,52,46,9,20};
	
	for(int i = 6-1; i >= 0; i--){
	    for(int k = 0; k <= i; k++){
	        if(arr[k] > arr[k+1]){
	            swap(arr[k], arr[k+1]);
	        }
	    }
	}
	for(int i = 0; i<= 5; i++){
	    cout<<arr[i]<<" ";
	}
	
    
}