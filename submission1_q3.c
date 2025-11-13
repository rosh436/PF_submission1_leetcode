#include<stdio.h>
void transformArr(int nums[],int numsSize);
int main(){
	int nums[5], i;
	printf("nums = ");
	for(i=0;i<5;i++){
		scanf("%d", &nums[i]);
	}
	transformArr(nums, 5);
	return 0;
}
void transformArr(int nums[], int numsSize){
	int k, returnArr[5], i, temp;
	for(k=0;k<numsSize;k++){
		if(nums[k]%2==0){
			nums[k]=0;
			returnArr[k]=nums[k];
		}
		else{
			nums[k]=1;
			returnArr[k]=nums[k];
		}
	}
	for(k=0;k<numsSize;k++){
		for(i=0;i<numsSize-k-1;i++){
		if(returnArr[i]>returnArr[i+1]){
			temp=returnArr[i];
	      	returnArr[i]=returnArr[i+1];
	    	returnArr[i+1]=temp;
		    }
	
        }	
    }
    for(i=0;i<numsSize;i++){
    	printf("%d", returnArr[i]);
	}
}
