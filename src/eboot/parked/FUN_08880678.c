/* Purpose: return the first enabled scalar from a packed record list. */
float FUN_08880678(void*unused,int*record){unsigned char*item=(unsigned char*)(record+4);int i;(void)unused;if(record[0]<1)return 0.0f;for(i=0;*(short*)item==0;i++){item+=*(unsigned short*)(item+2);if(i==record[0]-1)return 0.0f;}return(float)*(short*)(item+*(unsigned short*)(item+6)*8+6);}
