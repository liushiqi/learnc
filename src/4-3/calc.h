#ifndef LEARNC_CALC_H
#define LEARNC_CALC_H

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

enum ErrorType {
  SUCC = 0, ERNUM = 1, EROP = 2, EUNK = 4, EDIV0 = 8, EEOF = 16
};

int push(double value);

double pop(void);

int is_empty(void);

void empty(void);

enum ErrorType getop(void);

int getch(void);

void ungetch(void);

double get_double(void);

void clear_buffer(void);

int error_handler(enum ErrorType error);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //LEARNC_CALC_H
