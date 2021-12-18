// nocash: a utility to skip the $ character when copying shell commands.
// Copyright (C) 2021 Mabi19

#include <stdlib.h>
#include "args.h"

char** build_argv(int argc, char** argv)
{
    // create a new array of the appropriate size (add a null terminator, but remove the $ executable)
    char** args = calloc(argc, sizeof(char*));
    for (int i = 1; i < argc; i++) {
        args[i - 1] = argv[i];
    }
    args[argc - 1] = NULL;
    return args;
}
