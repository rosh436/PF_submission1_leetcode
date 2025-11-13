#include<stdio.h>
void shuffle(int nums[], int n);
int main(){
	int i, nums[100], n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int numsSize=2*n;
	printf("nums= ");
	for(i=0;i<numsSize;i++){
		scanf("%d", &nums[i]);
	}
	shuffle(nums, n);
	return 0;
}
void shuffle(int nums[], int n){
	
	int j=0, returnArr[100], k;
	for(k=0;k<n;k++){
		returnArr[j++]=nums[k];
		returnArr[j++]=nums[k+n];
	   
	}
	for(k=0;k<2*n;k++){
		printf("%d", returnArr[k]);
	}
}
