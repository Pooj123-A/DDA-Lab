
//Find a triplet such that sum of two equal to third element
#include<iostream>
using namespace std;
void isFound(int arr[],int n){
    int i,j,k;
    for(i=n-1;i>=0;i--){
      j=0;
      k=i-1;
      while(j<k){
          int sum=arr[j]+arr[k];
          if(sum==arr[i]){
              cout<< j+1 <<" "<< k+1  <<" "<< i+1 <<endl;
              return ;
          }
          else if(sum<arr[i]){
              j++;
          }
          else if(sum>arr[i]){
              k--;
          }
      } 
    }
    cout<<"No Sequence found"<<endl;
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
        isFound(arr,n);
    }
}