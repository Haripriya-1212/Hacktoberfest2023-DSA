#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int r){

    int ln = mid - l + 1;
    int rn = r - mid;
    int larr[ln], rarr[rn];

    for(int i=0;i<ln;i++){
        larr[i]=arr[i+l];
    }


    for(int i=0;i<rn;i++){
        rarr[i]=arr[i+mid+1];
    }

    int i=0, j=0, k=l;

    while(i<ln && j<rn){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            i++;
        }
        else{
            arr[k]=rarr[j];
            j++;
        }
            k++;
    }

    while(i<ln){
        arr[k]=larr[i];
        i++;
        k++;
    }

    while(j<rn){
        arr[k]=rarr[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l,int r){
    if(l<r){
        int mid = (l+r)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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

    mergeSort(arr,0,n-1);

    cout<<"After sorting : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
