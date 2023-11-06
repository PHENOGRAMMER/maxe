#include<stdio.h>
#include<malloc.h>

struct node
{
    struct node *left;
    char data;
    struct node *right;
};

struct node *constructTree(int);
void inorder(struct node *);
char array[]={'A','B','C','D','E','F','G','\0','\0','H','I'};
int leftchild[]={1,3,5,-1,9,-1,-1,-1,-1,-1,-1};
int rightchild[]={2,4,6,-1,10,-1,-1,-1,-1,-1,-1};

void main(){
    struct node *root;
    root=constructTree(0);
    printf("In-orde traversal: \n");
    inorder(root);
    getchar();
}

struct node *constructTree(index){
    struct node *temp=NULL;
    if(index!=-1){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->left=constructTree(leftchild[index]);
        temp->data=array[index];
        temp->right=constructTree(rightchild[index]);
    }
    return temp;
}