//create a single link list
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
void insert_given();
void delete_beg();
void delete_end();
void delete_data();
void main()
{
    create();
   display();
   insert_beg();
   insert_end();
   insert_given();
   delete_beg();
   delete_end();
   delete_data();

}

void create(){
    struct node*ptr,*cpt;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the first node info");
    scanf("%d",&ptr->info);
    ptr->link=NULL;
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
 ptr->link=NULL;
}

void display()
{
    struct node*ptr;
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;}
       }
// INSERTING A NEW NODE AT BEGINNING
void insert_beg()
{
    struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("enter new node at beg");
scanf("%d",&ptr->info);
ptr->link=first;
first=ptr;
display();
}
// INSERTING A NEW NODE AT THE END
void insert_end()
{
struct node*ptr,*cpt;
ptr=(struct node*)malloc(sizeof(struct node));
cpt=first;
printf("enter new node at end");
scanf("%d",&ptr->info);
while(cpt->link!=NULL){
    cpt=cpt->link;
    ptr->link=NULL;
    cpt->link=ptr;}
    display();
}
// INSERTING A NEW NODE AFTER A GIVEN DATA
void insert_given()
{
    int data;
    struct node*ptr,*cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the new node info");
      scanf("%d", &ptr->info);
    cpt=first;
    printf("enter the data");

    scanf("%d",&data);

    while(cpt->info!=data){
    cpt=cpt->link;
    ptr->link=cpt->link;
    cpt->link=ptr;}
    display();


}
// DELETING THE BEGINNING NODE
void delete_beg(){
    struct node*ptr;
    ptr=first;
    first=first->link;
    free(ptr);
    display();
}
// DELETING THE END NODE
void delete_end()
{
    struct node*ptr,*cpt;
    ptr=first;
    while(ptr->link!=NULL){
        cpt=ptr;
        ptr=ptr->link;

    }
    cpt->link=NULL;
    free(ptr);
    display();
}
// DELETING THE NODE AFTER THE GIVEN DATA
void delete_data()
{
    struct node*ptr,*cpt;
    int data;
    printf("enter the data");
    scanf("%d",&data);
    ptr=first;
    while(ptr->info!=data){
        cpt=ptr;
        ptr=ptr->link;
        }
        cpt->link=ptr->link;
        free(ptr);
        display();

}