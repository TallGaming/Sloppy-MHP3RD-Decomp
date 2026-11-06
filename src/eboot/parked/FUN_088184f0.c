/*
 * Hypothesis-only readable reconstruction of FUN_088184f0.
 *
 * The immediate predecessor has the shape of __cxa_free_exception, and GCC
 * 4.0.4 libsupc++ eh_alloc.cc places __cxa_allocate_exception beside it.
 * This draft records the proposed exception-allocation contract only.  It is
 * deliberately uncompiled: the target's C++ ABI headers, threading setting,
 * emergency-pool layout, and individual calls still need independent proof.
 */
#include <stddef.h>

struct cxa_eh_globals_hypothesis {
  unsigned int caught_exceptions;
  unsigned int uncaught_exceptions;
};

extern void *malloc(size_t);
extern void terminate(void);
extern struct cxa_eh_globals_hypothesis *__cxa_get_globals(void);
extern void *memset(void *, int, size_t);

void *FUN_088184f0_hypothesis(size_t thrown_size)
{
  /* Root's neighboring-function evidence proposes an 80-byte exception header. */
  const size_t exception_header_size = 80;
  void *header = malloc(thrown_size + exception_header_size);

  /*
   * The public GCC source has an emergency allocation pool on allocation
   * failure.  This target-specific draft intentionally leaves that branch
   * unimplemented until the pool and synchronization calls are bound.
   */
  if (header == NULL)
    terminate();

  __cxa_get_globals()->uncaught_exceptions += 1;
  memset(header, 0, exception_header_size);
  return (char *)header + exception_header_size;
}
