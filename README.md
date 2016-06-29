# Merge_Sort

##Intro
This is my implementation of the merge sort algorithm coupled with a sudo-random number generator to auto-feed the numbers and elements to sort.

##Usage

###Compiling
To compile both the generator and merge_sort files just run
```
make all
```
or for individual files
```
make <FileName>
```

###Merge Sort
The merge_sort file takes no command-line arguments 
```
./merge_sort
```
and prompts the user for input
```
Enter size of array: 
```
after recieving the size will prompt the user to input each element of the array
```
Enter element for x index:
```
where x is the current index you are on.

###Number Generator
The generator takes one argument and one optional argumen
```
./generator n [s]
```
where `n` is the number of elements desiered and `s` is the optional seed for the generator if your are using this for testing and constant numbers are desired

###Using generator and merge_sort
If you don't want to input every element of the array into the merge_sort program simply calling
```
./generator n | ./merge_sort
```
will supply all the arguments for merge_sort where n is the length of the array in merge_sort
