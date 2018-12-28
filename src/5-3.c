//
// Created by liu on 18-12-28.
//

#include <string.h>
#include "5-3.h"

void my_strcat_helper(char s[], char t[]) {
    if (*t == 0) {
        *s = 0;
    } else {
        *s = *t;
        my_strcat_helper(s + 1, t + 1);
    }
}

void my_strcat(char s[], char t[]) {
    if (*s == 0) {
        my_strcat_helper(s, t);
    } else {
        my_strcat(s + 1, t);
    }
}
