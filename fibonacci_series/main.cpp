// Author Silver Dhuka
// Date 2021-05-02
// Brief This is the program to generate a fibonacci series by using a generator function.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// The generator function which generates a fibonacci series
int generate_fibonacci_series () {
    static int first = 0;
    static int second = 1;
    static int result = 0;
    static bool flag = false;

    // Check if result is zero
    if (result == 0) {
        result = first + second;
        return 0;
    }

    // Check if result is one
    if (result == 1) {
        // Check if flag is true to calculate a next number for the fibonacci series
        if (flag == true) {
            result = first + second;
            first = second;
            second = result;
        }
        flag = true;
        return result;
    }

    // Calculate a next number for the fibonacci series
    result = first + second;
    first = second;
    second = result;

    // Return the next number for the fibonacci series
    return result;
}

// The main function
int main () {
    // Get the number from a user to generate a fibonacci series of that long
    int num = 0;
    cout << "How big fibonacci series which you want to print? : ";
    cin >> num;

    // Define a vector named series and generate a fibonacci series
    vector<int> series(num);
    generate(series.begin(), series.end(), generate_fibonacci_series);

    // Display the generated fibonacci series
    for (auto it = series.begin(); it < series.end(); it += 1) {
        cout << *it << " ";
    }

    return 0;
}