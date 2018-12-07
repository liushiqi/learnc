//
// Created by liu on 18-12-7.
//

#ifndef LEARNC_2_7_H
#define LEARNC_2_7_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
 * position p inverted (i.e., I changed into 0 and vice versa), leaving the others unchanged.
 */
unsigned invert(unsigned x, unsigned p, unsigned n);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //LEARNC_2_7_H
