this sis medain of 2 sorted arrays these code r solutions for leetcode but leetcode has it own testcases here i have made them like we have to give the value and 
get the answer oursselves and this is a really good habit for solving logic qustions helps us 
understand codes and build our profiles to 
as leetcode solutions we need subsciptions too there so i have uploaded here


USING DYNAMIC MEMORY ALLOCATION IN C

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *nums1;
	int numsSize;
	int *nums2;
	int nums2Size;
	int *merged;
	int total;
	int even,even2;
	int odd;
    double median;
	
	printf("enter limit: ");
	scanf("%d",&numsSize);
	
	nums1=malloc(sizeof(int)*numsSize);
	
	if(nums1==NULL){
		printf("memory allocation failed");
		return 1;
	}
	
	printf("enter limit 2: ");
	scanf("%d",&nums2Size);
	
	nums2=malloc(sizeof(int)*nums2Size);
	
	if(nums2==NULL){
		printf("memory allocation failed");
		return 1;
	}
	
	merged = malloc(sizeof(int) *(numsSize + nums2Size));
	
	if(merged==NULL){
		printf("memory allocation failed");
		return 1;
	}
	printf("enter elements: ");
	for(int i=0;i<numsSize;i++){
		scanf("%d",&nums1[i]);
	}
	
	printf("enter 2nd array element: ");
	for(int i=0;i<nums2Size;i++){
		scanf("%d",&nums2[i]);
	}
	int i=0; //position of first array
	int j=0;//position of second array
	int k=0;//position of merged array
	
	
	for(;i<numsSize && j< nums2Size;){
		if(nums1[i]< nums2[j]){
			merged[k]=nums1[i];
			i++;//compare
		}
		else{
			merged[k] = nums2[j];
			j++;//copy
		}
		k++;//move forward
	}
	for(;i<numsSize;){
		merged[k]=nums1[i];
		i++;
		k++;
	}
	for(;j<nums2Size;){
			merged[k]=nums2[j];
			j++;
			k++;
				}
	
	printf("sorted array is: ");
	for(int i=0;i<numsSize+nums2Size;i++){
		printf("%d ",merged[i]);
	} 
	
	total=numsSize+nums2Size;
	
	if(total%2==0){
	even =	total/2-1;
	even2 = total/2;
	
	median =(merged[even] + merged[even2])/2.0;
	}
	
	if(total % 2 != 0){
	odd=total/2;
	median = merged[odd];
	}
	printf("median is: %.2f",median);

free(nums1);
free(nums2);
free(merged);

}
