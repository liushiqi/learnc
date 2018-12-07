//
// Created by liu on 18-12-7.
//

#ifndef LEARNC_3_5_H
#define LEARNC_3_5_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Exercise 3-5. Write the function itob (n, s ,b) that converts the integer n into a base b character
 * representation in the string s. In particular, itob ( n, s, 16) formats n as a hexadecimal integer in s.
 */
int itob(int n, char s[], int b);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //LEARNC_3_5_H
