#include <iostream>
using namespace std;


void merge(int array[], int low, int mid, int high){
 int left= low;
 int right = mid+1;
 int k = 0;

 int temp[(high-low)+1];

 while(left<=mid && right<=high){
    if(array[left] < array[right]){
        temp[k++]=array[left++];
    }
    else{
    temp[k++]=array[right++];

    }
 }

 while(left<=mid){
    temp[k++]= array[left++];
 }
 while(right<=high){
    temp[k++]= array[right++];
 }
for(int j = 0; j<k; j++){
    array[low+j]=temp[j];
}

}

void mergeSort(int array[], int low, int high){
    if(low<high){
    int mid = (low+high)/2;
    mergeSort( array,  low,  mid);
    mergeSort( array,  mid+1,  high);
    merge(array,low,mid,high);
    }
}


int main (){

int array_6 [5] = {22,14,12,18,9};
int n6 = 5;

cout << "Given Array: " << endl;
for(int i = 0; i<n6; i++){
cout << array_6[i]<<" ";
}
cout<<endl;
mergeSort(array_6,0,n6-1);

cout << "Sorted Array: " << endl;
for(int i = 0; i<n6; i++){
cout << array_6[i]<<" ";
}
cout<<endl;

return 0;

}
