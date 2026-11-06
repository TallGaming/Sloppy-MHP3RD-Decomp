/*
 * FUN_088f20b4: register the two local handlers for one object.
 *
 * Main EBOOT, G2 high-address slice. The handler roles and argument type are hypotheses.
 */

void FUN_0887c3c4(void *handler, void *object);

void FUN_088f20b4(void *object)
{
    FUN_0887c3c4((void *)0x088f2714, object);
    FUN_0887c3c4((void *)0x088f2278, object);
}
