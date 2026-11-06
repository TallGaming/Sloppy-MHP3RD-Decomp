/* Purpose: compare a bounded input string with a node name. */
unsigned int FUN_08880858(unsigned char*object,const char*text,int limit){int a=0,b=0;if(limit>0){while(object[0x270+a]&&++a!=limit);while(text[b]&&++b!=limit);if(a!=b)return 0;while(b>0){b--;if(object[0x270+b]!=(unsigned char)text[b])return 0;}}return 1;}
