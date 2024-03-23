#include <iostream>
using namespace std;

int binary_search(int array[], int n2,int data){
         int left, right, mid;
         left = 0;
         right = n2-1;


         while(left<=right){

          mid = (left+right)/2;

         if(data == array[mid]){

          return mid;
         }
         else if (data>array[mid]){
            left = mid+1;
         }
         else{
            right= mid-1;
         }
         }

         return -1;

         }

int main (){

int array [13] = {5,7,9,12,15,20,24,27,33,40,50,65,72};
int n2 = 13;
int data = 33;

cout << "Given Array: " << endl;
for(int i = 0; i<n2; i++){
    cout << array[i]<<" ";
}
cout<<endl;
int index = binary_search(array,n2,data);
 if (index != -1) {
        cout << "data found in index: " << index << endl;
    } else {
        cout << "data not found" << endl;
    }

    return 0;

}
