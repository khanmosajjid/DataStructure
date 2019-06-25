#include<iostream>
#include<stack>
using namespace std;

 struct queqe
 {
 	stack <int> s1;
 	stack <int> s2;
 };

void enque(struct queqe &q, int x){
	while(!q.s1.empty()){
		int k=q.s1.top();
		q.s1.pop();
		q.s2.push(k);
	}
	q.s1.push(x);

	while(!q.s2.empty()){
		int k2=q.s2.top();
		q.s2.pop();
		q.s1.push(k2);
	}

}

int dq(struct queqe &q){
	int k;
	if(q.s1.empty()){
		cout<<"error"<<endl;
	}
	else
		k=q.s1.top();

	    q.s1.pop();
	return k;
}
 
 int main(){
 	int i,n;
 	struct queqe q;

 	while(1){
 		cout<<"press 1 to enter the number: 2 to display the number : 3 to exit"<<endl;
 		cin>>n;
 		if(n==1){
 			cin>>i;
 			enque(q,i);
 		}
 		if(n==2){
 			while(!q.s1.empty()){
 				int j=dq(q);
 			    cout<<j<<endl;
 			}
 		}
 		if(n==3){
 			break;
 		}
 	}
 	
 	return 0;
 }