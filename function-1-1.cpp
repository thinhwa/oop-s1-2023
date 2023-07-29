
int array_sum(int array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i]; // Add each element to the sum
    }

    return sum;
}

