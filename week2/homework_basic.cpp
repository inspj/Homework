#include <stdio.h>
#include <iostream>
using namespace std;

int sum(int a, int b);
int sub(int a, int b);
int mult (int a, int b);
int divi (int a, int b);
int mod(int a, int b);
void calculator();
void arr();
void sorting(int aoi[10]);
void pascal();

int main () {
    calculator();
    arr();
    cout << "Enter 10 numbers" << endl;
    int aoi[10];
    for (int i = 0; i < 10; i++) {
            cin >> aoi[i];

    }
    sorting(aoi);
    pascal();


}

int sum(int a, int b) {
    return a + b;
    }

int sub(int a, int b) {
    return a - b;
    }

int mult (int a, int b) {
    return a*b;
    }

int divi (int a, int b) {
    return a/b;
    }

int mod(int a, int b) {
    return a%b;
    }

void calculator(){
    // Problem 1
    /* Chose a basic mathematical function
    in addition with two integers and you
    will get the calculation printed on the
    screen. The calculator acts recursive */
    cout << "MENU " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    cout << "Enter your choice: " << endl;
    int op = 0;
    cin >> op;
    int a = 0;
    int b = 0;
    cout << "Enter your two numbers: "<<endl;
    cin >> a >> b;
    cout << a << endl;
    cout << b << endl;
    if (op == 1) {
        cout << sum(a,b) << endl;
    }
    else if (op == 2) {
        cout << sub(a,b) << endl;
    }
    else if (op == 3) {
        cout << mult(a,b) << endl;
    }
    else if (op == 4) {
        cout << divi(a, b) << endl;
    }
    else if (op == 5) {
        cout << mod(a,b) << endl;
    }
    else {
        cout << "You have chosen invalid operation" << endl;
        calculator();
    }

    char con = 'n';
    cout << "Do you want to continue? If yes, write y, else continue"<< endl;
    cin >> con;
    if (con == 'y') {
        calculator();
    }

    }

void find_min_max(int aoi[10] ) {
    int small = 0;
    int big = 0;
    for (int i = 0; i < 10 ; i++) {
        if (i == 0) {
            small = aoi[i];
            big = aoi[i];
        }

        if (aoi[i] < small) {
            small = aoi[i];
        }
        else if (aoi[i] > big) {
            big = aoi[i];
        }
    }
    cout << "Smallest value is: " << small << endl;
    cout << "Biggest value is: " << big << endl;
}


void arr() {
    int b = 0;
    cout << "Input ten integers" << endl;
    int aoi[10];
    for (int i = 0; i < 10; i++) {
        cin >> b;
        aoi[i] = b;
    }
    cout << "Array of number consists of " << *aoi << endl;
    find_min_max(aoi);

}

void sorting(int aoi[10]) {
    for (int i = 0; i < 10 ; i++) {
        int min_index = i;
        for (int next_index = i + 1; next_index <10; next_index ++) {
            if (aoi[next_index] < aoi[min_index])
                min_index = next_index;
        }
        swap(aoi[i], aoi[min_index]);
    }

    for (int i = 0; i < 10; i++) {
        cout << aoi[i] << "\t";
    }

    }


void pascal() {
    int siz = 0;
    cout << "Enter the size of the Pascal triangle" << endl;
    cin >> siz;

    int aoi_d[siz][siz];

    for (int line = 0; line < siz ; line++) {
            for (int i = 0; i <= line ; i++) {
                if (line == i || i == 0) {
                    aoi_d[line][i] = 1;
                    cout << aoi_d[line][i] << " ";
                }
                else {
                    aoi_d[line][i] = aoi_d[line-1][i-1]+ aoi_d[line-1][i];

            cout << aoi_d[line][i] <<" ";
                    }
                }
            cout << "\n";
            }
}
