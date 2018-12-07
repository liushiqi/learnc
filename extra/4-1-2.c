/* includes getchar, printf functions. */
#include <stdio.h>

/* maximum input line length */
#define MAX_LINE 1000

/*
 * These are pre declaration of functions, the definition are at the last of the file.
 */

/**
 * Get a line from stdin.
 * @param line the char array to put the gotten line.
 * @param max the maximun length of the line.
 * @return the length of the gotten line.
 */
int get_line(char *line, int max);

/**
 * search the given pattern in the given string, return -1 if pattern not found.
 * @param source the string to search in.
 * @param search_for the pattern to search.
 * @return index if found, -1 if not found.
 */
int strindex(char source[], char search_for[]);

/**
 * pattern to search for in the input string.
 */
char pattern[] = "ould";

/**
 * find all lines matching pattern given below.
 * The form of this main func is not suggested now.
 * suggested patterns are int main(void) or int main(int argc, char *argv[])
 * this form is popular 30 years ago, since the poor of memory and disk to limit file size.
 */
main() {
  /* the char array to put the read string. */
  char line[MAXLINE];
  /* the sum of lines that found the pattern */
  int found = 0;
  /* every time read a line from stdin. */
  while (get_line(line, MAXLINE) > 0)
    /* if the pattern was found in the input string. */
    if (strindex(line, pattern) >= 0) {
      /* output the inputted string. */
      printf("%s", line);
      /* add one to found. */
      found++;
    }
  /**
   * return variable found to the os.
   * It is useful, since we could test whether the return code is 0 to found out whether the pattern exists.
   * for example,
   * @code
   * ./this < file
   * if [[ $? -eq 0]]
   *   echo 'not found'
   * else
   *   echo 'found'
   * end
   * @endcode
   * suppose found pattern in the file, it will print found.
   */
  return found;
}

/**
 * Get a line from stdin.
 * @param line the char array to put the gotten line.
 * @param max the maximun length of the line.
 * @return the length of the gotten line.
 */
int get_line(char s[], int lim) {
  /* c: the char get fron stdio *
   * i: the length gotten.      */
  int c, i;
  /* is initial value is 0.
   * but it is better to write int c, i = 0;, isn't it?
   */
  i = 0;
  /* every time get a character from stdin. */
  while (--lim > 0              // detect whether reached the max limit.
      && (c = getchar()) != EOF // get a character and test whether it is eof.
      && c != '\n')             // and detect whether it is a new line.
    /* assign it to the next bit of string s. */
    s[i++] = c;
  /* if read until a new line. */
  if (c == '\n')
    /* let the last char of s to be the new line. */
    s[i++] = c;
  /* let the string have an end. */
  s[i] = '\0';
  /* return the length of the gotten string. */
  return i;
}

/**
 * search the given pattern in the given string, return -1 if pattern not found. This algorithm is O(mn), KMP is better.
 * @param source the string to search in.
 * @param search_for the pattern to search.
 * @return index if found, -1 if not found.
 */
int strindex(char s[], char t[]) {
  /* i: the pos in s that is searched.      *
   * j: the pos this search to search from. *
   * k: the pos compared in string t.       */
  int i, j, k;
  /* search from the start of string. */
  for (i = 0; s[i] != '\0'; i++) {
    /* find the length match, which is s[i:j] and t[0:k] */
    for (j = i, k = 0;                 // search from s[i] and t[0]
         t[k] != '\0' && s[j] == t[k]; // if we didn't search to the end and s[j] is the same as t[k]
         j++, k++)                     // add one to j and k.
      ; // EMPTY BLOCK the ; is put on a new line to indicate a empty block {} maybe better.
    /* if t[0:k] is the same as t. */
    if (k > 0 && t[k] == '\0')
      /* we found it and return the pos. */
      return i;
  }
  /* otherwise, we didn't found it and return -1. */
  return -1;
}