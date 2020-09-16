#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct student
{
    int marks,age,flag;
    
};

void main()

{
    struct student st[5];    
printf("Enter Records of 5 students");    
for(int i=0;i<5;i++){    
printf("\nEnter Age:");    
scanf("%d",&st[i].age);    
printf("\nEnter Marks:");    
scanf("%d",&st[i].marks);    
}    
printf("\nStudent Information List:");    
for(int i=0;i<5;i++){   
    int x = i;
printf("\nID: %d, Age: %d , Marks: %d \n", x , st[i].age,st[i].marks); 
if(st[i].marks>=0&&st[i].age>20&&st[i].marks<=100)
    {
        
      if(st[i].marks>=65)
        {
             printf("Student has been qualified for admission with marks: %d\n",st[i].marks);
        }
        else
        {
            printf("student details identified for admission and not qualified\n");
        }
   
else {
printf("student not qualified\n");}
}    
   
    
}
