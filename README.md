# C++ Algorithm Toolkit

A menu-driven C++ project that demonstrates fundamental searching and sorting algorithms.

## Features

- Linear Search
- Binary Search on a sorted copy of the input array
- Bubble Sort
- Selection Sort
- Interactive menu for choosing operations
- Array display and basic input validation

## Technologies Used

- C++
- Standard Template Library (STL)
- Vectors and functions

## Algorithm Complexity

| Algorithm | Time Complexity |
|---|---|
| Linear Search | O(n) |
| Binary Search | O(log n) |
| Bubble Sort | O(n²) |
| Selection Sort | O(n²) |

**Note:** The Binary Search option sorts a copy of the input array first, using `std::sort`. Therefore, the complete operation takes O(n log n) time.

## How to Compile and Run

Compile with a C++11-compatible compiler:

`g++ -std=c++11 main.cpp -o toolkit`

Run on macOS or Linux:

`./toolkit`

## Testing

The program was manually tested with:

- Successful and unsuccessful searches
- Both sorting algorithms
- Binary search on unsorted input
- Single-element arrays
- Negative numbers
- Invalid array size

## Learning Outcomes

This project helped me practice implementing searching and sorting algorithms, working with C++ vectors and functions, and understanding algorithmic time complexity.

## Future Improvements

- Implement additional sorting algorithms.
- Compare algorithm performance on larger arrays.
- Add automated tests.

