#include <common/panic.h>
#include <stdio.h>
#include <stdlib.h>

static void *_SaferMalloc(size_t memsize) {
  void *res = malloc(memsize);
  Panic(res != NULL, "Memory allocation failed.");
  return res;
}

static void _SaferFree(void *p) {
  if (p == NULL) {
    fprintf(stderr, "WARNING: Attempting to free NULL pointer.");
    return;
  }
  free(p);
}