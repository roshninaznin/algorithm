
#include <iostream>
using namespace std;

bubbleSort(int array[],int n5){
   for(int i = 0; i<n5-1;i++){
    int flag = 0;
    for(int j =0; j<n5-1-i;j++){
        if(array[j]>array[j+1]){
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            flag++;
        }
    }
    if(flag==0){
        break;
    }
   }
   cout << "\nSorted array: "<<endl;
    for (int i = 0; i < n5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main (){

int array [5] = {22,14,12,18,9};
int n5 = 5;

cout << "Given Array: " << endl;
for(int i = 0; i<n5; i++){
cout << array[i]<<" ";
}
cout<<endl;
bubbleSort(array,n5);

return 0;

}
