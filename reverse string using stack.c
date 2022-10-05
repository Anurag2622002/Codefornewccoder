#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_SIZE 101

int A[MAX_SIZE],B[MAX_SIZE] ;
int top=-1;
int top2=-1;

void push(char x){
   if(top == MAX_SIZE-1){
       printf("Error! Stack Overflow!\n");
   }
       top++;
       A[top]=x;
   
}



void print(){
    for(int i=0;i<=top;i++){
        printf(" %c ",A[i]);
    }
    printf("\n");
}

void print2(){
    for(int i=0;i<=top2;i++){
        printf(" %c ",B[i]);
    }
    printf("\n");
}

void reversePush(char x){
    
   if(top2 == MAX_SIZE-1){
       printf("Error! Stack Overflow!\n");
   }
       top2++;
       B[top2]=x;
}

int main()

{
    
    char str[100];
    printf("Enter String: ");
     scanf("%[^\n]%*c", str);
  for(int i=0;i<strlen(str);i++){
      push(str[i]);
  }
    // push('M');
    
    // push('4');
    
    // push('1');
    
    // push('6');
    
    print();
    
    
 
    
    int counter=top;
    for(int i=0;i<=counter;i++){
    reversePush(A[top]);
    
    top--;
    }
    print2();
    
    
    
    
    //// push and pop in stack 
    //sort stack with recursion and without recursion
    ////reverse a stack
    //tower of hanoi
    ////reverse a string using a stack
    //check whether the 2 expressions in the brackets are same or not
    ////implement conversion of infix to postfix
    //check whether the parenthesis are balanced or not in the given expression 
    

    return 0;
}
