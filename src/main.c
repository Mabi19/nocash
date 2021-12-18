// nocash: a utility to skip the $ character when copying shell commands.
// Copyright (C) 2021 Mabi19

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>
#include <unistd.h>
#include "args.h"
#include "builtins.h"

int main(int argc, char* argv[])
{
    if (argc == 1) {
        // this is probably a mistake
        puts("[nocash] No program specified; exiting");
        return 0;
    }

    // check if we have appropriate privileges
    bool should_builtin_error = is_shell_builtin(argv[1]);
    if (should_builtin_error) {
        printf("[nocash] `%s` is a shell builtin. Remove the `$` and try again.\n", argv[1]);
        return 0;
    }

    char** new_args = build_argv(argc, argv);
    // we don't need to fork here
    execvp(argv[1], new_args);
    // if we're here, an error has occurred
    perror("[nocash] error");
}