# Binary Search — Lecture 17

This folder contains my **Binary Search** practice from DSA Lecture 17.

## 📌 Topics Covered

- Binary Search using iteration
- Binary Search using recursion
- Searching in a sorted array
- Finding the middle index safely
- Understanding why Binary Search is **O(log n)**
- Understanding the recursive search space
- Integer overflow in middle-index calculation

## 🧠 Binary Search

Binary Search works on a **sorted array**.

Instead of checking every element one by one, it checks the middle element and eliminates half of the search space after every comparison.

### Basic idea

```text
Check middle
    ↓
Compare target with middle
    ↓
 ┌───────────────┐
 ↓               ↓
Target > mid     Target < mid
 ↓               ↓
Right half       Left half
```

## 🔢 Safe Middle Calculation

Instead of:

```cpp
int mid = (st + end) / 2;
```

we use:

```cpp
int mid = st + (end - st) / 2;
```

Both give the same mathematical result, but the second version avoids possible integer overflow when `st + end` becomes larger than the maximum value of an `int`.

## 🔁 Recursive Binary Search

The recursive version repeatedly searches a smaller portion of the array.

### If target is greater than middle

```cpp
return RecuSearch(arr, tar, mid + 1, end);
```

Search the **right half**.

### If target is smaller than middle

```cpp
return RecuSearch(arr, tar, st, mid - 1);
```

Search the **left half**.

### If target equals middle

```cpp
return mid;
```

The target has been found.

## 🛑 Base Condition

When:

```cpp
st > end
```

there is no search space left, so the target does not exist in the array.

The function returns:

```cpp
-1
```

## ⏱️ Complexity

| Approach | Time | Extra Space |
|---|---:|---:|
| Linear Search | O(n) | O(1) |
| Iterative Binary Search | O(log n) | O(1) |
| Recursive Binary Search | O(log n) | O(log n) |

The recursive version uses extra call-stack space because each recursive call remains on the stack until the search finishes.

## 🧪 Example

Array:

```text
{-1, 0, 3, 4, 5, 9, 12}
```

Target:

```text
12
```

Target is found at:

```text
index 6
```

## 📂 File

- `binarysearchlec17.cpp` — Iterative Binary Search notes/code and Recursive Binary Search implementation.

---

**Lecture:** 17  
**Topic:** Binary Search  
**Language:** C++
