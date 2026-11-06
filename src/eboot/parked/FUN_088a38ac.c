/*
 * FUN_088a38ac: select a short value from one of three indexed table families.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: three table-family globals lack symbols and branch lowering differs.
 */
typedef unsigned char u8; typedef signed char s8; typedef short s16;
extern s16 *D_089e26dc[]; extern s16 *D_089e26f4[]; extern s16 *D_089e270c[];
s16 FUN_088a38ac(u8 family,s8 kind,s16 value,u8 a,u8 b)
{ if(value==0){ if(kind==1)value=D_089e26dc[family][a+b];
  else if(kind==0)value=D_089e26f4[family][a+b];
  else if(kind==3)value=D_089e270c[family][a+b]; } return value; }
