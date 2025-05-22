#include <iostream>
using namespace std;



// functions where stored  in memory -----> we have stack memory stack store the data  heap--> used for dynamic allocating stack memory is used for static allocation memory
// functions occupy memory in stack means callstack in the form of stack frames 
// int main is a main function which is called by compiler instart automatically


// user return type void when you are not returning anything function

void printHello(){
    cout <<"Hello World!\n";
};

// minimum of two numbers
int minoftwo(int a, int b){
if(a<b){
    return a;
}
else{
    return b;
}
}

// literals -----arguments inside the function are called literal because they are not changing
int findSum(int n){
int sum=0;
    for (int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int factorials(int n){
int fact=1;
    for (int i=n; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
printHello();

cout<<"min is = " <<minoftwo(10,20) << endl;
cout<<"sum is = " <<findSum(10)<<endl;
cout << "factorial is =" << factorials(3);
    return 0;
}


