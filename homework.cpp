#include <stdio.h>
#include <iostream>
using namespace std;
#include <cmath> // recquire to use Pi value
#include <vector> // important for problem 2 and finding min and max values

void area_circumf (){
    // Problem 1
    /* a function which calculates
    area and circumference of a circle */
    cout << "_________PROBLEM 1________" << endl;
    cout << "\n" << endl;

    int rad;
    cout << "Enter radius: " << endl;
    cin >> rad;

    cout << "Value of area of the circle with r = " << rad << " is " << rad*rad*M_PI << endl;
    cout << "Value of circumference of the circle with r = " << rad << " is " << 2*rad*M_PI << endl;
    cout << "\n" << endl;
}


void min_max (std::vector<int> table) {
    // Problem 2
    /* a function which calculates the
    max and minimal values in an array
    of numbers */
    cout << "_________PROBLEM 2________" << endl;
    cout << "\n" << endl;

    int small = 0;
    int big = 0;
    for (int i = 0; i <table.size(); i++) {
        if (i == 0) {
            small = table[0];
            big = table[0];
        }
        else if (table[i] < small) {
            small = table[i];
        }
        else if (table[i] > big) {
            big = table[i];
        }
    }
    cout << "The min value in table is: " << small << endl;
    cout << "The max value in table is: " << big << endl;
    cout << "\n" << endl;
     }

 int fibonacci (int rank) {
    if (rank == 0) {
        return 0;
        }
    else if (rank == 1 || rank == 2) {
        return 1;
        }
    return fibonacci(rank-1) + fibonacci(rank-2);
 }

 int fib_seq (){
     // Problem 3
     /* calculates a fibonacci sequence of
     rank specified by the user */
    cout << "_________PROBLEM 3________" << endl;
    cout << "\n" << endl;

     int rank;
     int fib;
     cout << "Enter the rank of Fibonacci sequence: " << endl;
     cin >> rank;
    for (int i = 0; i <= rank; i++) {
        fib = fibonacci(i);
     }
    cout << fib << endl;
    cout << "\n" << endl;
     return fib;
     }

void multiplication_table () {
    // Problem 4
    /* Take a number for which you want multiplication
    table and a range up to which number and generate
    the multiplication table */
    cout << "_________PROBLEM 4________" << endl;
    cout << "\n" << endl;

    int N;
    int range;
    cout << "Enter an integer of which you want multiplication table: " << endl;
    cin >> N;
    cout << "Enter up to which number you want multiplication table of: " << endl;
    cin >> range;

    for (int i = 0; i <= range; i++){
        cout << N << "*" << i << "=" << N*i << endl;
    }
    cout << "\n" << endl;
}

void truth_table () {
    cout << "_________PROBLEM 5________" << endl;
    cout << "Truth table with 3 variables" << endl;
    cout << "\n" << endl;


    int A = 1;
    int B = 1;
    int C = 1;
    bool result;

    cout << "Operation AND" <<endl;
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                result = i && j && k;
                cout << "A = " << i << " B = " << j << " C = " << k << "Result is: " << result << endl;            }
        }
    }

    cout << "Operation OR" <<endl;
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                result = i || j || k;
                cout << "A = " << i << " B = " << j << " C = " << k << "Result is: " << result << endl;            }
        }
    }

}


int main() {

    area_circumf(); // problem 1
    vector<int> table = {3, 2, 9, 4, 8};
    min_max(table); // problem 2
    fib_seq(); // problem 3
    multiplication_table(); //problem 4

    truth_table ();
}
