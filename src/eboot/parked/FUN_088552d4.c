/* Purpose: partial evidence view for FUN_088552d4; not a complete candidate. */
/* Derived locally from target and caller analysis; unresolved types/callee ownership remain. */
// Decompiler output for 088552d4 (184 bytes). Reference material only, not reconstruction source.
// Prototype: int FUN_088552d4(int param_1,undefined1 param_2);


int FUN_088552d4(int param_1,undefined1 param_2)

{
  uint uVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (ushort *)(param_1 + 0x90);
  while( true ) {
    cVar3 = (char)iVar4;
    iVar4 = iVar4 + 1;
    if (((*puVar2 & 2) != 0) && (uVar1 = FUN_088552b4(param_2), puVar2[1] == uVar1)) break;
    puVar2 = puVar2 + 6;
    if (iVar4 == 4) {
      return -1;
    }
  }
  return (int)cVar3;
}

