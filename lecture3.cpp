#include <iostream>

using namespace std;
int main()
{

    // IF AND ELSE USE BY KNOWING NUM IS + OR  -
    // int i ;
    // cout<<"Enter a num : ";
    // cin>> i ;
    //     cout<<"Enter a num : " << i <<endl;

    // if (i>=0) {
    //     cout<< "i is positive";

    // } else {
    //     cout << "i is negative/n";
    // }
    // age verification for vote
    // int age;
    // cout<<"enter age : ";
    // cin>> age ;

    // if(age>= 18) {
    //     cout<<"you can vote\n";

    // } else {
    //     cout<< "you can't vote\n";

    // }
    // checking a num is odd or even
    // int n ;
    // cout<< "Enter a num : ";
    // cin>> n;
    // if(n%2==0) {
    //     cout<<"n is even\n";

    // } else {
    //     cout << "n is odd" ;

    // }
    // Grading system
    // int n;
    // cout<<"Enter your marks: ";
    // cin>> n;
    // if(n>= 90) {
    //     cout<<"A\n";

    // } else if(n<= 90 && n>= 80) {
    //     cout<< "B\n";

    // } else {
    //     cout<< "C\n";
    // }

    //                                     for checking the character is upper case or lower case

    // char ch;
    // cout<< "Enter char : " ;
    // cin>> ch;
    // if(ch>= 'a' && ch<= 'z') { // here  as we know ch are internally numbers so we comapre as num

    //     cout<< " lowercase\n";

    // } else if ( ch>='A' && ch <= 'z') {
    //     cout<< "Uppercase\n";
    // } else {
    //     cout<< " not valid";
    // }

    //  or  using ASCII value

    // char ch;
    // cout<< "Enter char : " ;
    // cin>> ch;
    // if(ch>= 97 && ch<=122 ) { // here  as we know ch are internally numbers so we comapre as num

    //     cout<< " lowercase\n";

    // } else if ( ch>='A' && ch <= 'Z') {
    //     cout<< "Uppercase\n";
    // } else {
    //     cout<< " not valid";
    // }

    // Ternary statement

    // int i= 10;

    // cout<< (i>=0 ? "positive" : "negative")<<endl;

    // LOOPS

    //- for loop $ While loop $ do-while

    // Q1
    //  int n = 100 ;

    // int i = 1;
    // while(i<=n) {
    //     cout<< i <<" ";
    //     i+=1 ;
    // }
    // cout<<endl;
    // int n= 10;
    // for (int i = 1; i<= n;i += 5) {
    //     cout<< i << " " ;

    // }
    // cout<< endl;
    // Sum of N numbers
    // int n;
    // int sum = 0;

    // cout<< "Enter value of n : " ;
    // cin>> n ;
    // for (int i =  1 ; i  <= n ; i += 1){
    //     sum += i; ///we don't need to define two times the ch of sum like again int sum , it gives error

    // }
    // cout << "sum : " << sum << endl ;
    // use of break
    // int n;
    // int sum = 0;

    // cout<< "Enter value of n : " ;
    // cin>> n ;
    // for (int i =  1 ; i  <= n ; i += 1){
    //     sum += i; ///we don't need to define two times the ch of sum like again int sum , it gives error

    //     if (i == 5) { Stop their .............
    //         break;
    //     }

    // }
    // cout << "sum : " << sum << endl ;
    // Sum of n odd nums using while loop
    // int n;
    // int sum = 0;

    // cout<< "Enter value of n : " ;
    // cin>> n ;
    // int i = 1;
    // while ( i<= n){

    //     if (i%2 != 0){
    //         sum += i;

    //     }
    //     i += 1 ;
    //      ///we don't need to define two times the ch of sum like again int sum , it gives error

    // }
    // cout << "sum : " << sum << endl ;

    // do while loop

    // pahle kaam bad me update *

    // int i = 1;
    // int n = 10;
    // do {
    //     cout<< i << " " ;
    //     i ++;
    // } while ( i <= n) ;

    // cout << endl;
    // for a prime num
    // cout << "Enter a num : ";
    // int n;
    // cin >> n ;
    // bool isprime  = true;
    // for (int i = 2; i <= n-1 ; i ++) {
    //     if (n%i==0){
    //         isprime = false;
    //         break;
    //     }
    // }
    // if (isprime == true) {
    //     cout<<  n << " is Prime num" <<endl;

    // } else {
    //     cout<< n << " is  not Prime num" << endl;

    // }

    //                                    Nested loops
    //                  Q1

    //  for(int i = 1 ; i <= 5 ; i ++) {
    //     for (int i = 1 ; i <= 10 ; i ++){
    //         cout<< "*" ;
    //     }
    //     cout << endl;
    //  }

    // ps 1 Sum of all numbers from 1 to n which are are divisible by 3

    // int n ;
    // cout<< "Enter a num ";
    // cin>> n ;
    // int sum = 0;
    // for(int i = 1 ; i <= n ; i ++){
    //     if (i%3 == 0){
    //         sum += i;

    //     }
    // }
    // cout<< "sum " << sum << endl;

    // ps 2 print factorial of a numbers n

    // int n ;
    // cout<< "Enter N :";
    // cin>> n ;
    // int pro =1;  // important to intialise this
    // for (int i = 1; i <= n; i ++){
    //      pro = pro* i ;

    // }
    // cout<<pro << endl;

    return 0;
}