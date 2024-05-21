#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <climits>

using namespace std;

// O(n^3) algorithm
int maxSubArraySumCubed(const vector<int>& arr) {
    int max_sum = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

// O(n^2) algorithm
int maxSubArraySumSquared(const vector<int>& arr) {
    int max_sum = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

// O(n) algorithm (Kadane's Algorithm)
int maxSubArraySumLinear(const vector<int>& arr) {
    int max_sum = INT_MIN, current_sum = 0;
    for (int value : arr) {
        current_sum = max(value, current_sum + value);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

vector<int> generateRandomArray(int size, int seed) {
    srand(seed);
    vector<int> arr(size);
    for (int& value : arr) {
        value = rand() % 100 - 25; // generates values in the range [-25, 74]
    }
    return arr;
}

void runAndProfile(int size, int seed) {
    vector<int> arr = generateRandomArray(size, seed);

    clock_t start, end;

    start = clock();
    int result = maxSubArraySumCubed(arr);
    end = clock();
    cout << "O(n^3) result: " << result << ", Time: " << double(end - start) / CLOCKS_PER_SEC << "s\n";

    start = clock();
    result = maxSubArraySumSquared(arr);
    end = clock();
    cout << "O(n^2) result: " << result << ", Time: " << double(end - start) / CLOCKS_PER_SEC << "s\n";

    start = clock();
    result = maxSubArraySumLinear(arr);
    end = clock();
    cout << "O(n) result: " << result << ", Time: " << double(end - start) / CLOCKS_PER_SEC << "s\n";
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <seed> <size>\n";
        return 1;
    }

    int seed = atoi(argv[1]);
    int size = atoi(argv[2]);

    runAndProfile(size, seed);

    return 0;
}




// #include "q5_t1.hpp"
// using namespace std;

// // Maximun subarray sum:

// // First solution- O(n^3):
// int maxSubArraySum_On3(int arr[], int n) {

//     int max_sum = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int sum = 0;
//             for (int k = i; k <= j; k++) {
//                 sum += arr[k];
//             }
//             max_sum = max(max_sum, sum);
//         }
//     }
//     return max_sum;
// }

// // Second solution- O(n^2):
// int maxSubArraySum_On2(int arr[], int n) {
//     int max_sum = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += arr[j];
//             max_sum = max(max_sum, sum);
//         }
//     }
//     return max_sum;
// }

// // Third solution- O(n):
// int maxSubArraySum_On(int arr[], int n) {
//     int max_sum = INT_MIN;
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum = max(arr[i], sum + arr[i]);
//         max_sum = max(max_sum, sum);
//     }
//     return max_sum;
// }
