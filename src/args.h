// nocash: a utility to skip the $ character when copying shell commands.
// Copyright (C) 2021 Mabi19

#ifndef NOCASH_ARGS_H
#define NOCASH_ARGS_H

// Create the new argv array.
// This should be `free()`'d, but since
// it's passed to exec we just
// let it get cleaned up by the OS.
char** build_argv(int argc, char* argv[]);

#endif
