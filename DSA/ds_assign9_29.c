#include<stdio.h>
#include<stdlib.h>
struct node      
{
    int value;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){  
    int nodeSize = sizeof(struct node);
    struct node* newNode = malloc(nodeSize);
    newNode->value = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insertNode(struct node* current, int data)    
{
    if (current == NULL)    
        return createNode(data);
    if (current->value < data)
        current->right = insertNode(current->right, data); 
    else if (current->value > data)
        current->left  = insertNode(current->left, data); 
 
    return current;
}

void inOrderTraversal(struct node* current){  
    if(current == NULL)  
       return;
    
    inOrderTraversal(current->left);
    printf("%d \n", current->value);
    inOrderTraversal(current->right);
}

int main(){
    int choice, value;
    struct node *root;
    root  = NULL;
    printf("Enter root\n");
    scanf("%d",&value);
    root = insertNode(root, value);
    choice = 1;
    while(choice!=3)
    {
        printf("\nenter choice\n 1. insert\n2. Traversal\n3. exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: 
            printf("enter value to insert");
            scanf("%d",&value);
            insertNode(root, value);
            break;
        case 2:
            inOrderTraversal(root);
            break;
        case 3: printf("exiting");
            break;
        default: printf("wrong choice");
            break;
        }
    }
    return 0;
}