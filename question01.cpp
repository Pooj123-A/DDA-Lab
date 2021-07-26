#include<iostream>
using namespace std;
//how many copies of a given key is present in the given array  
int firstOccur(int arr[],int start,int end,int key){
  int mid;
  int res=-1;
  while(start<=end){
      mid=start+(end-start)/2;
      if(arr[mid]==key){
          res=mid;
          end=mid-1;
      }
      else if(arr[mid]<key){
          start=mid+1;
      }
      else if(key<arr[mid]){
          end=mid-1;
      }
  }
  return res;
}
int lastOccur(int arr[],int start,int end,int key){
  int mid;
  int res=-1;
  while(start<=end){
      mid=start+(end-start)/2;
      if(arr[mid]==key){
          res=mid;
          start=mid+1;
      }
      else if(arr[mid]<key){
          start=mid+1;
      }
      else if(key<arr[mid]){
          end=mid-1;
      }
  }
  return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int key;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;
        int first=firstOccur(arr,0,n-1,key);
        int last=lastOccur(arr,0,n-1,key);
        if(first==-1 && last==-1){
             cout<<"Not Found"<<endl; 
        }
        else
         cout<<key<<" "<<(last-first+1)<<endl;
    }
}

