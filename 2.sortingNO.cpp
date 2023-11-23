#include <iostream>
using namespace std;

void sortAscending(int numbers[], int n) 
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++) 
    {
      if (numbers[i] > numbers[j]) 
      {
        swap(numbers[i], numbers[j]);
      }}
  }}
int main() {
  int numbers[] = {10, 23, 4, 12};
  int n = sizeof(numbers) / sizeof(numbers[0]);

  sortAscending(numbers, n);
for (int i = 0; i < n; i++) 
  {
    cout << numbers[i] << " ";
  }

  return 0;
}
