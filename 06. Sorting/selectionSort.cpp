#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    // for 0 to n-1 find min and replace at each step
    for(int i=0;i<n-1;i++){
        int minInd = i+1;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minInd])
                minInd = j;
        }
        if(arr[minInd] < arr[i]){
            int temp = arr[i];
            arr[i] = arr[minInd];
            arr[minInd]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

    cout<<"After sorting : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
