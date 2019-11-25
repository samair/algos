#include <iostream>
using namespace std;

int maxSumSubarray(int arr[], int size){
    
    int maxTillnow = 0;
    int maxSub= arr[0];
    
    for (int i =0; i <size; i++){
       
  
        
        maxTillnow = maxTillnow + arr[i];
        if (maxTillnow < arr[i]){
            
            maxTillnow = arr[i];
        }
        
        if (maxSub <= maxTillnow ){
            maxSub=maxTillnow;
     
        }
    }
    return maxSub;
}
int main() {
	//code
	
	int testCases;
	int sizeArray;
	cin >> testCases;
	while(testCases--){
	    cin >> sizeArray;
	    int arr[sizeArray];
	    for (int i = 0; i < sizeArray;i++){
	        cin >> arr[i];
	    }
	    cout<< maxSumSubarray(arr,sizeArray) <<endl;
	    
	}
	
	return 0;
}
