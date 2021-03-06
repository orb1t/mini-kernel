#ifndef _errors_c
#define _errors_c
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void die(const char *message)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}
#endif