#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements in first array:";
    int n;
    cin>>n;
    int arr1[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements in second array:";
    int m;
    cin>>m;
    int arr2[m];
    cout<<"Enter the element of array:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

   int arr3[n+m];
   for(int i=0;i<n;i++){
         arr3[i]=arr1[i];

   }
    for(int i=0;i<m;i++){
            arr3[n+i]=arr2[i];
    
    }
    cout<<"The merged array is:";
    //using bubble sort to sort the array
    for(int i=0;i<n+m-1;i++){
        for(int j=0;j<n+m-1-i;j++){
          if(arr3[j]>arr3[j+1]){
            int temp=arr3[j];
            arr3[j]=arr3[j+1];
            arr3[j+1]=temp;
        }
        }
    }
        //printing the merged array
        for(int i=0;i<n+m;i++){
            cout<<arr3[i]<<" ";
        }  









}