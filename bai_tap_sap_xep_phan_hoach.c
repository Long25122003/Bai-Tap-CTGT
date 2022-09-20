#include <stdio.h>

void sort_shell(int arr[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = arr[i];
      int j;
      for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
        arr[j] = arr[j - interval];
      }
      arr[j] = temp;
    }
  }
}

void print(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {11, 10, 5, 9, 7, 8, 6, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  sort_shell(arr, size);
  printf("Mang sau khi sap xep la:\n");
  print(arr, size);
}
