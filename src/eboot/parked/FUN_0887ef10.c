/* Purpose: test whether combined stored and active counts meet a requirement. */
extern int FUN_0887d7d8(void*,short);extern int FUN_0887ea9c(void*,unsigned int);
unsigned int FUN_0887ef10(void*context,short id,int required){if(id!=0&&required<=FUN_0887d7d8(context,id)+FUN_0887ea9c(context,id))return 1;return 0;}
