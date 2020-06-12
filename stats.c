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
 * @brief <Stadistics for an array>
 *
 * This program sorted and array and also find the maximun, minimun, mean, and median
 *
 * @author <Alexander Arancibia>
 * @date  <09/06/2020>
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() {
	int median;
	int mean;
	int maximun;
	int minimun;
	
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
   printf("Array:\n");
    print_array(test,SIZE);
   printf("\nSorted Array :\n");
   sort_array(test,SIZE);
   print_array(test,SIZE);
 

   median = find_median(test,SIZE);
   mean = find_mean(test,SIZE);
   minimun = find_minimun(test,SIZE);
   maximun = find_maximun(test,SIZE);
   print_stadistics(minimun,maximun,mean,median);
}
void print_array(unsigned char test[],int count){
	int loop;
	for(loop = 0; loop < count; loop++)
      printf("%d ", test[loop]);    
}
void print_stadistics(int minimun,int maximun, float mean, float median){
	
    printf("\nStadistics: Maximun : %i, Minimun : %i, Mean : %f, Median : %f  ",maximun, minimun, mean, median );    
}
void sort_array(unsigned char test[], int count){
	int i,o=1;
  int temp;
  
  while(o>0){
  	o=0;
  	
  	for(i = 0; i < count-1; i++){
  		if (test[i] > test[i+1]){
	 	 	temp = test[i];
  			test[i] = test[i+1];
    		test[i+1] = temp;
    		o = 1 ;
		} 
     } 
   }
 
}



int find_median(unsigned char test[], int count){
  if (count%2 ==0){
  	return ((float)(test[count/2-1])/2+(float)test[count/2]/2);}
  else{
  	return test[count/2];
  }
}



int find_maximun(unsigned char test[], int count){
	int i,max;
	max=test[0];
	for (i = 0; i<count; i++){
 	if (max <test[i]){
 		max = test[i];
	 }
	}
	return max;
}
  	 
int find_minimun(unsigned char test[], int count){
	int i,min;
	min=test[0];
	for (i = 0; i<count; i++){
 	if (min >test[i]){
 		min = test[i];
	 }
	}
	return min;
}
  	 

int find_mean(unsigned char test[], int count){
  float mean = 0;
  int i=0;
   for(i =0;i<count;i++){
  	mean +=test[i];
  }
  return mean/count;
}
  	 


