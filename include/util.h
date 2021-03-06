#ifndef _HW_UTIL_H_
#define _HW_UTIL_H_

#include <sys/resource.h>
#include "common.h"

#define MIN(a,b) ((a) < (b)) ? (a) : (b)
#define MAX(a,b) ((a) > (b)) ? (a) : (b)

#define IS_STDIN_REDIRECT (!isatty(STDIN_FILENO))
#define IS_STDOUT_REDIRECT (!isatty(STDOUT_FILENO))

bool set_fd_rlimit(rlim_t limit);
bool is_word_sp(char c);
char *trim(char *str);
void init_iconv();
void close_iconv();
void to_euc(char *in, size_t nin, char *out, size_t nout);
void to_sjis(char *in, size_t nin, char *out, size_t nout);
void to_utf8_from_euc(char *in, size_t nin, char *out, size_t nout);
void to_utf8_from_sjis(char *in, size_t nin, char *out, size_t nout);

#endif // _HW_UTIL_H_
