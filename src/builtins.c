// nocash: a utility to skip the $ character when copying shell commands.
// Copyright (C) 2021 Mabi19

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "builtins.h"

const char* KNOWN_BUILTINS[] = {
    ":",
    ".",
    "alias",
    "bg",
    "break",
    "cd",
    "fg",
    "getopts",
    "hash",
    "jobs",
    "read",
    "readonly",
    "return",
    "set",
    "shift",
    "times",
    "trap",
    "true",
    "type",
    "ulimit",
    "umask",
    "unalias",
    "unset",
    "wait",
    NULL
};

bool is_shell_builtin(const char* command)
{
    for (int i = 0; KNOWN_BUILTINS[i] != NULL; i++) {
        if (strcmp(command, KNOWN_BUILTINS[i]) == 0) return true;
    }
    return false;
}