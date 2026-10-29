## 📝 Problem Description

Given an integer array `nums`, move all the zeros (`0`) to the end of the array.

The order of the non-zero numbers must stay the same.

**Important:** You must modify the original array without creating another array.

## 💡 Example 1

**Input:**
```text
nums = [0, 1, 0, 3, 12]
```

**Output:**
```text
[1, 3, 12, 0, 0]
```

**Explanation:**

- The non-zero numbers are `1`, `3`, and `12`.
- Move these numbers to the beginning, keeping their original order.
- Move both zeros to the end.

## 💡 Example 2

**Input:**
```text
nums = [0]
```

**Output:**
```text
[0]
```

**Explanation:** The array contains only one zero, so it remains unchanged.

## 🎯 Requirements

- Keep the order of all non-zero elements unchanged.
- Modify the original array directly.
- Do not create another array to store the result.

## 🧠 Concepts Used

- Arrays
- Loops and conditional statements
- Pointers and indexing
- In-place array modification ..............

#include<stdio.h>
int main(){
	int nums[100];
	int numsSize;
	 
	printf("enter the size: ");
	scanf("%d",&numsSize);

	printf("enter the number :  \n");
	for(int i=0;i<numsSize;i++){
		scanf("%d",&nums[i]);
	}
		int j=0;
		for(int i=0;i<numsSize;i++){
			if (nums[i]!=0){
				nums[j]=nums[i];
				j++;
			}
		}
		for(;j<numsSize;j++){
			nums[j]=0;
		}
		for(int i=0;i<numsSize;i++){
			printf("%d ", nums[i]);
		}
	}
