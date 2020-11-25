#include <stdio.h>
#include <iostream>
using namespace std;

void Create_Array () ;
int *FindMax (int arr[], int n);
int* pointer_sort(int* arr, int arr_size);


int main (){
    int n = 0;
    cout << "Enter how many data values will exist" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the values of the array which consists of " << n << " elements" << endl;
    for (int i = 0; i < n; i++){
            cin >> arr[i];
   }
   FindMax(arr, n);
    Create_Array();
    int k = 5;
    int arr2[] = {0, 23, 14, 12 ,9};
    pointer_sort(arr2, k);

}

int *FindMax (int arr[], int n) {
    int *max = arr;
    for (int i = 1; i < n; i ++) {
        if (*max<*(max+i)) {
            *max = *(max+i);
        }
    }
    cout << "The max value is "<< *max << endl;
    return max;
    }

void Create_Array () {
    int arr[5];
    int *p = arr;
    cout << "Enter five numbers" << endl;
    for (int i = 0; i < 5; i ++) {
        cin >> *(p+i);
    }
    cout << "The entered numbers are: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    }


int* pointer_sort(int* arr, int arr_size){

    int i, j, temp;

    for (int i = 0; i < arr_size; i++) {
        for (int j = i + 1; j < arr_size; j++) {
            if (*(arr + j) < *(arr + i)) {

                temp = *(arr + i);
                *(arr+i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for (i = 0; i < arr_size; i++) {
        cout << *(arr + i) << endl;
    }
}


