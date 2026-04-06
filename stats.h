#ifndef __STATS_H__
#define __STATS_H__

#include <stdio.h>

/* Function declarations */

void print_statistics(unsigned char *array, int length);
void print_array(unsigned char *array, int length);

unsigned char find_median(unsigned char *array, int length);
unsigned char find_mean(unsigned char *array, int length);
unsigned char find_maximum(unsigned char *array, int length);
unsigned char find_minimum(unsigned char *array, int length);

void sort_array(unsigned char *array, int length);

#endif
