# Dictionary Benchmark

## Names
- Desmond Farley-Williams

## Structure

- `src/`: Contains `Dictionary` interface and `UnsortedVectorDict` implementation.
- `.github/workflows/test.yml`: GitHub Actions CI setup.

## How It Works

1. UnsortedVectorDict.cpp is complete and the main function contains the necessary code to test it. 
2. The output provides the average run-time for the **insert** and **lookup** function. However, only the average run-time values for the unsorted vector variation is meaningful as the other variations have not been implemented yet.    
3. GitHub Actions runs 

## Run Locally

```bash
mkdir build && cd build
cmake ..
make
ctest --output-on-failure
```

## Reflection

- `SortedVectorDict::insert` returned early for non‑zero values.
- Treated value as an index during insert.
- Singly linked list `remove`: added **head case**.
- Added breaks in search when in order.

**Resources & help (attribution)**
- C++ reference (cppreference) for `std::vector` operations and iterator/erase rules.

![](C:\Users\37504\Desktop\Insert Time vs N (us).png)

![](C:\Users\37504\Desktop\Avg Lookup vs N (ns).png)


