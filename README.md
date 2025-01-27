# Invalid Pointer to std::vector Elements After Reallocation

This repository demonstrates a common error in C++ involving the use of raw pointers with `std::vector`.  The code attempts to modify the contents of a vector via a raw pointer, but this pointer becomes invalid if the vector is resized or reallocated. This can lead to crashes, unexpected behavior, and data corruption.

## Bug Description

The `bug.cpp` file shows an example of this error. A raw pointer `ptr` is obtained to the beginning of the vector. The vector elements are then modified through the raw pointer. However, if the vector's internal storage changes (due to resizing or reallocation), `ptr` will become invalid, leading to undefined behavior.

## Solution

The `bugSolution.cpp` file provides a corrected version of the code.  It avoids the use of raw pointers and instead uses iterators to access and modify the vector elements. Iterators are automatically updated when the vector's internal storage changes, thus preventing this type of error.