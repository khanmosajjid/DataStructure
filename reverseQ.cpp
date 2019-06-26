#include<iostream>
#include<stack>
using namespace std;

struct Q{
    stack <int> s;  
 
};

void Nq(struct Q &q, int x){
	q.s.push(x);
}

int dQ(struct Q &q){
	if(q.s.empty()){
		cout<<"q is empty"<<endl;
	}
	else{
		int k=q.s.top();
		q.s.pop();
		return k;
	}

}

int main(){
	struct Q q;
	int i,n;

	while(1){
		cout<<"press 1 enter the elments: 2 to display : 3 to exit"<<endl;
		cin>>n;
		if(n==1){
			cin>>i;
			Nq(q,i);
		}
		if(n==2){
         while(!q.s.empty()){
         	int j=dQ(q);
            
            cout<<j<<endl;
		}
       }
       if(n==3)
       	break;
	}
	return 0;
}