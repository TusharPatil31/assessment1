
 /******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Embedded Software HW1 >
 *
 * This is the 1st HW of the Coursera Course Embedded Software.
 
                main() - The main entry point for your program
                print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
                print_array() - Given an array of data and a length, prints the array to the screen             [DONE]
                find_median() - Given an array of data and a length, returns the median value                   [DONE]
                find_mean() - Given an array of data and a length, returns the mean                             [DONE]
                find_maximum() - Given an array of data and a length, returns the maximum                       [DONE]
                find_minimum() - Given an array of data and a length, returns the minimum                       [DONE]
                sort_array() - Given an array of data and a length, sorts the array from largest to smallest.   [DONE]
                        (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @author <Tushar Patil>
 * @date <11/01/2021>
 *
 */

#include <stdio.h>
// #include "stats.h"
void sort_array();
void print_statistics(int maximum, int minimum, int median, float mean);
int find_maximum();
int find_minimum();
int find_median();
float find_mean();


void swap(unsigned char *p, unsigned char *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */
  int maximum = 0, minimum = 0, median = 0;
  float mean = 0;
  printf("Embedded Software HW1 \n");
  printf("Unsorted array\n");
  for(int i =0; i<SIZE; i++)
  {
    printf("%d\t", test[i]);
  }
  printf("\n");
  sort_array(test);
  printf("Sorted array\n");
   for(int i =0; i<SIZE; i++)
  {
    printf("%d\t", test[i]);
  }
  printf("\n");
  maximum= find_maximum(test);
  minimum= find_minimum(test);
  median = find_median(test);
  mean = find_mean(test);
  /* Statistics and Printing Functions Go Here */
  print_statistics(maximum, minimum, median, mean);
}

/* Add other Implementation File Code Here */
void sort_array(unsigned char test[])
{
  unsigned char temp = 0;
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      if (test[i] > test[j])
      {
        temp = test[i];
        test[i] = test[j];
        test[j] = temp;
      }
    }
  }
}

void print_statistics(int maximum, int minimum, int median, float mean){
  printf("Maximum = %d,\t Minimum = %d,\t Median = %d,\t Mean = %.4f\n", maximum, minimum, median, mean);
}

int find_maximum(unsigned char test[])
{
  int max = test[0];
  for (int i = 1; i < SIZE; i++)
  {
    if (test[i] > max)
      max = test[i];
  }
  return max;
}

int find_minimum(unsigned char test[])
{
  int min = test[0];
  for (int i = 1; i < SIZE; i++)
  {
    if (test[i] < min)
      min = test[i];
  }
  return min;
}

int find_median(unsigned char test[])
{
  for (int i = 0; i < SIZE - 1; i++)
  {
    for (int j = 0; j < SIZE - i - 1; j++)
    {
      if (test[j] > test[j + 1])
      {
        swap(&test[j], &test[j + 1]);
      }
    }
  }
   int n = (SIZE + 1) / 2 - 1;
  return test[n];
}

float find_mean(unsigned char test[])
{
  float mean;
  int sum = 0;
  for (int i = 0; i < SIZE; i++)
  {
    sum += test[i];
  }
  mean = sum / (float)SIZE;
  return mean;
}
