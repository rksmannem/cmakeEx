#pragma once

#ifndef __MD_SCS__LOG_H__
#define __MD_SCS__LOG_H__

#ifdef __cplusplus
#include <cstdio>
#include <cstdlib>
#else
#include <stdio.h>
#include <stdlib.h>
#endif

#include <iostream>

#define LOG_F(log_color, log_type, format, ...) \
printf("%s[%s : %s] ", log_color, LOG_TAG, log_type);\
printf("[%s:%d] %s ", __FILE__, __LINE__, __PRETTY_FUNCTION__);\
printf(format, ##__VA_ARGS__);\
printf("\033[0m\n")


#define LOG_DEBUG(format, ...) LOG_F("\x1b[36m", "LOG_DEBUG", format, ##__VA_ARGS__)
#define LOG_INFO(format, ...)  LOG_F("\x1b[36m", "LOG_INFO",  format, ##__VA_ARGS__)
#define LOG_WARN(format, ...)  LOG_F("\x1b[33m", "LOG_WARN",  format, ##__VA_ARGS__)
#define LOG_ERROR(format, ...) LOG_F("\x1b[31m", "LOG_ERROR", format, ##__VA_ARGS__)
#define LOG_FATAL(format, ...) LOG_F("\x1b[35m", "LOG_FATAL", format, ##__VA_ARGS__)

#endif