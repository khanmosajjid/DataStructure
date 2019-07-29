#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};

struct node *createNode(struct node *head,int size){
	struct node *newnode;
	head=new(node);
	struct node *temp=head;
	int data;
	cin>>data;
	head->data=data;
	head->next=NULL;
	// cout<<"in createnode"<<endl;
   
	for(int i=1;i<size;i++){
		cin>>data;
		newnode=new(node);
		temp->next=newnode;
		newnode->data=data;
		newnode->next=NULL;
		temp=newnode;
		
		// cout<<"in createnode loop"<<endl;
	}
	return head;
}

int main(){
  struct node *head=NULL;
  int n,i,t;
 

  cout<<"enter the size of linked list"<<endl;
  cin>>n;

    head=createNode(head,n);
    while(head!=NULL){
    	// cout<<"in main loop"<<endl;
    	cout<<head->data<<"->";
    	head=head->next;

    }
 return 0;

}