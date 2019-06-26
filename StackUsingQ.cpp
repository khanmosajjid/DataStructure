#include<bits/stdc++.h> 
using namespace std;

struct Stack{
  queue <int> q1;
  queue <int> q2; 
	
};

void Spush(struct Stack &s,int x){
	s.q2.push(x);
	while(!s.q1.empty()){
		int k =s.q1.front();
		s.q2.push(k);
		s.q1.pop();
	}
	queue <int> temp=s.q1;
	s.q1=s.q2;
	s.q2= temp;
}

void Spop(struct Stack &s){

	
	s.q1.pop();

}
void display(struct Stack &s){
	queue <int> temp=s.q1;
	if(temp.empty()){
		cout<<"stack is empty"<<endl;
	}

    while(!temp.empty()){
    	int j=temp.front();
    	temp.pop();
    	cout<<j<<endl;
    }
}

int main(){
	struct Stack s;
	int i,n;

	while (1){
		cout<<"press 1 to push: press to 2 to pop: press 3 display: press 4 to  to  to exit"<<endl;
		cin>>n;
		if(n==1){
			cin>>i;
			Spush(s,i);
		}

		if(n==2){
			Spop(s);
		}
		if(n==3){
			display(s);
			
		}
		if(n==4){
			break;
		}
	}
	return 0;
}