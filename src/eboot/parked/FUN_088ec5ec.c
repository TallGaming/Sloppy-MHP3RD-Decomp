/*
 * FUN_088ec5ec: initialize the global command system and store its owner.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: absolute-address setup remains shorter and broadly different.
 */
void FUN_088ec4bc(void *);
void FUN_088ec504(void *);
void FUN_0880c468(void *, int, int);
void FUN_088ec5b0(int);
void FUN_088658c4(void);
void FUN_088ec518(void *);

void FUN_088ec5ec(void *owner)
{
    FUN_088ec4bc((void *)0x09be9f2c);
    FUN_088ec4bc((void *)0x09be9f24);
    FUN_088ec504((void *)0x09be9f24);
    FUN_0880c468((void *)0x09be9f34, 0, 0x840);
    *(int *)0x09be9f28 = 0;
    FUN_088ec5b0(0x7f);
    FUN_088658c4();
    FUN_088ec518((void *)0x09be9f24);
    *(void **)0x09be9f30 = owner;
}
