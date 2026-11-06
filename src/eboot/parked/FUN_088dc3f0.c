/* Interpolate two signed shorts and convert the wrapped result to a float. */
extern float D_089685dc;extern volatile float D_089685e0;
float FUN_088dc3f0(float phase,int unused,char*base,int index){int a,b,value;phase*=D_089685dc;base+=index*2;a=*(short*)(base+0x240);b=*(short*)(base+0x242);value=(a+(b-a)*(int)phase)&0xffff;return (float)value*D_089685e0;}
