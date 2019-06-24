#include<iostream>
#include<string.h>
using namespace std;
 
 struct stack{
 	int top=-1;
    int size=100;
    char symbol[100];
 	
 };

 void push(struct stack &s,char x){
 	if(s.size-1==s.top){
 		cout<<"stack is full"<<endl;
 	}
 	else
 		s.symbol[++s.top]=x;
 }

 void pop(struct stack &s){
 	if(s.top==-1){
 		cout<<"stack is empty";
 	}
 	else 
 		cout<<s.symbol[s.top];
 	// cout<<"pop elements";
 	    s.top--;
 }


 int main(){
 	int i,n;
 	struct stack s; 
 	string a;
 	cout<<"enter symbols"<<endl;

 	cin>>a;
 	n=a.size();
 	for(i=0;i<n;i++){

 		if((int)a[i]>=48 && (int)a[i]<=57){
 			int temp=(int)a[i]-(int)'0';
 			
 			cout<<temp;

 		}
 		while((a[i]=='+' && s.symbol[s.top]=='/')||(a[i]=='+' && s.symbol[s.top]=='*')){

          pop(s);
         

 		}
 		
 		while((a[i]=='-' && s.symbol[s.top]=='/')||(a[i]=='-' && s.symbol[s.top]=='*')){
          pop(s);
 		}
 		
 		while(a[i]=='*' && s.symbol[s.top]=='/'){
 			pop(s);
 		}
 		if(a[i]=='/'||a[i]=='*'||a[i]=='+'||a[i]=='-'){
 			push(s,a[i]);
 			
 		}
 	}
 	while(s.top!=-1){
 		pop(s);
 		// cout<<"poping";
 	}
 	return 0;
 }