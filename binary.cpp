#include <bits/stdc++.h>
using namespace std;
int main(){
int sizea;
cin>>sizea;
int arr[sizea];
for(int i=0;i<sizea;i++){
    cin>>arr[i];
}
int finda;
cin>>finda;
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr,arr+n);
int left=0;
int right=sizea-1;
int flag=0;
while(left<=right){
int mid=(left+right)/2;
     if(arr[mid]==finda){
        flag=1;
        break;
     }
     else if(finda>arr[mid]){
        left=mid+1;
     }
     else{
        right=mid-1;
     }
   }

   (flag==1)?cout<<"Key found":cout<<"Key not found";
return 0;
}
