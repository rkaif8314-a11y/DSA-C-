#include <iostream>
# include <vector>
using namespace std;
// int main (){
    
//     cout<< (10>>2) << endl;
// }
//                               Data type modifiers 
// int main(){
    
    
//     cout<< sizeof(short int)<< endl;
//     cout<< sizeof(long long int)<< endl;
// }
//                             Q check it is perfect square
// bool checknum(int x){
//     if (x%2!=0) return false;
//     while ( x==0 ){
//         x = x/2;
//     }
//     return true;
// }
// int main(){
//     int x =23;
//    if (checknum(x) == true){
//     cout<< "ya it is perf sq";
//    } else{
//     cout<<"not";
//    }

// }
//                                          Array part 1
//                                Creation
// int main (){
//     int marks[3] = {112,13,14};
//     // cout<< marks[0]<< endl;
//     // marks[0] = 25;
//     //  cout<< marks[0]<< endl;
//     int sz =  sizeof(marks);// kitne bytes ka space occupy kar raha hai 3*4 = 12 bytes
//      cout<<sz;

// }
//                 Loop on arrays 
// int main() {
//     int marks[3];// array
//     int size = 3;
//     for(int i = 0 ; i< size; i++){
//        cin>> marks[i];
//     }
//     for(int i = 0 ; i< size; i++){
//         cout<< marks[i]<<endl;
//     }
// }
//                   smallest in array
// int main(){
//     int nums[] ={ 1,2,3,-4,-8};
//     int size = 5;
//     int smallest = INT8_MAX;// positive infinite
//     for (int i = 0 ; i< size ; i++){
//         if (nums[i]<smallest) {
//             smallest = nums[i];
    

//         }
//         //                   OR
//         smallest = min(nums[i],smallest);
        
//     }
//     for (int i = 0 ; i< size ; i++){
//             if(nums[i]== smallest){
//                 cout<< "index :" << i<< endl;// which idex get leats value
//             }
//         }
//     cout<< "smallest : "<<smallest;
// }
//                           Pass by reference
// void changex(int nums[] , int size){
    
   
//     for (int i = 0; i<size;i++){
//         nums[i] = nums[i]*2;

//     }
// }
// int main(){
//     int nums[] ={1,2,3};
//     cout<<"main"<<endl;
//     changex(  nums,3);
//     for (int i = 0;i<3;i++){
//         cout<<nums[i]<<" ";
//     }


// }


//                                  linear search
// int check(int arr[], int sz){
//     int target= 0;

//     for (int i =0; i< sz; i++){
//         if(arr[i]== target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,8,90};
//     check(arr,7);
//     cout<< check(arr,7);
//                                     Reverse an Array
// }
// int main(){
//     int arr1[]={1,2,3,4,5};
//     int size  = 5;
    
//     for(int i=0;(i<size/2);i++){
//         swap(arr1[i],arr1[size-i-1]);

//     }
//     //cout<<arr1; //array is memory of address it can't be print as element
//     for(int i=0;(i<size);i++){
//         cout<<arr1[i] <<" ";
//     }

// }
//Q                                  Caluclate sum or product of two numbers
// int sum(int arr[],int sz){
//     int sum =0;
//     for (int i =0; i<sz;i++){
//         sum += arr[i];

//     }
//     return sum;
// }

// int main(){
//     int arr[] = {1,2,3,4};
//     sum(arr,4);
//     cout << sum(arr,4);
// }
//Q                                        swap min and max of arrays
// int minmax(int arr[],int sz,int & smallest,int  & largest){ // binary to decimal // smallest and largest directly refer to small and large// modification.................
//      smallest = INT8_MAX;
//     largest = INT8_MIN;
//     for (int i =0 ;i< sz;i++){
//         smallest = min( arr[i],smallest);
//         largest = max(largest, arr[i]);
//     }
//     return smallest,largest;
   
    

