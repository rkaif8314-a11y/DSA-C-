#include <iostream>
#include <vector>
using namespace std;


// ============================================================
//                 BINARY SEARCH - ITERATIVE
// ============================================================
//
// Binary Search works only when the array is SORTED.
//
// Example:
// arr = {-1, 0, 3, 4, 5, 9, 12}
//
// Instead of checking every element like Linear Search,
// Binary Search checks the middle element and eliminates
// half of the search space each time.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)
// ============================================================


// int binarysearch(vector<int> arr, int target) {
//
//     int st = 0;
//     int end = arr.size() - 1;
//
//     while (st <= end) {
//
//         // Find the middle index.
//
//         // This works:
//         // int mid = (st + end) / 2;
//
//         // But for very large integers, st + end
//         // can overflow the int range.
//
//         // Safer / optimized way:
//         int mid = st + (end - st) / 2;
//
//
//         // Target is greater than middle element.
//         // Therefore target must be in the RIGHT half.
//
//         if (target > arr[mid]) {
//             st = mid + 1;
//         }
//
//
//         // Target is smaller than middle element.
//         // Therefore target must be in the LEFT half.
//
//         else if (target < arr[mid]) {
//             end = mid - 1;
//         }
//
//
//         // If neither greater nor smaller,
//         // then target == arr[mid].
//
//         else {
//             return mid;
//         }
//     }
//
//     // Target was not found.
//
//     return -1;
// }


// ============================================================
//                    EXAMPLE
// ============================================================
//
// vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//
// Index:                 0   1   2   3   4   5   6
// Value:               -1   0   3   4   5   9  12
//
// target = 12
//
// Binary Search:
//
// 1. st = 0, end = 6
//    mid = 3
//    arr[mid] = 4
//
//    12 > 4
//    So search RIGHT side.
//
//    st = mid + 1
//    st = 4
//
// 2. st = 4, end = 6
//    mid = 5
//    arr[mid] = 9
//
//    12 > 9
//    Search RIGHT side.
//
//    st = 6
//
// 3. st = 6, end = 6
//    mid = 6
//    arr[mid] = 12
//
//    12 == 12
//
//    return 6
// ============================================================


// ============================================================
//                  WHY O(log n)?
// ============================================================
//
// Suppose there are n elements.
//
// Every step removes HALF of the remaining elements:
//
// n
// n/2
// n/4
// n/8
// n/16
// ...
// 1
//
// After k steps:
//
// n / 2^k = 1
//
// n = 2^k
//
// Taking log:
//
// log2(n) = k
//
// Therefore:
//
// Time Complexity = O(log n)
//
// This is much faster than Linear Search:
//
// Linear Search  -> O(n)
// Binary Search  -> O(log n)
// ============================================================


// ============================================================
//                 BINARY SEARCH - RECURSION
// ============================================================
//
// Instead of using a while loop, recursion repeatedly calls
// the same function with a smaller search range.
//
// We pass:
//
// arr    -> sorted array
// tar    -> target value
// st     -> starting index
// end    -> ending index
//
// ============================================================

int RecuSearch(vector<int> arr, int tar, int st, int end) {

    // --------------------------------------------------------
    // BASE CONDITION
    // --------------------------------------------------------
    //
    // If st becomes greater than end, there is no search
    // space left.
    //
    // Example:
    //
    // st = 5
    // end = 4
    //
    // There is nothing left to search.
    //
    // Therefore target does not exist.
    // --------------------------------------------------------

    if (st <= end) {

        // ----------------------------------------------------
        // FIND MIDDLE
        // ----------------------------------------------------
        //
        // Safer way to calculate middle:
        //
        // st + (end - st) / 2
        //
        // This avoids possible integer overflow that can
        // happen with:
        //
        // (st + end) / 2
        // ----------------------------------------------------

        int mid = st + (end - st) / 2;


        // ----------------------------------------------------
        // CASE 1: TARGET IS GREATER THAN MIDDLE
        // ----------------------------------------------------
        //
        // Example:
        //
        // target = 12
        // arr[mid] = 5
        //
        // Since the array is sorted, everything to the LEFT
        // of mid is also <= 5.
        //
        // Therefore 12 cannot be on the left.
        //
        // Search the RIGHT half:
        //
        // new start = mid + 1
        // ----------------------------------------------------

        if (tar > arr[mid]) {

            return RecuSearch(arr, tar, mid + 1, end);
        }


        // ----------------------------------------------------
        // CASE 2: TARGET IS SMALLER THAN MIDDLE
        // ----------------------------------------------------
        //
        // Example:
        //
        // target = 3
        // arr[mid] = 5
        //
        // Since the array is sorted, target must be on the
        // LEFT side.
        //
        // Search:
        //
        // new end = mid - 1
        // ----------------------------------------------------

        else if (tar < arr[mid]) {

            return RecuSearch(arr, tar, st, mid - 1);
        }


        // ----------------------------------------------------
        // CASE 3: TARGET == MIDDLE
        // ----------------------------------------------------
        //
        // We found the target.
        //
        // Return its index.
        // ----------------------------------------------------

        else {

            return mid;
        }
    }


    // --------------------------------------------------------
    // TARGET NOT FOUND
    // --------------------------------------------------------
    //
    // This happens when:
    //
    // st > end
    //
    // The search area has become empty.
    // --------------------------------------------------------

    return -1;
}


// ============================================================
//                         MAIN
// ============================================================

int main() {

    // Sorted array
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};

    // Value we want to find
    int tar1 = 12;


    // Start searching from index 0
    // until the last index.
    //
    // arr1.size() - 1 = last index

    cout << RecuSearch(
        arr1,
        tar1,
        0,
        arr1.size() - 1
    );


    return 0;
}
