#include<bits/stdc++.h>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function overloading to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function overloading to add two doubles
double add(double a, double b) {
    return a + b;
}

int main(){
    
    cout << "Sum of 5 and 3: " << add(5, 3) << endl;           
    cout << "Sum of 2, 4, and 6: " << add(2, 4, 6) << endl;    
    cout << "Sum of 2.5 and 3.7: " << add(2.5, 3.7) << endl; 
    return 0;
}