#include<stdio.h>
void runningSum(int nums[], int numsSize);
void printArr(int returnArr[], int returnSize);
int main(){
     int nums[5], j, k, returnarr[5]; 
     printf("nums = ");
      for(j=0;j<5;j++){ 
        scanf("%d", &nums[j]); //input the array
        } 
    runningSum(nums, 5); //function call for calculating the running sum
    } 
void runningSum(int nums[], int numsSize) { 
    int i, sum=0, returnArr[5]; 
    for(i=0;i<numsSize;i++){ 
        sum=nums[i]+sum; 
        returnArr[i]=sum; 
        } 
    printArr(returnArr, 5); 
    } 
void printArr(int returnArr[], int returnSize){ 
    int i; 
    for(i=0;i<returnSize;i++) 
    printf("%d ", returnArr[i]); 
    }


