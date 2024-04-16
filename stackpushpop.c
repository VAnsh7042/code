//STACK OPERATIONS
#include<stdio.h>
#include<stdlib.h>
#define size 6
//insert element in stack
int top=-1;
int stack[size];
void push(){
    int val;
    if(top == size - 1){
        printf("\noverflow");
            }
            else{
                printf("enter the element");
                scanf("%d",&val);
                top=top+1;
                stack[top]=val;
            }
            }
// delete element
void pop(){
    if(top==-1) {
        printf("\nunderflow");
    }
    else{
        top=top-1;
         }
}
// display the element
void display(){
    for(int i=top;i>=0;i--){
        printf("%d\t",stack[i]);

    }
}
int  main(){
    // int choice;
    // while (1) {
    //     printf("\nPerform operations on the stack:");
    //     printf("\n1. Push the element\n2. Pop the element\n3. Show\n4. End");
    //     printf("\n\nEnter the choice: ");
    //     scanf("%d", &choice);
    //     switch (choice) {
    //         case 1:
    //             push();
    //             break;
    //         case 2:
    //             pop();
    //             break;
    //         case 3:
    //             display();
    //             break;
    //         case 4:
    //             exit(0);
    //         default:
    //             printf("\nInvalid choice!!");
    //     }
    // }
    push();
    pop();
    display();
    return 0;
}

