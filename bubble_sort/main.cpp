// Author: Silver Dhuka
// Date: 2021-05-02
// Brief: This is the program to perform bubble sort on the supplied vector.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Bubble sorting is the very commonly and widely used sorting technique in C++ programming. It is also known as the exchange sort.
// It repeatedly visits the elements of an array and compares the two adjacent elements.
// It visits the array elements and compare the adjacent elements if they are not in the right order then it puts them into the right order.
//  It continues to swap the elements until no more swaps are required, which means the given array is sorted.
void do_bubble_sort (vector<int> &series) {
    // Get the size of a vector named series
    int size = series.size();

    // It works in the following steps described below:
    // 1. It will compare two adjacent elements, if second element is smaller than the first then it will swap them, if we wanted to sort an array in an ascending order.
    // 2. It will continue the above process of comparing pares, from the first pare to the last pair, at its first iteration the greatest element is placed at the last index of an array.
    // 3. Then it will again repeat the above steps for all the elements by excluding the greatest one.
    // 4. It will continue to repeat until the array becomes sorted.
    while (size >= 1) {
        for (int i = 0; i < size-1; i += 1) {
            if (series[i] > series[i+1]) {
                int temp {0};
                temp = series[i];
                series[i] = series[i+1];
                series[i+1] = temp;
            }
        }
        size--;
    }
}

// The main function
int main () {
    try {
        int length = 0;
        vector<int> series;

        // Get the number from a user to generate a fibonacci series of that long
        cout << "How big a vector named Series ? : ";
        cin >> length;

        if (length <= 0) {
            throw "Quit.";
        }

        // Enter value into the vector named series
        for (int i = 1; i <= length; i += 1) {
            int num = 0;

            cout << "Enter " << i << " Number: ";
            cin >> num;
            series.push_back(num);
        }

        // Define a vector named series and perform the bubble sort algorithm
        do_bubble_sort(series);

        // Display the sorted vector
        cout << endl << "Sorted Numbers: " << endl;
        for (auto it = series.begin(); it < series.end(); it += 1)
            cout << *it << " ";
        
        cout << endl;

        // Clear the vector named series
        series.clear();
    } catch (...) {};

    return 0;
}