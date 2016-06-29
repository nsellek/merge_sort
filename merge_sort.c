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
  mergeSort(arr, 0, size);
  print_arr(arr, size);

}

void elements(int* target, int* sorce, int start, int end){
  for(int i=0; i < end; i++){
    target[i] = sorce[start+i];
  }
}

void merge(int* a, int low, int mid, int high){
  int i,j,k,size1 = mid-low+1, size2 = high-mid;
  int first_half[size1], second_half[size2];
  elements(first_half, a, low, size1);
  elements(second_half, a, mid+1, size2);
  i = j = 0;
  k = low;
  while(i<size1 || j<size2)  // Merge the two halves
  {
    if(i >= size1){
      a[k++] = second_half[j++];
      continue;
    }
    if(j >= size2){
      a[k++] = first_half[i++];
      continue;
    }
    if(first_half[i] < second_half[j])
    a[k++] = first_half[i++];
    else
    a[k++] = second_half[j++];
  }
}

void mergeSort(int* arr, int l, int r){
  if(l < r){
    int m = l + (r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
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
