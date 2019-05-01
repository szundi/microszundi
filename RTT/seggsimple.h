#ifndef SEGGSIMPLE_H
#define SEGGSIMPLE_H

#include "SEGGER_RTT.h"

#define log_strdup(...) __VA_ARGS__

#define LOG_PRINT(str, ...) { SEGGER_RTT_printf(0, str "\r\n", ##__VA_ARGS__); SEGGER_RTT_printf(0, "\r\n"); }
#define LOG_DBG(str, ...) LOG_PRINT(RTT_CTRL_TEXT_CYAN          str RTT_CTRL_RESET, ##__VA_ARGS__)
#define LOG_INF(str, ...) LOG_PRINT(RTT_CTRL_TEXT_BRIGHT_WHITE  str RTT_CTRL_RESET, ##__VA_ARGS__)
#define LOG_WRN(str, ...) LOG_PRINT(RTT_CTRL_TEXT_BRIGHT_YELLOW str RTT_CTRL_RESET, ##__VA_ARGS__)
#define LOG_ERR(str, ...) LOG_PRINT(RTT_CTRL_TEXT_BRIGHT_RED    str RTT_CTRL_RESET, ##__VA_ARGS__)

#endif
