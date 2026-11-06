/* Purpose: set one global flag bit and notify when its state first changes. */
extern void*D_08aace80;extern int FUN_0886dd14(void*,int);extern int FUN_08880168(void*);extern void FUN_0886f01c(void*,int);
void FUN_08880194(void*context,unsigned char*entry){unsigned char bit=entry[6],*flags=(unsigned char*)D_08aace80+0x85c+0x489c+(bit>>3),old=*flags;*flags=old|(1u<<(bit&7));if(*flags!=old&&FUN_0886dd14(D_08aace80,6)==0&&FUN_08880168(context)!=0)FUN_0886f01c(D_08aace80,6);}
