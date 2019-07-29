

#include <iostream>

using namespace std;
struct node{

int data;
struct node* next;
}*head;
//size
int size(struct node *head)
{
	int count =0;
	struct node *current = head;
	while(current!=NULL){
         current=current->next;
         count++;
	}
	return count;
}
//seaech
bool search(int data)
{
 struct node* ptr=head;
 while(ptr!=NULL)
 {
   if(data==ptr->data)
   {
    return true;
   }
   ptr=ptr->next;
 }

return false;
}
//initialise
void initialize(){
    head = NULL;
}
//insert at front
void insertatfront(int data)
{
 struct node *temp=new(node);

 temp->data=data;
 temp->next=head;
 head=temp;
}
//insertion at mid
void insertatpos(int data,int pos)
{
    struct node* temp,*ptr,*cur;
    temp=new(node);
    ptr=head;
    for(int i=0;i<pos-1;i++)
    {
      cur=ptr;
      ptr=ptr->next;
    }
    temp->next=ptr;
    cur->next=temp;
    temp->data=data;
}

//insertion at end
void insertatend(int data)
{
   struct node* ptr=head;
   struct node* temp=new(node);
   while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=temp;
    temp->data=data;
    temp->next=NULL;
}
//display
void display()
{
struct node *t=head;

    while(t!=NULL)
    {
        cout<<t->data<<" ->";
        t=t->next;
    }
    cout<<endl;
}
//delete from front
void deletefromfront()
{
   struct node* temp=head;
    if(head==NULL)
  {
    cout<<"sorry cant delete"<<endl;
  }
  else if(head->next==NULL)
  {
     temp=head;
     head=NULL;
     free(temp);
     cout<<"Only node of llist is deleted"<<endl;
  }
  else
  {
   head=head->next;
   cout<<"deleted"<<temp->data;
   free(temp);
  }
}
//delete from end
void deletefromend()
{
   struct node* temp,*ptr;
   ptr=head;
    if(head==NULL)
  {
    cout<<"sorry cant delete"<<endl;
  }
  else if(head->next==NULL)
  {
     temp=head;
     head=NULL;
     free(temp);
     cout<<"Only node of llist is deleted"<<endl;
  }
  else
  {
   while(ptr->next!=NULL)
   {
     temp=ptr;
     ptr=ptr->next;
   }
   temp->next=NULL;
   cout<<"deleted"<<ptr->data<<endl;
   free(ptr);
  }
}
//delete from pos
void deletefrompos(int pos)
{
  struct node* temp,*ptr;
  ptr=head;
  if(head==NULL)
  {
    cout<<"sorry cant delete"<<endl;
  }
  else if(head->next==NULL)
  {
     temp=head;
     head=NULL;
     free(temp);
     cout<<"Only node of llist is deleted"<<endl;
  }
  else if(pos==1)
  {
    deletefromfront();
  }
  else
  {
     for(int i=0;i<pos-1 && ptr!=NULL;i++)
     {
       temp=ptr;
       ptr=ptr->next;
     }

     temp->next=ptr->next;
     cout<<"deleted"<<ptr->data<<endl;
     free(ptr);
  }
}
//search
void reverse()
{
   struct node *temp,*prev,*curr,*x;
   curr=head;
   prev=NULL;
   while(curr!=NULL)
   {
     x=curr->next;
     curr->next=prev;
     prev=curr;
     curr=x;
   }
   head=prev;
}
//mid point
struct node* midval(struct node* head)
{
  if(head==NULL || head->next==NULL)
  return head;
  struct node *slow,*fast;
  slow=head;
  fast=head->next;
  while(fast!=NULL && fast->next!=NULL)
  {
    slow=slow->next;
    fast=fast->next->next;
  }
  return slow;
}
int main()
{

    int i,n,mid,pos;
initialize();
	while(1)
	{
		cout<<"press 1 to enter elements at front:"<< endl;
		cout<<"press 2 to enter elements at end:"<< endl;
		cout<<"press 3 to enter elements at middle:"<< endl;
		cout<<"press 4 to enter elements at position:"<< endl;
		cout<<"press 5 to display:"<< endl;
        cout<<"press 6 to delete elements at front:"<< endl;
		cout<<"press 7 to delete elements at end:"<< endl;
		cout<<"press 8 to delete elements at middle:"<< endl;
		cout<<"press 9 to delete elements at position:"<< endl;
		cout<<"press 10 to search:"<< endl;
		cout<<"press 11 to reverse:"<< endl;
		cout<<"press 12 to find mid:"<< endl;
		cout<<"press 13 to exit:"<< endl;
        cin>>n;

        //insertion at front
        if(n==1)
        {
        	cin>>i;
            insertatfront(i);
        }
        //insertion at end
        if(n==2)
        {
            cin>>i;
            insertatend(i);
        }
        //insertion at midlle
        if(n==3)
        {
         mid=size(head)/2;
         cin>>i;
         insertatpos(i,mid+1);
        }
        //insertion at position
        if(n==4)
        {
          cin>>pos;
          cin>>i;
          insertatpos(i,pos);
        }
        //display
        if(n==5)
        {
        	display();
        }
        // delete from front
        if(n==6)
        {
            deletefromfront();
        }
        // delete from end
        if(n==7)
        {
            deletefromend();
        }
        // delete from mid
        if(n==8)
        {
            mid=size(head)/2;
            deletefrompos(mid+1);
        }
        // delete from pos
        if(n==9)
        {
            int pos;
            cin>>pos;
            deletefrompos(pos);
        }
        //search
        if(n==10)
        {
            int val;
            cin>>val;
            if(search(val)==1)
            cout<<"found"<<endl;
            else
            cout<<"not found"<<endl;
        }
        //reverse
        if(n==11)
        {
         reverse();
         display();
        }
        //mid
        if(n==12)
        {
        gstruct node *m=midval(head);
          cout<<m->data<<endl;
        }
        //exit
        if(n==13){
            break;
        }
    }
    return 0;
}