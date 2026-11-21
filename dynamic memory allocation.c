tis is a dynamic memeory allocation program for begineers as u can try doingt his at ur laptop or pc and learn 

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *nums;
	int numsSize;
	int target;
	
	printf("enter limit: ");
	scanf("%d",&numsSize);
	
	nums=malloc(sizeof(int)*numsSize);
	
	if(nums==NULL){
		printf("memory allocation failed");
		return 1;
	}
	
	printf("enter elements: ");
	for(int i=0; i<numsSize;i++){
		scanf("%d",&nums[i]);
	}
	
	printf("enter target: ");
	scanf("%d",&target);
	
	for(int i=0;i<numsSize;i++){
		for(int j=i+1;j<numsSize;j++){
			if(nums[i]+ nums[j] == target){
				int *result = malloc(2*sizeof(int));
				result[0]=i;
				result[1]=j;
				printf("%d  %d \n",result[0],result[1]);
				free(result);
			}
		}
	}
	
	
	
	
	
	
	
}
