#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  int i,j;
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(arr[j]<arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main(){
  int n;
  cout<<"Enter the number of elements in the array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array\n";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  bubbleSort(arr,n);

  cout<<"\nSorted Array :\n";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
