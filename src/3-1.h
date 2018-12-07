//
// Created by liu on 18-12-7.
//

#ifndef LEARNC_3_1_H
#define LEARNC_3_1_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice
 * (at the price of more tests outside). Write a version with only one test inside the loop
 * and measure the difference in run-time.
 */
int binsearch(int x, int v[], int n);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //LEARNC_3_1_H
