/* Load global sizing fields. PARKED: initial plain-C attempt. */
void FUN_088f2884(char*p){int o=*(int*)0x08a33e70,a=*(int*)(0x08a33e78+o),b=*(int*)(0x08a33e7c+o);*(int*)(p+0x28)=a;*(int*)(p+0x2c)=a;*(int*)(p+0x30)=b;p[0x25]=p[0x26]=0;p[0x24]=a/b+(a%b!=0);*(int*)(p+0x34)=*(int*)0x08a33ef8;*(int*)(p+0x38)=*(int*)0x08a33ef8;}
