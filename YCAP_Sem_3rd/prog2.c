//Name: Yash Izate
//Roll No: 61

#include<stdio.h>

void swap(int*,int*);

int main(){
  int num1,num2;
  printf("input 1st number:");
  scanf("%d",&num1);
  printf("input 2nd number:");
  scanf("%d",&num2);
  printf("before swapping ;number1=%d,number2=%d",num1,num2);
  swap(&num1,&num2);
  printf("\n after swapping :number1=%d,number2=%d \n \n",num1,num2);
  return 0;
}

void swap(int *p,int *q)
{  
  int tmp;
  tmp=*p;
  *p=*q;
  *q=tmp;
}