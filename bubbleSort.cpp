#include<iostream>
using namespace std;

void bubbleSort(int a[],int t){
	int j,i;

	for(i=0;i<t;i++){
		for(j=0;j<t-i-1;j++){

			if(a[j]>a[j+1]){
				 int temp=a[j];
				 a[j]=a[j+1];
				 a[j+1]=temp;
			}
		}
	}
	for(i=0;i<t;i++){
		cout<<a[i];
		
	}
}

int main(){
	int a[100],i,n;
	cout<<"enter the number of elements"<<endl;
	cin>>n;

	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"sorted elements are"<<endl;
	bubbleSort(a,n);
	return 0;
}
