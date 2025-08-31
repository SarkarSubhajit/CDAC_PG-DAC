#include <iostream>
#include <cstring>
using namespace std;

int main() {
    //const char* msg = "Hello";
    int a, b;
    cin >> a >> b;
    int** arr = new int*[a];
    int result[a];
    for (int i = 0; i < a; i++)
        arr[i] = new int[b];
    
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            cin >> arr[i][j];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << "----------------------------------" << endl;
    
    for (int i = 0; i < a; i++) {
        int max = arr[i][0];
        for (int j = 0; j < b; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            result[i] = max;
        }
    }

    cout << "Row-Wise Maximum : " << endl;
    for (int i = 0; i < a; i ++)
        cout << result[i] << "\t";
    cout << endl;

	for (int i = 0; i < a; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
