#include <iostream>
#include <vector>
#include <algorithm>

// Simple program demonstrating STL and vectors
int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    std::cout << "Original numbers: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;

    // Sort numbers using STL
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted numbers: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;

    // Find max element
    int max_val = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "Maximum number: " << max_val << std::endl;

    return 0;
}
