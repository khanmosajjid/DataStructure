#include<iostream>
using namespace std;

struct node{
 int data;
 struct node *next;
};

void addNode(struct node *head,int data){

	     struct node *ptr=head;
       	struct node *temp;
       	temp=new(node);

       	while(ptr->next!=NULL){
       		ptr=ptr->next;
       	}
       	
       temp->data=data;
       temp->next=NULL;
       ptr->next=temp;
       temp=ptr;

}
int main(){
	struct node *head;
	int n,t;
	head=new(node);
	head->data=0;
	head->next=NULL; 
	struct node *p1;
	p1=head;

	while(1){
		cout<<"press  1 to enter the number in list ,2 to display list ,3 to exit"<<endl;
        cin>>n;
       
       if(n==1){
       	int i;
	     cin>>i;
       	addNode(head,i);
       	cout<<head->data<<endl;

       }
       if(n==2){
       	struct node *t=head;
       	while(t!=NULL){
       		
       		cout<<t->data<<"->";
       		t=t->next;

       	}
       }
       if(n==3){
       	break;
       }


	}
	return 0;
}