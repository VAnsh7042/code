#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int info;
    struct node*link;

};
struct node*first;
void create();
void display();
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();

void main()
{
    create();
   display();
  // insert_beg();
   insert_end();
   delete_beg();
   delete_end();
   

}

void create(){
    struct node*ptr,*cpt;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the first node info");
    scanf("%d",&ptr->info);
    ptr->link=ptr;
    first=ptr;
 
 do{
    cpt=(struct node*)malloc(sizeof(struct node));
    printf("enter the next node info");

    scanf("%d",&cpt->info);
    ptr->link=cpt;
    ptr=cpt;
    
    printf("press y for new node and n for exit\n");
    ch=getch();
 }
 while(ch=='y');
 ptr->link=first;
}

void display()
{
    struct node*ptr;
    ptr=first;
    while(ptr->link!=first)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;
}
printf("%d\n",ptr->info);
}
// INSERTING A NEW NODE IN THE BEGINNING
void insert_beg(){
    struct node*ptr,*cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the node info");
    scanf("%d\t",&ptr->info);
    cpt=first;
    while(cpt->link!=first)
    cpt=cpt->link;
    ptr->link=first;
    first=ptr;
    cpt->link=first;
    display();

}
// INSERTING A NEW AT THE END
void insert_end(){
    struct node*ptr,*cpt;
    ptr=first;
    while(ptr->link!=first)
        ptr=ptr->link;
    
    cpt=(struct node*)malloc(sizeof(struct node));
    printf("enter the end node info");
    scanf("%d",&cpt->info);
    cpt->link=first;
    ptr->link=cpt;
    


display();
}
// DELETING THE BEGINNING NODE
void delete_beg(){
    struct node*ptr,*cpt;
    cpt=first;
    ptr=first;
    while(ptr->link!=first)
        ptr=ptr->link;
        ptr->link=cpt->link;
        first=cpt->link;
        free(cpt);
        display();
    
}
// DELETING THE END NODE
void delete_end(){
    struct node*ptr,*cpt;
    ptr=first;
    while(ptr->link!=first){
    cpt=ptr;
    ptr=ptr->link;
    cpt->link=first;
    free(ptr);}
    display();
}