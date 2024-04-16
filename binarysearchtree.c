//create a binary search tree and perform traversal
#include<stdio.h>
#include<stdlib.h>
struct node {
    int key;
    struct node*left,*right;};
    struct node*newnode(int item){
        struct node*temp = (struct node*)malloc(sizeof(struct node));
        temp->key=item;
        temp->left=temp->right=NULL;
        return temp;
    }
    void inorder(struct node*root){
        if(root!=NULL) {
            inorder(root->left);
            printf("%d",root->key);
            inorder(root->right);
        }
    }
struct node*Insert(struct node*node,int key){
if(node==NULL){
    return newnode(key);
    if(key<node->key){
        node->left=Insert(node->left,key);
    }
    if(key>node->key){
        node->right=Insert(node->right,key);

    }
    return node;
}
}

int main(){
    struct node*root=NULL; 
    root=Insert(root,100);
    Insert(root,90);
    // Insert(root,80);
    // Insert(root,70);
    // Insert(root,110);
    // Insert(root,120);
    // Insert(root,170);
    // printf("Inorder traversal of the constructed tree is \n");
    inorder(root);
}