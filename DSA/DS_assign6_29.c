#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  

struct node *head;  
void insertStart();  
void insertEnd();  
void insertion_specified();  
void deleteStart();  
void deleteEnd();  
void display();  
int main ()  
{  
int temp =0;  
    while(temp !=7)  
    {  
        printf("1.Insert in begining\n2.Insert in end\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Print List\n7.Exit\n");  
        scanf("\n%d",&temp);  
        switch(temp)  
        {  
            case 1:  
            insertStart();  
            break;  
            case 2:  
            insertEnd();  
            break;  
            case 3:  
            insertion_specified();  
            break;  
            case 4:  
            deleteStart();  
            break;  
            case 5:  
            deleteEnd();  
            break;  
            case 6:  
            display();  
            break;  
            case 7:  
            exit(0);
            break;  
            default:  
            printf("Please enter between 1-7");  
        }  
    }  
}  
void insertStart()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter value of node to be inserted : ");  
    scanf("%d",&item);  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;  
       head=ptr;  
   }  
}  
     
}  
void insertEnd()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;   
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
    }  
void insertion_specified()  
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       temp=head;  
       printf("Enter the location");  
       scanf("%d",&loc);  
       for(i=0;i<loc;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               printf("\n There are less than %d elements", loc);  
               return;  
           }  
       }  
       printf("Enter value");  
       scanf("%d",&item);  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       printf("\nnode inserted\n");  
   }  
}  
void deleteStart()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
    }  
  
}  
void deleteEnd()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
    }  
}  

void display()  
{  
    struct node *ptr;   
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d ---",ptr->data);  
        ptr=ptr->next;  
    }  
    printf("\n");
}