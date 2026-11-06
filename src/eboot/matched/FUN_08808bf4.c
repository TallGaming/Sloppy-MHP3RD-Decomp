/*
 * FUN_08808bf4: return 0.
 *
 * Main EBOOT, address 0x08808BF4, 12 bytes: move $v0, $zero; jr $ra; nop.
 * 4 direct caller(s) in the Ghidra inventory.
 *
 * Hypothesis: the name, the parameters and the return type are unknown.
 * The observed fact is that $v0 is 0 on return. The callers may pass
 * arguments; the body ignores them and gives the same code.
 */

int FUN_08808bf4(void)
{
    return 0;
}
