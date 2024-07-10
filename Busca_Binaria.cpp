#include <iostream>

/*Davi Pereira Bossi - 2024014355
Pedro Mello Morais - 2019006781
Eduarda Zorzete - 2022005535*/

using namespace std;

int binarySearch(int arr[], int n, int element) {
  int left = 0;
  int right = n - 1;

  while (left <= right) {
    int mid = (left + right) / 2;

    if (arr[mid] == element) {
      return mid;
    } else if (arr[mid] < element) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {1, 3, 9, 15, 64};
  int n = sizeof(arr) / sizeof(arr[0]);
  int element = 64;

  int index = binarySearch(arr, n, element);

  if (index != -1) {
    cout << "O elemento " << element << " foi encontrado no indice " << index << endl;
  } else {
    cout << "O elemento " << element << " nao foi encontrado no vetor" << endl;
  }

  return 0;
}
