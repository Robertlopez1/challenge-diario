#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort
using namespace std;

int main() {
   
    int arr[] = {5, 2, 9, 1, 5, 6, 3, 8, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]); 

    
    cout << "Array original:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    sort(arr, arr + n);


    cout << "Array ordenado:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
