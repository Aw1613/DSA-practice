#include <iostream>
using namespace std;

// Bubble sort

int main() {
	int arr[] = {24,13,52,46,9,20};

	bool swaped = false;

	for(int i = 6-1; i >= 0; i--){
	    for(int k = 0; k <= i; k++){
	        if(arr[k] > arr[k+1]){
	            swap(arr[k], arr[k+1]);
                swaped = true;
	        }
	    }
        // If no swaped happend in 1st round then this means that it is sorted so we 
        // can break out of the loop 
        if(swaped == true){
            break;
        }
	}
	for(int i = 0; i<= 5; i++){
	    cout<<arr[i]<<" ";
	}
	
    
}