#include <iostream>
using namespace std;

int main() {
    int n;
        cout << "Enter No of Elements You want to store in Array: ";
        cin >> n;
        if (n <= 0) {
          cout << "Invalid array size! Must be greater than 0.";
        }

        int *arr = new int[n];
        int sum = 0;
        float avg;

        for (int i = 0; i < n; i++) {
            cout << "Enter Element for position " << i + 1 << ": ";
            cin >> arr[i];
}

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        avg = (float)sum / n;
        cout << "Sum of " << n << " elements is: " << sum << endl;
        cout << "Average of " << n << " elements is: " << avg << endl;

        delete[] arr;

    return 0;
}

