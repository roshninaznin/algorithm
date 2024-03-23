#include <iostream>
using namespace std;


void insertionSort(int array[],int n3){
    for (int i = 1; i<n3; i++){
       int temp = array[i];
       int j = i-1;

       while( j>=0 && array[j]>temp){

        array[j+1] = array[j];
        j--;
       }
        array[j+1]=temp;
    }
    cout<<"\nSorted array:"<<endl;
    for(int i = 0; i<n3; i++){
    cout<<array[i]<<" ";

    }
    cout<<endl;
}


int main (){

int array [6] = {43,31,26,29,12};
int n3 = 5;

cout << "Given Array: " << endl;
for(int i = 0; i<n3; i++){
cout << array[i]<<" ";
}
cout<<endl;
insertionSort(array,n3);

return 0;

}
