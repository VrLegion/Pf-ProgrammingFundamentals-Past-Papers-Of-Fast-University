
---

# Lecture Plan: Understanding Arrays and Their Traversal in C++

---

## **1. Conceptual Foundation: What is an Array?**

### Intuition

An array is like a **row of lockers**, each holding a value of the _same type_, stored **contiguously** (side by side) in memory.  
Each locker (index) has a number — that’s how we access it.

### Key Properties

- Fixed size (decided at compile time for static arrays)
    k
- All elements are of the same data type
    
- Contiguous memory (no gaps between elements)
    

### Visualization

```
int arr[5] = {10, 20, 30, 40, 50};

Memory:
| 10 | 20 | 30 | 40 | 50 |
  ^    ^    ^    ^    ^
  |    |    |    |    |
 addr addr+4 addr+8 ...
```

---

## **2. Basic Declaration and Access**

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Accessing elements
    cout << "First element: " << arr[0] << endl;
    cout << "Third element: " << arr[2] << endl;

    // Modifying
    arr[1] = 99;
    cout << "After modification: " << arr[1] << endl;
}
```

---

## **3. Traversing 1D Arrays**

### **Using a Loop**

```cpp
for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";
```

### **Edge Cases & Notes**

- Loop bounds off by one cause undefined behavior (`arr[5]` is out of bounds).
    
- If you don’t initialize all elements, C++ leaves them uninitialized (garbage).
    

---

## **4. What Happens When You Print the Array Name?**

Now for the fun part.

```cpp
cout << arr << endl;
```

### Output Example:

```
0x61fdf0
```

### Explanation:

- `arr` **decays** into a pointer to its first element (`&arr[0]`).
    
- So printing `arr` prints its **base address** in memory, not its contents.
    
- `arr[i]` is equivalent to `*(arr + i)` → pointer arithmetic in disguise.
    

```cpp
cout << arr[0] << " " << *(arr) << endl;      // both same
cout << arr[3] << " " << *(arr + 3) << endl;  // both same
```

This is your first peek into **pointer semantics** — arrays are not pointers, but they behave _like_ them when passed around.

---

## **5. Using Loops and Character Arrays**

### Concept

Character arrays are just arrays of `char`, used to store text (strings).

```cpp
char word[6] = "Hello";

for (int i = 0; i < 5; i++)
    cout << word[i] << " ";
cout << endl;
```

### Special Case: Printing the Whole Array

```cpp
cout << word << endl;
```

Why does this print “Hello” instead of a memory address?

→ Because `cout` treats `char*` specially — it assumes it points to a **C-string**, and prints characters until it finds a **null terminator (`'\0'`)**.

---

### 🔍 Edge Case

If you forget the null terminator:

```cpp
char bad[5] = {'H','e','l','l','o'}; // no '\0'
cout << bad << endl;  // prints garbage after "Hello"
```

So, `char` arrays are _text when null-terminated_ and _raw memory otherwise_.

---

## **6. 2D Arrays — Rows, Columns, and Traversal**

### Declaration

```cpp
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

### Normal Traversal

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++)
        cout << matrix[i][j] << " ";
    cout << endl;
}
```

---

## **7. Row-Major Storage and Flattening**

C++ stores 2D arrays in **row-major order** — row by row, laid out linearly.

```
matrix[3][4] in memory:
1 2 3 4 | 5 6 7 8 | 9 10 11 12
```

The address formula:

```
Address of matrix[i][j] = Base + (i * cols + j) * sizeof(int)
```

---

## **8. Simulating a 2D Array with a 1D Array**

### Example

```cpp
int rows = 3, cols = 4;
int arr[12];
for (int i = 0; i < rows * cols; i++) arr[i] = i + 1;

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++)
        cout << arr[i * cols + j] << " ";
    cout << endl;
}
```

---

## **9. Printing 2D Array Using One Loop (Row-Major Simulation)**

```cpp
int rows = 3, cols = 4;
int arr[12];
for (int i = 0; i < rows * cols; i++) arr[i] = i + 1;

for (int k = 0; k < rows * cols; k++) {
    int i = k / cols;
    int j = k % cols;
    cout << arr[i * cols + j] << " ";
    if (j == cols - 1) cout << endl;
}
```

---

## **10. Column-Major Exploration**

Switch the indexing logic:

```cpp
cout << arr[j * rows + i];
```

Now data prints column by column — this is **column-major order** (used in Fortran, MATLAB).

---

## **11. Memory and Pointer Experiments**

```cpp
int a[5] = {10, 20, 30, 40, 50};

cout << a << endl;          // address of first element
cout << &a[0] << endl;      // same as above
cout << *(a + 2) << endl;   // 3rd element
cout << &a[2] << endl;      // address of 3rd element
```

### Observation:

Each address increases by 4 bytes (size of `int`).

---

## **12. Summary**

|Concept|Code / Formula|Key Takeaway|
|---|---|---|
|Array name|`arr`|Decays to pointer to first element|
|Access|`arr[i]` = `*(arr + i)`|Pointer arithmetic|
|Row-major mapping|`i * cols + j`|2D→1D conversion|

### 13. Examples questions with codes
#### Reverse an array in place
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
```

#### Search
```cpp
using namespace std;

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int find = 3;
	bool found = false;
	int idx = -1
	for(int i = 0; i < n; i++) {
		if(arr[i] == find) {
			found = true;
			idx = i;
			break;
		}
	}
	(found) ? cout<<"Found at: " << idx << endl : cout<<"Not Found..."<<endl; 
}
```

