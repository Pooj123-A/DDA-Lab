
//count all pairs of elements in an array such that their difference is equal to given key
#include<iostream>
#include<algorithm>
using namespace std;
int  isFound(int arr[],int n,int key){
     sort(arr,arr+n);
    int i=0,j=0;
    int count =0;
      while(j<n){
          if(arr[j]-arr[i]==key){
              count++;
              i++; j++;
          }
          else if((arr[j]-arr[i])<key){
              j++;
          }
          else{
              i++;
          }
      } 
      return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
       cout<<isFound(arr,n,key)<<endl;
    }
}