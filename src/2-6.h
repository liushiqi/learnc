//
// Created by liu on 18-12-7.
//

#ifndef LEARNC_2_6_H
#define LEARNC_2_6_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p
 * set to the rightmost n bits of y, leaving the other bits unchanged.
 */
unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //LEARNC_2_6_H
