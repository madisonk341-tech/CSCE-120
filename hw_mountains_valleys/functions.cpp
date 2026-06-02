#include <iostream>
#include "functions.h"

using std::cout, std::endl;

bool is_valid_range(int a, int b) {
    return (10 <= a && a <= b && b < 10000);
}

char classify_mv_range_type(int number) {
    int digits[7];
    int count = 0;
    while (number > 0) {
        digits[count++] = number % 10;
        number /= 10;
    }

    bool is_mountain = true;
    bool is_valley = true;

    for (int i = count - 1; i > 0; i--) {
        int left = digits[i];
        int right = digits[i - 1];
        bool on_upslope = ((count - 1 - i) % 2 == 0);

        if (on_upslope) {
            if (left >= right) is_mountain = false;
            if (left <= right) is_valley = false;
        } else {
            if (left <= right) is_mountain = false;
            if (left >= right) is_valley = false;
        }
    }

    if (is_mountain) return 'M';
    if (is_valley) return 'V';
    return 'N';
}

void count_valid_mv_numbers(int a, int b) {
    int mountain_count = 0;
    int valley_count = 0;
    for (int i = a; i <= b; i++) {
        char type = classify_mv_range_type(i);
        if (type == 'M') mountain_count++;
        else if (type == 'V') valley_count++;
    }
    cout << "There are " << mountain_count << " mountain ranges and " 
         << valley_count << " valley ranges between " << a << " and " << b << "." << endl;
}