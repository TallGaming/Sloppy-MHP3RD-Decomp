/*
 * Partial interface record for the hypothesized C++ ABI
 * __cxa_call_unexpected entry point.  Public GCC 4.0.4 accepts one pointer
 * to an unwind exception object, begins a catch, invokes the saved unexpected
 * handler, and only then examines cached LSDA/type data.  The target has not
 * been bound to that object layout or helper ABI, so this remains an explicit
 * no-op placeholder rather than a false whole-function translation.
 */
void FUN_088198c0(void *exception_object)
{
    (void)exception_object;
    /*
     * Required before implementing behavior: the target's unwind-header
     * adjustment; unexpected and terminate handlers; cached LSDA/switch/base
     * fields; exception-specification parser; and catch cleanup boundary.
     */
}
