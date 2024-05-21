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

vector<int> generateRandomArray(int size, int seed) {
    srand(seed);
    vector<int> arr(size);
    for (int& value : arr) {
        value = rand() % 100 - 25; // generates values in the range [-25, 74]
    }
    return arr;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <seed> <size>\n";
        return 1;
    }

    int seed = atoi(argv[1]);
    int size = atoi(argv[2]);

    vector<int> arr = generateRandomArray(size, seed);
    cout << maxSubArraySumCubed(arr) << endl;


    return 0;
}