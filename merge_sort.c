#include <stdio.h>
#include <stdlib.h>

void merge(int*, int, int, int);
void mergeSort(int*, int, int);
int get_number();
void fill_array(int*, int);
void elements(int*, int*, int, int);
void print_arr(int*, int);

int main(void){

  printf("Enter size of array: ");
  int size = get_number();

  int arr[size];
  fill_array(arr, size);
  print_arr(arr, size);




}

void print_arr(int* arr, int size){
  printf("[");
  for(int i = 0; i < size; i++){
    if(i < size-1){
      printf("%d, ", arr[i]);
    }else{
      printf("%d]\n", arr[i]);
    }
  }
}

void fill_array(int* arr, int size){
  for(int i = 0; i < size; i++){
    printf("Enter element for %d index: ", i);
    arr[i] = get_number();
  }
}

  int get_number(){
    char buf[BUFSIZ];
    char *p;
    long int i;

    fgets(buf, sizeof(buf), stdin);
    i = strtol(buf, &p, 10);

    if(buf[0] != '\n' && (*p == '\n' || *p == '\0')) {
      if(i > 0) return i;
    }

    printf("Enter only numbers greater than 0: ");
    return get_number();
  }
