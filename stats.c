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
 * @file stats.h
 * @brief Header File
 
 *
 * @author Alexander Arancibia
 * @date 09/06/2020
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Find the median of an array
 * This funtion takes an unidimensional array and find the 
 * median
 * @param test the array itself
 * @param count the size of the array
 *
 * @return The median of the array
 */
float find_median(unsigned char test[], int count);

/**
 * @brief Find the mean of an array
 * This funtion takes an unidimensional array and find the 
 * mean
 * @param test the array itself
 * @param count the size of the array
 *
 * @return The mean of the array
 */

float find_mean(unsigned char test[], int count);

/**
 * @brief Find the maximun of an array
 * This funtion takes an unidimensional array and find the 
 * maximun
 * @param test the array itself
 * @param count the size of the array
 *
 * @return The maximun of the array
 */

int find_maximun(unsigned char test[], int count);

/**
 * @brief Find the minimun of an array
 * This funtion takes an unidimensional array and find the 
 * minimun
 * @param test the array itself
 * @param count the size of the array
 *
 * @return The minimun of the array
 */ 

int find_minimun(unsigned char test[], int count);

/**
 * @brief Print all the elements of the array
 * This funtion takes an unidimensional array and find the 
 * median
 * @param test the array itself
 * @param count the size of the array
 *
 * @return 
 */


void print_array(unsigned char test[], int count);

/**
 * @brief Print all the stadistic of the array
 * Print the minimun,maximun,mean and median
 * @param minimun minimun of the arrays previously finded
 * @param maximun maximun of the arrays previously finded
 * @param mean mean of the arrays previously finded
 * @param median median of the arrays previously finded
 *
 * @return 
 */ 


void print_stadistics(int minimun,int maximun, float mean, float median);

/**
 * @brief Sort an array
 
 * @param test the array itself
 * @param count the size of the array
 *
 * @return Sorted array
 */


void sort_array(unsigned char test[], int count);


#endif /* __STATS_H__ */
