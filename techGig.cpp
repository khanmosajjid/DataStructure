#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	char b[1000];
	string s;
	unordered_set<char> c;

	cin>>t;

	for(int i=0;i<t;i++){
		cin>>s;
		// cout<<"hello world 4"<<endl;
		int k=0;
		n=s.size();
		int freq[26];
	    memset(freq, 0, sizeof(freq)); 

		for(int j=0;j<n;j++){
             freq[s[j]-'a']++;
         }
          int max=0;
         
             
             int *i1=max_element(freq,freq+26);
             // cout<<"hello world 3"<<endl;
         cout<<i1<<endl;
         cout<<s[*i1]<<endl;
       
	// 		if(c.find(s[j])==c.end()){
	// 			cout<<"hello world"<<endl;
	// 			c.insert(s[j]);
	// 		}
	// 		else if(c.find(s[j])!=c.end()){
	// 			cout<<" elment is "<< s[j]<<endl;
	// 			cout<<" insertin element in b array "<<endl;
				
	// 			cout<<"value of k is"<<k<<endl;
				
				
				
 //              cout<<" after inserting elemt in array b "<<b[k-1]<<endl;
	// 		}
	// 	}
	// 	sort(a,a+k);
	// 	cout<<a[k-1]<<endl;;
	// }
	return 0;
}
}