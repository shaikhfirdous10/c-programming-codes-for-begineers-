in this solution we have find the dublicate number which appears twice in the numbers using  array and bool we can solve this 
  this is a easy level queation to solve 
Problem: Contains Duplicate👀

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

try solving this on ur own logic without using AI ,calude etc 
if u cant refer solution  below❤
#include<stdio.h>
#include<stdbool.h>
int main(){
int nums[100];
int numsSize;
int count=0;
int dublicatefound=0;

printf("enter size: ");
scanf("%d",&numsSize);

printf("enter elements: ");
for(int i=0;i<numsSize;i++){
	scanf("%d",&nums[i]);
}	
	for(int i=0;i<numsSize;i++){
		count =0;
		for(int j=0;j<numsSize;j++){
			if(nums[i]==nums[j]){
				count++;
			}
		}
		if(count>=2){
		  dublicatefound=1;
	}
	}
		if(dublicatefound==1){
		printf("dublicate found ");
	}
	else{
		printf("no dublicate");
	}
}
