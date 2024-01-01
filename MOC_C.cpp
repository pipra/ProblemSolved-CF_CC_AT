#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count pairs that satisfy the condition
int countPairs(int N, int A, int B, vector<int>& P) {
    sort(P.begin(), P.end());  // Sort the vector of integers P

    int left = 0;
    int right = N - 1;
    int count = 0;

    while (left < right) {
        // If the sum of the smallest and largest elements is within the range [A, B],
        // all pairs in between are also within the range.
        if (A <= P[left] + P[right] && P[left] + P[right] <= B) {
            count += right - left;
            right--;
        } else {
            // If the sum is smaller than A, move the left pointer to the right.
            if (P[left] + P[right] < A) {
                left++;
            }
            // If the sum is larger than B, move the right pointer to the left.
            else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;
        int A, B;
        cin >> A >> B;
        vector<int> P(N);

        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        sort(P.begin(),P.end());

        // Count the pairs and print the result
        int result = countPairs(N, A, B, P);
        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}
