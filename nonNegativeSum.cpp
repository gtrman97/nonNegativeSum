#include <iostream>
using namespace std; 

int nonNegativeSum1(int nums[], int size); 
int nonNegativeSum2(int nums[], int size); 

int main(){

    int nums[] = {1, -3, 5, -8, 4, -3, 2, -10, 9, -1}; 
    int size = sizeof(nums) / sizeof(*nums); 
    int sum1 = nonNegativeSum1(nums, size); 
    cout << sum1 << endl; 
    int sum2 = nonNegativeSum2(nums, size);
    cout << sum2 << endl; 

}

// iteratively 
int nonNegativeSum1(int nums[], int size){

    int sum = 0; 

    for(int i=0; i<size; i++){
        if(nums[i] >= 0)
            sum += nums[i]; 
    }

    return sum; 

}

// recursively 
int nonNegativeSum2(int nums[], int size){
    if(size == 0)
        return 0; 
    int last = nums[size - 1];
    int allButLast = nonNegativeSum2(nums, size - 1);
    if(last >= 0){
        return last + allButLast; 
    }
    else{
        return 0 + allButLast; 

    }
}
