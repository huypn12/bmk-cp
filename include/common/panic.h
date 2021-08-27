#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

static void Panic(int cond, char *mesg) {
  if (!cond) {
    fprintf(stderr, "PANIC: %s", mesg);
    exit(EXIT_FAILURE);
  }
}