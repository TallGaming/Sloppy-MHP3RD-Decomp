/*
 * Purpose hypothesis: ABI-preserving tail-forwarder to FUN_08804444.
 * The wrapper's argument and return types remain unknown; its body forwards
 * the three incoming word arguments unchanged.
 */
int FUN_08804444(int operation, void *argument, void *context);

int FUN_0880ef14(int operation, void *argument, void *context)
{
    return FUN_08804444(operation, argument, context);
}
