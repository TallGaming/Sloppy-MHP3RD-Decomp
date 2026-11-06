/* Purpose: find a matching record with a nonzero terminal short. */
extern void*FUN_08885024(void);extern int FUN_0880bff4(const void*,const void*,unsigned int);
void*FUN_088853f0(void*unused,unsigned char*record){(void)unused;if(record&&FUN_0880bff4(record+0x131,FUN_08885024(),6)==0&&*(short*)(record+0x138)!=0)return record+0x138;return 0;}
