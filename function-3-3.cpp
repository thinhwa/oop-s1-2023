#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Use an unordered map to store the frequencies of each element in the array
    std::unordered_map<int, int> frequencyMap;

    // Calculate the frequencies of elements in the array
    for (int i = 0; i < n; i++) {
        frequencyMap[array[i]]++;
    }

    // Calculate the weighted sum
    double weightedSum = 0.0;
    for (const auto& entry : frequencyMap) {
        int element = entry.first;
        int frequency = entry.second;
        weightedSum += static_cast<double>(element * frequency) / n;
    }

    return weightedSum;
}
