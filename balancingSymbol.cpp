#include<iostream>
#include <string.h>
using namespace std;


struct stack{
  int top=-1;
  int size=100;
  char symbol[100];

};

  void push(struct stack &s,char x){
 //	cout<<"pushing"<<endl;
      if(s.size-1 == s.top){
      	cout<<"stack is full"<<endl;
      }

      else{
         s.symbol[++s.top]=x;
      }

  }

  void pop(struct stack &s){
  //	cout<<"poping"<<endl;
  	if(s.top==-1){
  		cout<<"stack is empty"<<endl;
  	}
  	else
  		s.top--;
  }


int main(){
	int i,n;
	string a;
	struct stack s;
	cout<<"enter  symbol"<<endl;
	cin>>a;
	n=a.size();
    for(i=0;i<n;i++){
    	

    	 if(a[i]=='[' || a[i]=='{' || a[i]=='('){
    	 	push(s,a[i]);
    	 	//cout<<s.symbol[s.top]<<endl;
    	 	continue;
    	 }

    	else if(a[i]==']'){

    	 	if(s.symbol[s.top] == '(' || s.symbol[s.top] == '{'){
    	 		cout<<"disbalance";
    	 	    return false;
    	 	    }
    	 	
    	 	else
    	 		pop(s);

    	}

    	else if(a[i]== '}'){

    	 	if(s.symbol[s.top]=='[' || s.symbol[s.top] == ')'){
    	 		cout<<"disbalance";
    	 		return false;
    	 	}

    	 	else
    	 		pop(s);
    	 	
        }

        else if(a[i]== ')'){

    	 	if(s.symbol[s.top] =='[' || s.symbol[s.top] == '}'){
    	 		cout<<"disbalance";
    	 		return false;
    	 	}

    	 
    	 	else
    	         pop(s);
    	 	    	 	
    	 	}
    }
    	 	    if (s.top==-1){
    	cout<<"balance stack";
    }
    else
    	cout<<"disbalance";
return 0;
}