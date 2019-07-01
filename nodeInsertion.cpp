#include<bits/stdc++.h> 
using namespace std;

struct node{
	int data;
	struct node *next;
};

//size of linked list
int size(struct node *head){
	int count =0;
	struct node *current = head;
	while(current!=NULL){
         current=current->next;
         count++;
         
	}
	return count;

}

//insertion at the end of linked list
void end(struct node **head,int data){
	

	 struct node *temp=*head;
	  
	 struct node *ptr=new(node);
	 
	  ptr->data=data;
	  ptr->next=NULL;
                

	   
       if(*head==NULL){
		*head=ptr;
		return ;
	  }

	 	while((temp->next)!=NULL){
	   		temp=(temp->next);
	   	}
	   	 temp->next=ptr;
        
        

}

//insertion of node at any position
void atPos(struct node *head,int pos,int data){
	if(head==NULL){
		head=new(node);
	}
	struct node *ptr=head;
        	struct node *temp=new(node);

        	for(int k=0;k<(pos-1);k++){
        		ptr=ptr->next;
        	 }
            
            temp->next=ptr->next;
            temp->data=data;
            ptr->next=temp;
}


//print through function
void print(struct node *head){
		//printing node using recursion
		if(head==NULL)
			return;
        	
        else
        {   cout<<head->data<<"->";
        	print(head->next);
            
        }
 }
//insertion at front
 void front(struct node **head,int data){
 	       struct node *front;
 	       if(*head==NULL){
 	       	*head=new(node);
 	       }
            front=new(node);
       
        	front->data=data;
        	front->next=*head;
        	*head=front;

       }

//deletion of node from end
   void deleteEndnode(struct node *head){
   	struct node *ptr=head;
   	while(ptr->next->next!=NULL){
   		ptr=ptr->next;
    }
    
   	ptr->next=NULL;
   }     

   //delete from front
   void deleteFrontNode(struct node **head){
   	struct node *ptr=*head;
   	if (head==NULL){
   		cout<<"list is empty"<<endl;
   		return ;
   	}
   	else{
   	*head=ptr->next;
   	free(ptr);
   }

   } 

   //reverse a linked list

   void reverse(struct node **head){
   	struct node *pre =NULL;
   	struct node *current=*head;
   	struct node *next=NULL;

   	int j=size(*head);
   	for(int i=0;i<j;i++){
   		next=current->next;
   		current->next=pre;
   		pre=current;
   		current=next;
   	}
   	*head=pre;
   }

//main 
int main(){
	int i,n;
	struct node *head=NULL;
	

	

	   while(1){

		cout<<"press 1 to enter elements at end:"<< endl;
		cout<<"press 2 to enter elements at front:"<< endl;
		cout<<"press 3 to enter elements at middle:"<< endl;
		cout<<"press 4 to enter elements at any position:"<< endl;
		cout<<"press 5 to delete elements at end:"<< endl;
		cout<<"press 6 to delete elements from front:"<< endl;
		cout<<"press 7 to reverse linkedlist:"<< endl;
		cout<<"press 8 to display:"<< endl;
		cout<<"press 9 to exit:"<< endl;

	   cin>>n;

	   if(n==1){
	   	//insertion at end
	   	cout<<"enter the number"<<endl;
	   	cin>>i;
	   	end(&head,i);
	   	
        }
           // insertion at front
            if(n==2){
          	cout<<"enter the number"<<endl;
        	cin>>i;
        	front(&head,i);
          }
          // insertion at middle
           if(n==3){
          	cout<<"enter the number"<<endl;
        	cin>>i;
        	int j=size(head);
        	atPos(head,j/2+1,i);

          }
           //insertion at any position
        if(n==4){
        	cout<<"enter the number"<<endl;
        	cin>>i;
        	cout<<"enter the position"<<endl;
        	int j;
        	cin>>j;
        	atPos(head,j-1,i);

        	
          }
         //delete at end
         if(n==5){
             deleteEndnode(head);

         }
         if(n==6){
         	deleteFrontNode(&head);
         }
          
          if(n==7){
          	reverse(&head);
          }
         
         if(n==8){
        	struct node *temp=head;
        	print(temp);
        	cout<<""<<endl;
        }
        if(n==9)
        	break;
        
	}
	return 0;
}