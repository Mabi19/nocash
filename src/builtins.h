// nocash: a utility to skip the $ character when copying shell commands.
// Copyright (C) 2021 Mabi19

#ifndef NOCASH_BUILTINS_H
#define NOCASH_BUILTINS_H

#include <stdbool.h>

bool is_shell_builtin(const char* command);

#endif