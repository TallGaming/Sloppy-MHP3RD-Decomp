/* Purpose: require all five derived bits for one identifier. */
extern unsigned int FUN_0886cb60(void*,int,int);unsigned int FUN_0886cbcc(void*object,int id){int i;for(i=0;i<5;i++)if(!FUN_0886cb60(object,id,i))return 0;return 1;}
