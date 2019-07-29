#include<bits/stdc++.h> 
using namespace std;



void Merge(int *a,int start, int end ){
	int mid = (start+end)/2;
	int i=start;
	int j=mid+1;
	int k=start;

	int temp[100];

	while(i<=mid && j<=end){
		if(a[i]<a[j])
			{
			temp[k]=a[i];
			// cout<<temp[k]<<endl;
			k++;
			i++;
			}
		else
		{

			temp[k]=a[j];
			// cout<<temp[k]<<endl;
			k++;
			j++;
		}
	}

	while(i<=mid)
		temp[k++]=a[i++];

	while(j<=end)
		temp[k++]=a[j++];

	for(i=start;i<=end;i++){
		a[i]=temp[i];
		// cout<<temp[i]<<" ";
	}

}
void MergeSort(int a[],int start,int end){
	// cout<<"hello neha"<<endl;
	if(start >=end)
		return;

	int mid=(start+end)/2;

	MergeSort(a,start,mid);
	MergeSort(a,mid+1,end);

	Merge(a,start,end);
}

int main(){
	int a[100];
	int i=0,n;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>a[i];

}


	int size =n;
	MergeSort(a,0,size-1);
	cout<<"sorted element is"<<endl;

	for(int j=0;j<n;j++){
		cout<<a[j]<<endl;
	}

	return 0;
}