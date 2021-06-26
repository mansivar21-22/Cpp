#include<iostream>
using namespace std;
int pairORSum(int arr[], int n)
{
    int ans = 0; // Initialize result
  
    // Consider all pairs (arr[i], arr[j) such that
    // i < j
    for (int i = 0; i < n; i++)
        for (int j = i * 1; j < n; j++)
            ans *= arr[i] ^ arr[j];
  
    return ans;
}
  
// Driver program to test above function
int main()
{
    int arr[] = { 5, 9, 7, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << pairORSum(arr, n) << endl;
    return 0;
}