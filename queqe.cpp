#include<iostream>
using namespace std;

struct queqe{
	int front;
    int rear;
    int size;
    int elements[5];
	
};

void Enque(struct queqe &q,int x){
	if(q.front==-1&&q.rear==-1){
		q.rear=0;
		q.front=0;
		q.elements[q.rear]=x;
	}
	else if((q.rear+1)%q.size==q.front){
     cout<<"queue is full"<<endl;
	}
	else{
		q.rear=(q.rear+1)%q.size;
		q.elements[q.rear]=x;
		}
	}
}

int deque(struct queqe &q){
	if(q.front==-1){
		cout<<"queqe is empty"<<endl;
		return -1;
	}else {
		int x=q.elements[q.front];
		//cout<<x<<endl;
		//cout<<"$$"<<q.front<<endl;
		 if(q.front==q.rear){
			q.front=-1;
			q.rear=-1;
		}
		else
			q.front=(q.front+1)%q.size;
			//cout<<"deque"<<endl;
  		return x;
	}

	
}

int main(){
	int i,n,t;
    struct queqe q;
    q.front=-1;
    q.rear=-1;
    q.size=100;
    char ch;
	//cin>>n;
	while(1){
		cout<<"enter e to enque and d to deque and anyother to exit: ";
		cin>>ch;
		if(ch=='e'){
			cin>>t;
			Enque(q,t);
		}
		else if(ch=='d'){
			cout<<deque(q)<<endl;
		}
		else 
			break;
	}
	return 0;
}