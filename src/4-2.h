//
// Created by liu on 18-12-7.
//

#ifndef LEARNC_4_2_H
#define LEARNC_4_2_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Exercise 4-2. Extend atof to handle scientific notation of the form
 * @code 123.45e-6 @endcode
 * where a floating-point number may be followed by e or E and an optionally
 * signed exponent.
 */
double atof_my(char str[]);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //LEARNC_4_2_H
