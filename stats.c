#include "stats.h"

/* Print the array */
void print_array(unsigned char *array, int length) {
    printf("Array:\n");
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/* Sort array in descending order */
void sort_array(unsigned char *array, int length) {
    for(int i = 0; i < length - 1; i++) {
        for(int j = i + 1; j < length; j++) {
            if(array[i] < array[j]) {
                unsigned char temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

/* Find maximum */
unsigned char find_maximum(unsigned char *array, int length) {
    unsigned char max = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/* Find minimum */
unsigned char find_minimum(unsigned char *array, int length) {
    unsigned char min = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/* Find mean (rounded down) */
unsigned char find_mean(unsigned char *array, int length) {
    unsigned int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (unsigned char)(sum / length);
}

/* Find median (array must be sorted) */
unsigned char find_median(unsigned char *array, int length) {
    if(length % 2 == 0) {
        return (array[length/2] + array[(length/2) - 1]) / 2;
    } else {
        return array[length/2];
    }
}

/* Print statistics */
void print_statistics(unsigned char *array, int length) {
    printf("\nStatistics:\n");
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

/* Main function */
int main() {

    unsigned char test[] = {
        34, 201, 190, 154, 8, 194, 2, 6, 114, 88,
        45, 76, 123, 87, 25, 23, 200, 122, 150, 90,
        92, 87, 177, 244, 201, 6, 12, 60, 8, 2,
        5, 67, 7, 87, 250, 230, 99, 3, 100, 90
    };

    int length = sizeof(test) / sizeof(test[0]);

    printf("Original Array:\n");
    print_array(test, length);

    sort_array(test, length);

    printf("\nSorted Array (Descending):\n");
    print_array(test, length);

    print_statistics(test, length);

    return 0;
}
