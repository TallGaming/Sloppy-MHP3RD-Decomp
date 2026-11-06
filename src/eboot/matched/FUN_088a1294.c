/*
 * FUN_088a1294: do nothing and return.
 *
 * Main EBOOT, address 0x088A1294, 8 bytes: jr $ra; nop.
 * 1 direct caller(s) in the Ghidra inventory.
 *
 * Hypothesis: the name, the parameters and the return type are unknown.
 * The callers may pass arguments; an empty body ignores them and gives the
 * same code. A stub or a disabled debug hook is likely.
 */

void FUN_088a1294(void)
{
}
