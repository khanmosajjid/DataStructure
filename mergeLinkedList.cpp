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



 struct node* Merge(struct node *a,struct node *b){
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

return c;


}

int main(){
	int i,n1,n2;
	struct node *head1=NULL;
	struct node *head2=NULL;

	cout<<"enter the size of 1 linked list"<<endl;
	cin>>n1;
	cout<<"enter the elements of 1 list"<<endl;
	createNode(&head1,n1);

	cout<<"enter the size of 2 linked list"<<endl;
	cin>>n2;
	cout<<"enter the elements of 2 list"<<endl;
    createNode(&head2,n2);
	
    head1=Merge(head1,head2);
    cout<<"merge and sorted linked list is"<<endl;
    while(head1!=NULL){
    	cout<<head1->data<<"->";
    	head1=head1->next;
    }

    return 0;	
}