#include<stdio.h>
#include<stdlib.h>

struct bst
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct bst node;

node *create()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("Enter the data : \n");
    scanf("%d",&temp->data);
    temp->left = temp->right = NULL;
    return temp;
}

void insert(node *root,node *temp)
{
    if(temp->data < root->data)
    {
        if(root->left != NULL)
            insert(root->left,temp);
        else
            root->left = temp;
    }
    if(temp->data > root->data)
    {
        if(root->right != NULL)
            insert(root->right,temp);
        else
            root->right = temp;
    }
}

void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d \n",root->data);
        inorder(root->right);
    }
}

void preorder(node *root)
{
    if(root != NULL)
    {
        printf("%d \n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if(root != NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d \n",root->data);
    }
}

void main()
{
    int n,i;
    node *root = NULL,*temp;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        temp = create();
        // printf("here 1");
        if(root == NULL)
            root = temp;
        else
            insert(root,temp);
    }
    printf("Inorder traversal \n");
    inorder(root);
    printf("Preorder traversal \n");
    preorder(root);
    printf("Postorder traversal \n");
    postorder(root);
}

//OUTPUT
// 
// Enter the number of elements :
// 3
// Enter the data :
// 4
// Enter the data :
// 5
// Enter the data :
// 3
// Inorder traversal
// 3
// 4
// 5
// Preorder traversal
// 4
// 3
// 5
// Postorder traversal
// 3
// 5
// 4