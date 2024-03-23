#include <iostream>
using namespace std;


void linearSearch(int n, int array[], int s_data){

int found = 0;
 for (int i=0; i<n; i++){
    if(array[i]== s_data){
        cout<<"Data found in array "<<i<<endl;
           found++;
         break;

    }
 }
 if (found == 0){
            cout<<"Data not found."<<endl;

 }
}

int main (){

int n = 5;
int array[5] = {10,12,14,15,14};
int s_data = 14;

cout << "Given Array: " << endl;
for(int i = 0; i<n; i++){
    cout << array[i]<<" ";
}
cout<<endl;
linearSearch(n,array,s_data);


}
