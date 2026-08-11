#include <iostream>
using namespace std;

//                                                FUNCTIONS
// funtion definition
// int printhello(){
//     cout<<"hello\n";
//     return 0;
// }
// int main() {
//     // funtion call / invoke
//     int val = printhello();

//     cout<< val<< endl;
// }
//                                            Sum of 2 nums
// int sum(int a, int b){
//     int s =  a+ b;
//     return s;
// }
//                                                min of 2 nums
// int min(int a, int b){ // parameters
//     if (a>b){
//         return b;
//     } else {
//         return a;
//     }
// }
//                                         Sum of n numbers
// int sumN(int n){
//     int sum = 0 ;
//     for( int i = 1 ; i< n+1 ; i++){
//         sum+= i;
//     }
//     return sum;

// }
// int main() {
//     cout<< min(2,3); // arguments
// }
//                                          Calculate factorial N
// int factorial(int n){
//      int fact = 1;
//      int i = 1;
//      while( i < n+1) {
//         fact = fact *i;
//         i++;
//      }
//      return fact;
// }
// void changex(int x)
// {
//     x = x * 3;
//     cout << "x: " << x << endl;
// }
// int main()
// {
//     int x = 5;
//     changex(x);
//     cout << " x: " << x << endl;
// }
//                            Sum of digit of a number
// int sumdigit(int num){
//     int digitsum = 0;
//     while (num > 0){
//         digitsum += num %10;
//         num = num/10;
    
//     }
//     return digitsum;


// }
// int main (){
    
//     cout<< "sum : "<< sumdigit(123456789)<< endl;

// }

//Q                      calculate nCr binomial coefficient
//      wrong code wrooooooooooong ; retuen ke ba code run nhi karega  
//int bino(int n , int r) {
//     int fact = 1;
//     int i = 1;
//     if (n>r){
//         while (i< n){
//         fact *= i;
//         i++;
//     }
//     return fact;
//     int facto = 1;
//     while(i<r){
//         facto*=i;
//         i++;
//     }
//     return facto;
//     int j = n-r;
//     int diff = 1;
//     while(i<j){
//         diff*=i;
//         i++;
//     }
//     return diff;
//     return fact/(facto*diff);


//     } else{
//         cout<< "Not valid";

//     }

    
// }
// int main(){
//     bino(5,2);
//     cout<<"binomial: "<< bino(5,2);

// }
            //  Nice code 2 function were used with back to back calling
// int factorial(int x){
//     int fact = 1;
//     for (int i =1 ; i<= x; i++){
//         fact *= i;
//     }
//     return fact;

// }
// int bino(int n , int r){
//     int n_fact = factorial(n);
//     int r_fact = factorial(r);
//     int nr_fact = factorial(n-r);
//     return n_fact/(r_fact*nr_fact);
    
// }
// int main(){
//     cout<< "binomail : "<< bino(5,2)<< endl;
// }
//                                Check a num is prime or not

// bool isprime(int n){
     
//     if ( n <=1) return false ;// jo jo condition hai jaha lag rha hai ki  galat hai waha false return kardo......
//         for(int i = 2;i <= n-1 ; i++){
//             if (n%i== 0){
//                 return false;
                

//             }
//             return true;
//         }

            
    
// }
// int main(){
    
//     int n = 4;
//     if (isprime(n)){
//     cout<< "is prime"<< endl;                                  // agar if ke pahle funtion call karna hai to currly breket is important
    
// } else{
//     cout<< "is not prime"<< endl;
// }
// }


//                                                        Q print prime num from 2 to n
// bool isprime(int n){
//     if (n<= 1) return false ;
//     for (int i =2; i<=  n-1 ; i++){
//         if (n%i == 0){
//             return false ;
//         }

//     } return true;
// }

// void prime(int k) {
//     for ( int j =2 ;j<= k; j++){
//         if (isprime(j)){
//             cout << j<<" "; // if we use return then function is stop by only one step
//         }


//     }
// }

// int main(){
// prime(100); // we not write here cout<< prime(100) beacuse void function doesnot return any value
    
// }
                                                       // Fibonacci pattern

// int main(){
//     int n = 10;
//     int a= 0 , b = 1;
//     for (int i = 1; i<= n ; i++){
//         int next =  a+b;
//         cout<< a <<" " ;
//         a= b;
//         b = next;
       

//     }
// }