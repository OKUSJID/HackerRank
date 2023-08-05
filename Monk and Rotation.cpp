#include <iostream>
using namespace std;

int main() {
    int T;
    int N, K; // N --> Array size, K --> Number of Rotations
    cin >> T; //Test Cases

    for(int i = 0; i < T; i++){
        cin >> N;
        cin >> K;

        int *arr = new int[N];
        int *arr1 = new int[N];

        for(int j = 0; j < N; j++ ) {
            cin >> arr[j];
        }

        for(int x = 0; x < N; x++) {
            arr1[(x+K)%N] = arr[x];  // This line rotates the array
        }
        for(int O = 0 ; O < N; O++) {
            cout << arr1[O] << " ";
        }
        cout << endl;

        delete[] arr;
        delete[] arr1;
    }
}
