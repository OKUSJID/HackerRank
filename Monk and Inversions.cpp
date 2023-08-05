#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    while(T--) {
        int N; // Size of the matrix
        cin >> N;
        int arr[101][101] = {0}; // Initialize a 2D array

        // Input the elements into the array
        for(int i = 1; i <= N; i++)
            for(int j = 1; j <= N; j++)
                cin >> arr[i][j];

        int count = 0; // Initialize inversion count

        // Count the number of inversions
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                for(int x = i; x <= N; x++) {
                    for(int y = j; y <= N; y++) {
                        if(arr[i][j] > arr[x][y])
                            count++;
                    }
                }
            }
        }

        // Print the result
        cout << count << "\n";
    }
    return 0;
}
