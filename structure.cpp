#include<iostream>
using namespace std;
// struct address
// {int stateNo;
//  int cityNo;
// };
// struct student

// {int rNo;
//  char* name;
// 	struct address addr;
// 	float cgpa;
// };

// int main(){
// 	struct student std;
// 	std.rNo=10;
// 	std.name="mj";
// 	std.addr.stateNo=3;

// 	cout<<std.name;
// 	cout<<std.addr.stateNo;
// 	return 0;

// }

struct s1
  {
  	int g;
	struct s1*f; 
 
 };

 struct s2
 { 
 	float c;
 	struct s1*d;
 	char e;
 };

struct s3{
	int a;
	struct s2 *b;
	char z;
};


  int main(){
	  struct s3 *p;
	  p =new(s3);
	  p->a=10;
	  p->b=new(s2);
	  p->b->d=new(s1);
	  p->b->d->g=5;
  
      cout<<p->b->d->g;
  
  return 0;
  }