#include <iostream>
using namespace std;



// stars  ******
// *****
// *****
// *****

//  int main(){
//     for (int i=1; i<=5;i++){
       
//        for (int j=1; j<=5; j++){
//         cout << "*";
//        }
//          cout << endl;
//     }
   
    
//  }
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
// int count=1;

//     while(count<=n){
//         int m=10;
//         int j=1;
//         while(j<=m){
//             cout << "*";
//             j++;
//         }
//         count++;
//         cout << endl;
        
//     }
//     return 0;
// }

// 1234
// 1234
// 1234
// 1234

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

// for (int i=1;i<=n;i++){
    
    
//     for(int j=1; j<=n; j++){
//         cout << j;
//     }
// cout << endl;
// }
//     return 0;
// }


// A B C D
// A B C D
// A B C D
// A B C D

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

// for (int i=1;i<=n;i++){
//     char ch='A';
    
//     for(int j=1; j<=n; j++){
//         cout << ch;
//         ch+=1;
//     }
// cout << endl;
// }
//     return 0;
// }

// 1 2 3
// 4 5 6
// 7 8 9
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
// int count=1;
// for (int i=1;i<=n;i++){
   
    
//     for(int j=1; j<=n; j++){
//         cout << count;
//         count+=1;
//     }
// cout << endl;
// }
//     return 0;
// }


// Triangle pattern
// *
// **
// ***
// ****

// int main(){
//     int n=4;
// for (int i=0;i<n;i++){
   
    
//     for(int j=0; j<i+1; j++){
//         cout << "*";
//     }
// cout << endl;
// }
//     return 0;
// }

//1    i=0
//2 2
//3 3 3
//4 4 4 4 
// int main(){
//     int n=4;
// for (int i=0;i<n;i++){
   
    
//     for(int j=0; j<i+1; j++){
//         cout << i+1;
//     }
// cout << endl;
// }
//     return 0;
// }
 

//A
//BB
//CCC
//DDDD
// int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
        
        
    
//         char ch='A'+i;
//         for(int j=0; j<i+1; j++){
//         cout << ch;
        
//     }
// cout << endl;
// }
//     return 0;
// }


//1
//12
//123
//1234

// int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
        
        
    
//         char ch='A'+i;
//         for(int j=0; j<i+1; j++){
//         cout << j+1;
        
//     }
// cout << endl;
// }
//     return 0;
// }

// reverese triangle pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
//         for(int j=i+1; j>0 ; j--){
//             cout << j;
        
//     }
//     cout << endl;
// }
//     return 0;
// }


// floyd's triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// int main(){
//     int n=4;
//     int count=1;
//     for (int i=0;i<n;i++){
//         for(int j=0; j<i+1 ; j++){
//             cout << count;
//             count++;
        
//     }
//     cout << endl;
// }
//     return 0;
// }

// floyd's triangle character version
// A
// B C
// D E F
// G H I J

// int main(){
//     int n=4;
//     char ch='A';
//     for (int i=0;i<n;i++){
//         for(int j=0; j<i+1 ; j++){
//             cout << ch ;
//             ch++;
            
        
        
//     }
//     cout << endl;
// }
//     return 0;
// }

// inverted triangle
//   1111
//    222
//     33
    //  4
 
//     int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
        
//         // char ch='A'+i; for character use this
//         for(int j=0; j<i ; j++){
//             cout << " " ;   }
        
//         for(int j=0; j<n-i ; j++){
//             // cout << ch; for characters 
//             cout << i+1; 
//     }
    
//     cout << endl;
// }
//     return 0;
// }

// pyramid triable
    //    1
    //  1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

//          int main(){
//     int n=10;
//     for (int i=0;i<n;i++){
        
//         for(int j=1; j<n-i ; j++){
//             cout << " " ;   }
        
//         for(int j=0; j<i+1 ; j++){
//             cout << j+1; 
//     }
//         for(int j=i; j>0 ; j--){
//             cout << j; 
//     }
    
//     cout << endl;
// }
//     return 0;
// }


// Hollow Diamond pattern
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *




//   int main(){
//     int n=4;
    
