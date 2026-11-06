/*
 * FUN_088f9fb4: do nothing and return.
 *
 * Main EBOOT, address 0x088F9FB4, 8 bytes: jr $ra; nop.
 * 8 direct caller(s) in the Ghidra inventory.
 *
 * Hypothesis: the name, the parameters and the return type are unknown.
 * The callers may pass arguments; an empty body ignores them and gives the
 * same code. A stub or a disabled debug hook is likely.
 */

void FUN_088f9fb4(void)
{
}
