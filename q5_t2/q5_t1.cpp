#include "q5_t1.hpp"
using namespace std;

// Maximun subarray sum:

// First solution- O(n^3):
int maxSubArraySum_On3(int arr[], int n) {

    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

// Second solution- O(n^2):
int maxSubArraySum_On2(int arr[], int n) {
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

// Third solution- O(n):
int maxSubArraySum_On(int arr[], int n) {
    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}
