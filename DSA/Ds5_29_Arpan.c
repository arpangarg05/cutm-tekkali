#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* next;
};

struct Cll{
  int size;
  struct node* head;
  struct node* tail;
};

struct Cll cll;
  
  void insertAtBegin(int val){
  	struct node* t=(struct node*)malloc(sizeof(struct node));
    t->data=val;
    t->next=NULL;
    
    
      if(cll.size==0){
          cll.head=t;
          cll.tail=t;    
          cll.size++;
          return;
      }
      
      t->next = cll.head;
      cll.head=t;
      cll.size++;
      return;
  }
  
  void insertAtEnd(int val){
      struct node* t=(struct node*)malloc(sizeof(struct node));
      t->data=val;
      t->next=NULL;
      if(cll.size==0){
          cll.head=t;
          cll.tail=t;    
          cll.size++;
          return;
      }
     
      cll.tail->next = t;
      cll.tail=t;
      cll.size++;
      return;
  }
  
  void display(){
      struct node* t = (struct node*)malloc(sizeof(struct node));
      t= cll.head;
      if(cll.head==NULL){
          printf("EMPTY LINKED LIST\n");
          return;
      }
      
      
      while(t!=NULL){
      	printf("%d",t->data);
      	t=t->next;
      }
        printf("\n");
  }
  
  void deleteAtBegin(){
      if(cll.head==NULL){
          printf("UNDERFLOW\n");
          return;
      }
      
      if(cll.head==cll.tail){
          cll.head=cll.tail=NULL;
          cll.size=0;
          return;
      }
      
      struct node* t = (struct node*)malloc(sizeof(struct node));
      t=cll.head;
      cll.head=cll.head->next;
      free (t);
      cll.size--;
      return;
  }
  
  void deleteAtEnd(){
      if(cll.head==NULL){
          printf("UNDERFLOW\n");
          return;
      }
      if(cll.head==cll.tail){
          cll.head=cll.tail=NULL;
          cll.size=0;
          return;
      }
      
      struct node* temp = cll.head;
      while(temp->next!=cll.tail)
        temp = temp->next;
        
        temp->next = temp->next->next;
        cll.tail=temp;
        cll.size--;
        return;
      
  }
  
  

int main() {
	cll.size=0;
    cll.head=NULL;
    cll.tail=NULL;
  
	        
	int n=1, val;
	while(n!=0){
	    printf("Press 1 to insert in beginning \nPress 2 to insert at end \nPress 3 to delete at beginning \nPress 4 to delte at end \nPress 5 to display\nPress 0 for EXIT\n\n");
	    scanf("%d",&n);
	    if(n==1){
	        printf("Enter val to be inserted \n");
	        scanf("%d",&val);
	        insertAtBegin(val);
	    }
	    else if(n==2){
	        printf("Enter val to be inserted \n");
	        scanf("%d",&val);
	        insertAtEnd(val);
	    }
	    else if(n==3){
	        deleteAtBegin();
	    }
	    else if(n==4){
	        deleteAtEnd();
	    }
	    else if(n==5){
	        display();
	    }
	  else
	    return 0;
	}
	return 0;
	
}