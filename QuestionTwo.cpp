#include <vector>
#include <algorithm>

std::vector<int> circular_shift(const std::vector<int>& A, int k) {
    int n = A.size();
    std::vector<int> shifted_array(A);
    k = k % n;
    std::reverse(shifted_array.begin(), shifted_array.end());
    std::reverse(shifted_array.begin(), shifted_array.begin() + k);
    std::reverse(shifted_array.begin() + k, shifted_array.end());
    return shifted_array;
}

