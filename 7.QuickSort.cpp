#include <iostream>
using namespace std;



int partition(int array[],int low, int high){

        int pivot = array[low];
        int i = low;
        int j = high;

        while(i<=j){

            while(array[i]<=pivot){
                i++;
            }
            while(array[j]>pivot){
                j--;
            }

            if(i<j)
             swap(array[i], array[j]);
        }
        swap (array[low], array[j]);

        return j;
}




void quickSort (int array[], int low, int high){
    if(low<high){

        int pivotIndex = partition(array, low, high);
        quickSort(array, low, pivotIndex-1);
        quickSort(array, pivotIndex+1, high);

    }
}

int main (){


int array [5] = {22,14,12,18,9};
int n7 = 5;

cout << "Given Array: " << endl;
for(int i = 0; i<n7; i++){
cout << array[i]<<" ";
}
cout<<endl;
quickSort(array,0,n7-1);

cout << "Sorted Array: " << endl;
for(int i = 0; i<n7; i++){
cout << array[i]<<" ";
}
cout<<endl;

return 0;

}
