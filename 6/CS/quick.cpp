#include <iostream>
using namespace std;
int arr[7] = {15, 4, 7, 2, 5, 8, 9};

int partition(int left, int right) {
  int pivot = arr[right];
  int low = left;
  int high = right - 1;

  while (low <= high) {
    while (low < right && arr[low] < pivot) {
      low++;
    }
    while (high >= left && arr[high] > pivot) {
      high--;
    }

    if (low > high) {
      swap(arr[right], arr[low]);
    } else {
      swap(arr[low], arr[high]);
    }
  }

  return low;
}

void quicksort(int left, int right) {
  if (left < right) {
    int q = partition(left, right);
    quicksort(left, q - 1);
    quicksort(q + 1, right);
  }
}
int main() {
  quicksort(0, 6);

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}