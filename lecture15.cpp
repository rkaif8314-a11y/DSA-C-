#include <iostream>
#include <vector>
using namespace std;
// int main()
// {
//         int a = 10;
//         int* ptr = &a; // address of a
//         cout<< ptr<<endl;
//         cout<< &ptr<<endl;
//         cout<<&a<<endl;
//     }

    //                                      Pointer to pointer
    // int a =10;
    // int*ptr =&a;
    // int ** parptr =&ptr;
    // cout<<&ptr<<endl;
    // cout<<parptr<<endl;

    // int * ptr = NULL;// null pointer
    // cout<<ptr<<endl;

    //                                        pass by reference using pointers

// void changeA(int* ptr) {
//     *ptr = 20;
// }

//     int main(){
//         int a =10;
//         changeA(&a);
//         std::cout << "Inside main: " << a << std::endl;  // output 20
//         return 0;
//     }

//                                          Pointer arithmetic
 int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    cout<<*arr<<endl; // 10
    cout<<*(arr+1)<<endl; // 20
    cout<<*(arr+2)<<endl; // 30
    cout<<*(arr+3)<<endl; // 40
    cout<<*(arr+4)<<endl; // 50 
 }





















