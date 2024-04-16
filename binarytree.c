//create a binary tree and perform trevaersal
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node*root=NULL;
struct node *create();
void display(struct node*);
void construct();
void main(){
    construct();
    display(root);}
    void construct(){
        root=create();
        root->data=50;
        root->left=create();
        root->left->data=20;
        root->right=create();
        root->right->data=30;
        root->left->left=create();
        root->left->left->data=10;
        root->left->right=create();
        root->left->right->data=40;

    }
    struct node*create(){
        struct node*ptr;
        ptr= (struct node*)malloc(sizeof(struct node));
        return ptr;

    }
    void display(struct node*ptr){
        if(ptr!=NULL){
            display(ptr->left);
            printf("%d\t",ptr->data);
            display(ptr->right);
        }       

}