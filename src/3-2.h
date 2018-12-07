//
// Created by liu on 18-12-7.
//

#ifndef LEARNC_3_2_H
#define LEARNC_3_2_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Exercise 3-2. Write a function escape (s, t) that converts characters like newline and tab
 * into visible escape sequences like \n and \ t as it copies the string t to s. Use a switch.
 * Write a function for the other direction as well, converting escape sequences into the real characters.
 */
char *escape(char *s, char *t);

char *deescape(char *s, char *t);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //LEARNC_3_2_H
