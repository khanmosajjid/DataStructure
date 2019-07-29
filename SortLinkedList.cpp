#include<bits/stdc++.h> 
using namespace std;

struct node
{ int data;
  struct node *next;
};

void Insertnode(struct node **head,int data){
	struct node *temp=new(node);
	struct node *ptr=*head;
	temp->data=data;
	temp->next=NULL;

	if(*head==NULL){
		*head=temp;
		return;
	}
     while(ptr->next!=NULL){
     	ptr=ptr->next;
     }

	ptr->next=temp;
}

void createNode(struct node **head,int n){
	int data;
	cin>>data;
	Insertnode(head,data);
	while(n-1!=0){
	    n=n-1;
		cin>>data;
		Insertnode(head,data);
      
	}
}



 struct node *Merge(struct node *a,struct node *b){
 	cout<<"hello merge function "<<endl;
    if(a==NULL)
    	return b;
    else if(b==NULL)
    	return a;

    struct node *c;
         //comparing elements
    if(a->data <b->data){
    	c=a;
    	c->next=Merge(a->next,b);
    

     }

     else{
     	c=b;
     	c->next=Merge(a,b->next);
    
     }
     cout<<c->data<<"element to merge"<<endl;

return c;


}

struct node *mid(struct node *head){
	cout<<"hello mid value"<<endl;

	if(head==NULL||head->next==NULL){
		return head;
	}
	struct node *slow=head;
	struct node *fast=head->next;

	while(fast!=NULL && fast->next!=NULL){
		
	    fast=fast->next->next;
	    slow=slow->next;
	    cout<<"finding mid value"<<endl;
	}
     cout<<slow->data<<"midValue"<<endl;
return slow;
}

struct node *mergeSort(struct node *head){
	cout<<"hello merge sort"<<endl;
	if(head==NULL)
		return head;
	//mid value
    struct node *midValue=mid(head);
	struct node *a=head;
	struct node *b=midValue->next;
	midValue->next=NULL;
    cout<<midValue->data<<endl;
    //recursively sort
    a=mergeSort(a);
    b=mergeSort(b);

	struct node *temp=Merge(a,b);
	cout<<temp->data<<"elemet to be sorted"<<endl;
    return temp;
}

int main(){
	int i,n1;
	struct node *head=NULL;


	cout<<"enter the size of  linked list"<<endl;
	cin>>n1;
	cout<<"enter the elements of  list"<<endl;
	createNode(&head,n1);

    head=mergeSort(head);
    cout<<"hello "<<endl;
  
   
    while(head!=NULL){
    	cout<<head->data<<"->";
    	head=head->next;
    }

    return 0;	
}