#ifndef TLPI_HDR_H
#define TLPI_HDR_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

#include "get_num.h"

#include "error_functions.h"

#ifdef TRUE
#undef TRUE
#endif

#ifdef FALSE
#undef FALSE
#endif

typedef enum {TRUE, FLASE} Boolean;

#define max(a,b) ((m) > (n) ? (m) : (n)) 
#define min(a,b) ((m) < (n) ? (m) : (n))

#if defined(__sgi)
typedef int socklen_t;
#endif

#if defined(__sun)
#include <sys/file.h>
#endif

#if defined(MAP_ANON) && ! defined(MAP_ANONYMOUS)
#define MAP_ANONYMOUS MAP_ANON
