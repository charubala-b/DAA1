#include <iostream>
using namespace std;
void selectionsort(int arr[50],int n){
int i,j,min_id;
for(i=0;i<n-1;i++){
    min_id=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min_id]){
            min_id=j;
        }
    }
    if(min_id !=i){
        swap(arr[min_id],arr[i]);
    }
}
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int k=0;k<n;k++){
cout<<arr[k]<<" ";
}
cout<<"\n";
selectionsort(arr,n);
}
