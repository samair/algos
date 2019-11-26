#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int getMajority(int  inputArr[], int size){
    
    map<int,int> countMap;
    
    for (int i =0; i<size; i ++){
        if (countMap.find(inputArr[i]) !=countMap.end()){
            countMap[inputArr[i]] = countMap[inputArr[i]] +1;
        }
        else
        {
            countMap[inputArr[i]] = 1;
        }
    }
    
    //Iterate through the map and 
    int largest =0;
    int pos=0;
    for (map<int,int>::iterator it = countMap.begin(); it != countMap.end(); ++it){
        if (it->second > largest){
            largest = it->second;
            pos = it->first;
        }
    }
    if (largest == 1 || largest <= size/2){
        pos = -1;
    }
    return pos;
}

int main() {

	int n, T,i;
	scanf("%d",&T);
	while(T--){
	scanf("%d",&n);
	int arr[n];
	for (int k =0; k <n ;k++)
	  scanf("%d",&arr[k]);
       cout<< getMajority(arr,n)<<endl;
	}
	
	return 0;
	
}
