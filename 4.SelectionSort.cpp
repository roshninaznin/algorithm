#include <iostream>
using namespace std;


void selectionSort(int array[], int n4) {
    for (int i = 0; i < n4 - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n4; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    cout << "\nSorted array: "<<endl;
    for (int i = 0; i < n4; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main (){


int array [5] = {9,13,15,11,2};
int n4 = 5;

cout << "Given Array: " << endl;
for(int i = 0; i<n4; i++){
cout << array[i]<<" ";
}
cout<<endl;
selectionSort(array,n4);

return 0;

}
