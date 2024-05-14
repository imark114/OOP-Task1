#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public:
    int val1;
    int val2;

    // Constructor Special type of method
    Calculator(int val1, int val2){
        this->val1 = val1;
        this->val2 = val2;
    }

    // Create a method which can add two number
    int add(){
        return this->val1 + this->val2;
    }
    // Create a method which can multiplied two number
    int multi(){
        return this->val1 * this->val2;
    }
};

int main(){
    
    Calculator obj1(10,20);
    cout<<obj1.add()<<endl;
    cout<<obj1.multi();
    return 0;
}