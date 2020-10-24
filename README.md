# sorting-algos
Implementation of Sorting algorithms in C (Beginner)


## Steps for Adding new Algorithm

1. Add algorithm signature to `sort_algo.h` header file.
2. Implement your algorithm with file name format `<algo-name>_sort.c` in `algorithms` folder, with same signature mentioned in Step 1. Make sure to include `sort_algo.h`.
3. In file `common/menu.c`, increment the macro definition `TOTAL_ALGOS`. Also add Print statement at last with sorting Algorithm name.
4. In `main.c`, add the new case in switch block, with same number presented in `menu.c`. Call your implemented sort array in the case statement.


## Build 
```sh
make
```

## Run
```sh
./sorting_algorithms
```
![output](https://res.cloudinary.com/dren4jgbp/image/upload/v1603520201/carbon_obaguf.png)

## Clean
```
make clean
```


