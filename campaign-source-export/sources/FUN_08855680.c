/* Purpose: partial evidence view for FUN_08855680; not a complete candidate. */
/* Derived locally from target and caller analysis; unresolved types/callee ownership remain. */
// Decompiler output for 08855680 (160 bytes). Reference material only, not reconstruction source.
// Prototype: void FUN_08855680(int param_1);


void FUN_08855680(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0xc;
  puVar2 = (ushort *)(param_1 + 0x90);
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 6;
    if ((uVar1 & 3) != 0) {
      FUN_08855564(param_1,iVar3);
      FUN_08855564(param_1,iVar3 + 0x27);
      FUN_08855564(param_1,iVar3 + 4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}