// }
// int main(){
//     int arr[] = {1,2,-3,4,0,6,-5};
//     int small,large;
//     minmax(arr,7,small,large);
//     swap(small,large); // use swap fucton in main fc..................
//     cout<< "smallest : "<< small;
//     cout<<" largest: "<< large;
// }
 

//                                       VECTORS IN C++ ARRAY PART 2

// int main(){
//     vector<int> vec = { 1,2,3}; // 0
//     cout<< vec[0];
//     return 0;
// }
// //                              vector element printed

// int main(){
//     // vector<int>vec  ={ 1,2,3,4};
//     // for ( int i : vec){
//     //     cout<< i<< endl;
//     // }
//     // // cout<< "size : " << vec.size()<< endl; // for printing size
//     // vec.push_back(25); // for adding number
//     // cout<< "size : " << vec.size();


//  vector <int>vec;
//  vec.push_back(1);
//  vec.push_back(2);

//  vec.pop_back();
//   for ( int i : vec){
//     cout<< i << endl;

//  }
// }
// int main(){
//     vector<int>vec= {1,2,3};
//     cout<< vec.front();
// }

//  How vector internally works
// int main(){
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     cout<< vec.size()<< endl; // 3
//     cout<< vec.capacity()<< endl ; // 4  always double with previous size


// }

//                          Maximum Subarray Sum 
                                                    // core concept of subarray sum
// int main(){
//      int n = 5;
//      int arr[5] ={1,2,3,4,5};
//      for (int st =0 ;st < n ; st++){
//         for ( int end = st ; end<n ;end++){ 
//            for (int i =st ; i <= end; i++){
//             cout<< arr[i];
//            }
//            cout<< " ";
//         }
//         cout<< endl;
//      }
   
// }
                                                       // Brute force Approach

// int main (){
//     int n = 7;
//     int arr[] = {3,-4,5,4,-1,7,8};
//     int maxSum = INT16_MIN; // intialization for max
//     for ( int st = 0 ;st <n ; st ++){
//         int currSum  = 0;
//         for ( int end =st ; end < n ; end++){
//             currSum  += arr[end];
//             maxSum = max(currSum ,maxSum);

//         }
//     }
//     cout<< "max Subbarray sum = "  << maxSum << endl;
//     return maxSum;
// }

//                                       BY KADANE'S ALGORITHM
// int main (){
    
//     int nums[] = {3,-4,5,4,-1,7,8};
//     int maxsum = INT16_MIN; // intialization for max
//     int currsum = 0 ;
//     for ( int val :nums){
//         currsum += val;
//         maxsum = max(currsum,maxsum);
//         if( currsum < 0){
//             currsum = 0;
//         }

//     }
//     cout<< maxsum;
    
   
// }


//                                         Pair Sum //  brute force approach 
// vector<int> pairsum(vector<int>nums,int target){
//     vector<int> ans ;
//     int n = nums.size();
//     for ( int i = 0; i<n ; i ++) {
//         for ( int j = i+1; j < n ; j++){
//             if ((nums[i]+ nums[j]) == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;

//             }
//         }


//     }
//     return ans;
    


// }
// int main () {
//     vector<int> nums = { 2,7,11,15};
//     int target = 17;
//     vector<int> ans = pairsum(nums,target);
//     cout<< ans[0]<<","<< ans[1]<< endl;
// }
                                          // pair Sum form optimize approch

// vector<int> pairsum(vector<int> nums,int target){
//     vector<int> ans;
//     int n = nums.size();
//     int i  = 0 , j = n-1;
//     while (i< j){
//         int pairSum = nums[i]+ nums[j];
//         if (pairSum < target){
//             i++;

//         } else if( pairSum> target){
//             j--;

//         } else {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;

// }
// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target = 9 ;
//     vector<int> ans = pairsum(nums,target);
//     cout<< ans[0] << "," << ans[1]<< endl;
//     return 0 ;

// }


 
