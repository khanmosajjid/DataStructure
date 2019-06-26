#include<bits/stdc++.h> 
using namespace std;

struct node
{  int data;
	struct node *next;
};

int size(struct node *head){
	int count =0;
	struct node *current = head;
	while(current!=NULL){
         current=current->next;
         count++;
	}
	return count;
}

int main(){
	struct node *head;
	head =new(node);

	head->data=0;
	head->next=NULL;

	struct node *p;
	p=head;
    
    int i,n;

	while(1){
		cout<<"press 1 to enter elements at end:"<< endl;
		cout<<"press 2 to enter elements at front:"<< endl;
		cout<<"press 3 to enter elements at middle:"<< endl;
		cout<<"press 4 to display:"<< endl;
		cout<<"press 5 to exit:"<< endl;
        cin>>n;

        if(n==1){
        	//insertion at end
        	cin>>i;
        	struct node *temp;
        	temp=new(node);
        	temp->data=i;
        	temp->next=NULL;
        	p->next=temp;
        	p=p->next;;
        }
      
        if(n==2){
        	//insertion at front
        	cin>>i;
        	struct node *front;
        	front=new(node);
        	front->data=i;
        	front->next=head;
        	head=front;

        }
        if(n==3){
        	//insertion at midlle
        	struct node *temp;
        	temp=new(node);
        	struct node *t=head;
        	int j=size(t);
        	j=j/2;
        	cin>>i;

        	while(j!=0){
              t=t->next;
              j--;
             }

              temp->next=t->next;
              temp->data=i;
              t->next=temp;
        	
             }
               if(n==4){
        	struct node *t=head;
        	
        	while(t!=NULL){
        		cout<<t->data<<"->";
        		t=t->next;
        	}
        }
        	if(n==5){
        	break;
        }

	}
	cout<<size(head)<<"is the size of linked list"<<endl;
	return 0;
}
