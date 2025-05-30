#include<iostream>
using namespace std;
int main(){
    int size=5;
    int marks[size];
    // enter the values upto 5 here in this loop accept values add add them in marks array
    for (int i = 0; i<size; i++){
        cin>>marks[i];
    }

    for(int i = 0; i<size;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}