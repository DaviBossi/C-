#include <iostream>

/*Davi Pereira Bossi - 2024014355
Pedro Mello Morais - 2019006781
Eduarda Zorzete - 2022005535*/

using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int n;

  cout << "Entre com o tamanho do array: ";
  cin >> n;

  int arr[n];

  cout << "Insira os elementos do array:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Array original: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  insertionSort(arr, n);

  cout << "Array ordenado: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
