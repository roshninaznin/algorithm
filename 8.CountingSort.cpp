#include <iostream>
using namespace std;


void countingSort(int array[], int n){

int max_element = array [0];

for(int i = 1; i<n; i++){
    if(array[i]>max_element){
        max_element = array[i];
    }
}

int count[max_element] = {0};

 for (int i = 0; i<n; i++){
    count[array[i]]++;
 }

 for(int i =1; i<=max_element; i++){
    count[i]= count[i]+count[i-1];
 }

int temp[n];

for(int i = n-1; i>=0; i--){
    temp[--count[array[i]]]=array[i];
}
for(int i = 0; i<n; i++){
    array[i]= temp[i];
}
}

int main(){

int array[9]= {5,6,4,2,4,9,5,3,2};
int n =9;

cout<<"Given Array: "<<endl;
for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
}
cout<<endl;
countingSort(array,n);

cout<<"Sorted Array: "<<endl;
for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
}
cout<<endl;
}
