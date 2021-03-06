#ifndef _HW_COLOR_H_
#define _HW_COLOR_H_

#define ERROR_COLOR "\033[31m"
#define WARNING_COLOR "\033[33m"
#define FILENAME_COLOR "\033[32;1m"
#define LINE_NO_COLOR "\033[1m"
#define CONTEXT_AFTER_LINE_NO_COLOR "\033[35m"
#define CONTEXT_BEFORE_LINE_NO_COLOR "\033[33m"
#define OMIT_COLOR "\033[31m"
#define MATCH_WORD_COLOR "\033[31m"
#define RESET_COLOR "\033[39;49;0m"

#define FILENAME_COLOR_LEN 9
#define MATCH_WORD_COLOR_LEN 10
#define LINE_NO_COLOR_LEN 5
#define OMIT_COLOR_LEN 5
#define RESET_COLOR_LEN 14

#define MATCH_WORD_ESCAPE_LEN (RESET_COLOR_LEN + RESET_COLOR_LEN)
#define LINE_NO_ESCAPE_LEN (LINE_NO_COLOR_LEN + RESET_COLOR_LEN)
#define OMIT_ESCAPE_LEN (OMIT_COLOR_LEN + RESET_COLOR_LEN)

#endif // _HW_COLOR_H_
