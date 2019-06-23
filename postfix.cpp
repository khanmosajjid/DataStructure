#include<iostream>
#include<string.h>
using namespace std;

struct stack{
	int size=100;
	int top=-1;
	int symbol[100];
	
};

void push(struct stack &s, int x){
	if (s.size-1==s.top)
		cout<<"stack is full"<<endl;

	else{
		
		s.symbol[++s.top]=x;
	}
}

int pop(struct stack &s){
	int x;
	if(s.top==-1)
		cout<<"stack is empty";
	else 
       x=s.symbol[s.top];
		s.top--;
	return x ;
}

int main(){
	struct stack s;
	int i,n,ans=0;
	string a;

	
	cout<<"enter the numbers"<<endl;
	cin>>a;
	n=a.length();
	for(i=0;i<n;i++){

		if((int)a[i]>=48 && (int)a[i]<=57){
			//cout<<a[i]<<endl;
			int temp=(int)a[i]-(int)'0';
			push(s,temp);
		}

		else if(a[i]=='+'){
			 
			int x=pop(s);
			int y=pop(s);
			ans= x+y;
			cout<<ans<<endl;
			push(s,ans);
		}
		else if(a[i]=='-'){
			 
			int x=pop(s);
			int y=pop(s);
			ans= x-y;
			cout<<ans<<endl;
			push(s,ans);
		}
		else if(a[i]=='*'){
			 
			int x=pop(s);
			int y=pop(s);
			ans= x*y;
			cout<<ans<<endl;
			push(s,ans);
		}
		else if(a[i]=='/'){
			 
			int x=pop(s);
			int y=pop(s);
			ans= x/y;
			cout<<ans<<endl;
			push(s,ans);
		}
		
	}
	cout<<s.symbol[s.top];
	return 0 ;
}