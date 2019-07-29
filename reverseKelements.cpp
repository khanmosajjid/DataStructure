
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
queue<ll> modifyQueue(queue<ll> q, int k)
{  int size=q.size();
  
   stack<ll> s1;
   queue<ll>q1;
   for(int i=0;i<k;i++){
       s1.push(q.front());
       q.pop();
     }
     
   while(!s1.empty()){
       q1.push(s1.top());
       s1.pop();
   }
   for(int i=0;i<size-k;i++){
       q1.push(q.front());
       q.pop();
   }
    return q1;
}
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
      }
         return 0;
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