#### Magic
```cpp
#include <iostream>
using namespace std;

int main() {
    int fun1[] = {4, 0, 2, 8, 2, 6, 0, -1};
    int fun2[] = {3, 6, 0, 4, 1, -1, 5, -1};
    int start = 2;  

    int curr = start;
    while (curr != -1) {
        cout << fun1[curr] << "->";
        curr = fun2[curr];
    }
    cout << "*";
}
```

#### Spiral
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    int top = 0, bottom = 2, left = 0, right = 3;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
}
```

#### Sentence to 2D array
```cpp
#include <iostream>
using namespace std;

int main() {
    char str[] = "PF A3 is Easy";
    int n = 4;
    char words[4][10];
    
    int count = 0;
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words[count][j] = '\0';
            j = 0;
            count++;  
        }
        else {
            words[count][j++] = str[i];
        }
    }
    words[count][j] = '\0';
    
    for(int i = 0; i < 4; i++) {
        cout<<words[i]<<endl;
    }
}

```

#### Transpose without temp matrix
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(j <= i) continue;
            arr[i][j] ^= arr[j][i];
            arr[j][i] ^= arr[i][j];
            arr[i][j] ^= arr[j][i];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    /*
    
    [] -> an int variable in memory i.e 4 blocks/bytes
    [0][1][2][3][4] -> an int array of 5 elements and the number inside denotes the index
    '&' -> returns the address of the variable in question
    '*' -> returns the value stored at a certain address
    
    arr = 0x100
    arr + 3 = 0x104 -> 0x108 -> 0x112
    *(0x112) = 4
    
    0 == lastIdx - 0
    1 == lastIdx - 1
    2 == lastIdx - 2
    .
    .
    
    temp
    ^
    
    a, b
    a = a^b;
    b = a^b;
    a = a^b;
    */
    
    // char str[] = "Ibtasaam";
    // int len = 0;
    // for(int i = 0; str[i] != '\0'; i++) {
    //     len++;
    // }
    // int lastIdx = len - 1;
    
    // for(int i = 0; i < len/2; i++) {
    //     str[i] ^= str[lastIdx - i];
    //     str[lastIdx - i] ^= str[i];
    //     str[i] ^= str[lastIdx - i];
    // }
    
    // cout<<str<<endl;
    
    // char str[] = "MADAM";
    // int len = 0;
    // for(int i = 0; str[i] != '\0'; i++) {
    //     len++;
    // }
    // int lastIdx = len - 1;
    // bool isPal = true;
    
    // for(int i = 0; i < len/2; i++) {
    //     if(str[i] != str[lastIdx - i]) {
    //         isPal = false;
    //         break;
    //     }
    // }
    // if(isPal)
    //     cout<<"Is Palindrome"<<endl;
    // int rows = 4, cols = 2;
    // //               0, 1, 2, 3, 4, 5, 6, 7
    // int matrix[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    // // 0: 1 2 3 4 IDX: 0 1 2 3 / cols = 0
    // // 1: 5 6 7 8 IDX: 4 5 6 7 / cols = 1
    
    // //    0 1 2 3
    // // -------------
    // // 0: 1 2 3 4 
    // // 1: 5 6 7 8 
    
    // for(int k = 0; k < rows * cols; k++) {
    //     int i = k / cols;
    //     int j = k % cols;
    //     int idx = (i * cols + j);
    //     cout<<matrix[idx]<<" ";
    //     if(j == cols - 1) 
    //         cout<<endl;
    // }
    
    int arr[] = {2, 1, 0, -1, 7};
    int find = -1;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == find) {
            cout<<"found at: "<<i<<endl;
        }
    }
    
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };
    
    // 1 2 3 4 8 12 11 10 9 5 6 7
    
    int top = 0, bottom = 4, left = 0, right = 3;
    
    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) {
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i = top; i <= bottom; i++) {
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
    }
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    char str[] = "PF A3 is Very Easy";
    char words[5][10]; 
    // words[0] = "PF"
    // words[1] = "A3"
    // words[2] = "is"
    // words[3] = "very"
    // words[4] = "Easy"
    
    int wordCount = 0;
    int wordIdx = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            words[wordCount][wordIdx] = str[i];
            wordIdx++;
        }
        else {
            words[wordCount][wordIdx] = '\0';
            wordCount++;
            wordIdx = 0;
        }
    }
    
    words[wordCount][wordIdx] = '\0';
    
    for(int i = 0; i < 5; i++) {
        cout<<words[i]<<endl;
    }
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    // spar -> pras -> sarp ->arsp
    // A3 -> 3A
    
    char str1[] = "spar"; // -> aprs
    char str2[] = "pars"; // -> aprs
    
    
    
    // int freq[256] = {0};
    
    // int len1 = 0;
    // while(str1[len1] != '\0') len1++;
    
    // int len2 = 0;
    // while(str2[len2] != '\0') len2++;
    
    // if(len1 != len2) {
    //     cout<<"Not an anagram"<<endl;
    //     return 0;
    // }
    
    // for(int i = 0; str1[i] != '\0'; i++) {
    //     int idx1 = str1[i];
    //     freq[idx1]++;
    //     int idx2 = str2[i];
    //     freq[idx2]--;
    // }
    
    // for(int i = 0; i < 256; i++) {
    //     if(freq[i] != 0) {
    //         cout<<"Not an anagram"<<endl;
    //         break;
    //     }
    // }
}
```
