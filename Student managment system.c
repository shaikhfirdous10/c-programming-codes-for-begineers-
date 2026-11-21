THIS IS A STUDENT MANAGEMENT SYSTEM 
#include<stdio.h>
#include<string.h>
#define MAX_SUBJECTS 10
#define MAX_STUDENTS 100
struct stud{
char name[100];
int marks[MAX_SUBJECTS];
int roll_no;
int subjects;		
};
int main(){
	
	struct stud s[MAX_STUDENTS];
	int count  =0;
	int choose;
	do{
	
	printf("***student management system***");
	printf("\n1. add student");
	printf("\n2.display student");
	printf("\n4]3.update student profile");
	printf("\n4.delete student");
	printf("\n5.calculate average marks");
	printf("\n6.highest marks students");
	printf("\n7.sort student");
	printf("\n8.logout");

	printf("\nenter option: ");
	scanf("%d",&choose);
	
	switch(choose)
	{
		case 1: 
		if (count>=MAX_STUDENTS){
			printf("student storage is full!");
			break;
		}
		printf("enter student name to add: ");
          scanf("%99s",s[count].name);
          
		printf("enter roll no: ");
		  scanf("%d",&s[count].roll_no);
		
		printf("total subject:  ");
		scanf("%d",&s[count].subjects);
		
	if((s[count].subjects >= 1) && (s[count].subjects<=MAX_SUBJECTS)){
		for(int i=0;i<s[count].subjects;i++){
			printf("enter marks for each subject:%d ",i+1);
		scanf("%d",&s[count].marks[i]);
		
		if((s[count].marks[i]<0) || (s[count].marks[i]>100)){
	printf("invalid marks! enter from 0-100\n");
	i--;
}
}
count++;
printf("student added successfully!");
}

else {
	printf("invalid number of subjects!!damnn");
}
		break;
		
   case 2:{

   
   	int found=0;
   	 char temp[100];
   	
   	printf("enter student name for details: ");
   	scanf("%99s",temp);	
	   
   	  for(int i=0; i<count ;i++){
   	  if (strcmp(temp,s[i].name)==0){
   	  	printf("student found \n");
   	  	printf("name: %s\n",s[i].name);
   	  	printf("roll num: %d\n",s[i].roll_no);
   	  	printf("subjects:%d\n",s[i].subjects);
   	  	for(int j=0;j<s[i].subjects;j++){
   	  		printf("subjects %d marks: %d\n",j+1,s[i].marks[j]);
			 }
   	  	 found =1;
   	  	 break;
		 }
		 }
		 	if(found==0) {
		 	printf("student not found\n");
		 }
		 
		 break;
	}
	
	case 3:{
	
	int roll,found=0;
	int choice; 
	int i;
	int subject;
	
	printf("student roll num: ");
	scanf("%d",&roll);
	
	for(int i=0;i<count;i++){
		if(roll == s[i].roll_no){
			printf("student found ");
			found =1;
			break;
		}
	}
	if (found ==0){
		printf("student not found");
	}
	else{
	
	printf("what do you want to update");
	printf("\n1.name");
	printf("\n2.roll no");
	printf("\n3.marks");
	printf("\n4.enter choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: 
		printf("enter new name: ");
		scanf("%99s",s[i].name);
		printf("name updated successfully !!");
		break;
		
		case 2: 
		printf("enter roll no for update: ");
		scanf("%d",&s[i].roll_no);
		
		printf("roll number updated successfully!!");
		break;
		
		case 3: 
		printf("enter number of subject to update: ");
		scanf("%d",&subject);
		if(subject>1 && subject<=s[i].subjects){
			printf("enter subject number: ");
			scanf("%d",&s[i].marks[subject-1]);
			if (s[i].marks[subject-1]<0 || s[i].marks[subject-1])
printf("invalid marks enter 0-100\n");
subject=subject;
	 	printf("marks updated successfully!!");
}
else{
	printf("invalid subject number!!damnn");
}
break;		
}

	}
break;	
}

case 4:{
int found =0;
int i;
int roll_no_delete;



printf("enter roll number to delete: ");
scanf("%d",&roll_no_delete);
for(i=0;i<count;i++){
	if(roll_no_delete ==s[i].roll_no){
		found=1;
		break;
	}
}
if(found ==1){
	for(int j=i;j<count-1;j++){
		s[j]=s[j+1];
	}
	count--;
	printf("student deleted successfully");
}	
else{
	printf("student not found ");
	
}
}
}
}while(choose !=9);
return 0;
}
		
		  