//     for (int i=0;i<n;i++){
//     for(int j=1; j<n-i ; j++){
//             cout << " " ;  
//         }
//         cout << "*" ;  
//         if(i!=0){
//             for(int j=0; j<2*i-1 ; j++){
//             cout << " " ;  
//         };
//         cout << "*" ;  
//         }
// // bottom part 

//     cout << endl;



    
// }


// // bottom part 
//     for (int i=0; i<n-1;i++){
        
//         for(int j=0; j<i+1 ; j++){
//             cout << " " ;  
//         };
//         cout<<"*";
//         if(i!=n-2){
//             for(int j=0; j<2*(n-i)-5 ; j++){
//             cout << " " ;  
//         };
//             cout<<"*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Butterfly pattern
// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// int main(){
//     int n=4;
//     for(int i=0; i<n ; i++){
//         for (int j=0;j<i+1;j++){
//             cout << i-j+1;
            
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// A A A
// B B B
// C C C

// int main(){
//     int n=4;

//     for(int i=0; i<n ; i++){
//         for (int j=0;j<n;j++){
//             char ch='A'+j;
//             cout <<ch ;
            
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// A B C
// B C D
// C D E
// int main(){
//     int n=4;

//     for(int i=1; i<=n ; i++){
//         for (int j=1;j<=n;j++){
//             char ch='A'+i+j-2;
//             cout <<ch ;
            
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// A
// BB
// CCC
// DDDD

// int main(){
//     int n=4;

//     for(int i=0; i<n ; i++){
//         char ch='A'+i;

//         for (int j=0;j<i+1;j++){
//             cout <<ch ;
            
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// A
// B C
// C D E
// D E F G

// int main(){
//     int n = 4;

//     for(int i = 0; i < n; i++){
//         char start = 'A' + i;
//         for(int j = 0; j <= i; j++){
//             cout << (char)(start + j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 1 1 1 1
//   2 2 2
//     3 3
//       4

// int main(){
//     int n = 4;

// for (int i =0; i<n; i++){
//     for (int j=0; j<i; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<=n-i; j++){
//         cout<<i+1;
//     }
//     cout<<endl;

// }
//     cout<<endl;
//     return 0;
// }

// 1 2 3 4 
//   2 3 4
//     3 4
//       4

// int main(){
//     int n = 4;

// for (int i =0; i<n; i++){
//     for (int j=0; j<i; j++){
//         cout<<" ";
//     }
//     for(int j=i+1; j<=n; j++){
//         cout<<j;
//     }
//     cout<<endl;

// }
//     cout<<endl;
//     return 0;
// }



//        1
//      2 2
//    3 3 3
//  4 4 4 4
// int main(){
//     int n = 4;
// for (int i=0; i<n; i++){
//     for (int j=0; j<n-i-1; j++){
        
//         cout<<"*"<<" ";

//     }
//     for(int j=0; j<i+1; j++){
//         cout<<i+1<<" ";
//     }
//     cout<<endl;

// }
//     cout<<endl;
//     return 0;
// }


//       1
//     2 3
//   4 5 6
// 7 8 9 10
// int main(){
//     int n = 4;
//     int count=1;
// for (int i=0; i<n; i++){
//     for (int j=0; j<n-i-1; j++){
        
//         cout<<"*"<<" ";

//     }
//     for(int j=0; j<i+1; j++){
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;

// }
//     cout<<endl;
//     return 0;
// } 


// int main(){
// int n=4;
// for (int i=0; i<n; i++){
//     for(int s=0; s<n-i-1; s++){
//         cout<<" "<<" ";
//     }

//     for(int j=0;j<i+1;j++){
//         cout<<j+1<<" ";
//     }
//     for(int j=i;j>0;j--){
//         cout<<j<<" ";
//     }

// cout<<endl;

// }
// cout<<endl;


//     return 0;
// }

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

int main(){

    int n=5;
    for (int i=0; i<n; i++){
        for(int num1=0;num1<n-i;num1++){
            cout<<num1+1<<" ";
        }
        // stars
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"*"<<" ";
        }
       for(int num2=n-i; num2>0; num2--){
            cout<<num2<<" ";
        }
      
    
    
    cout<<endl;
        
    }

    cout<<endl;
    return 0;
}
