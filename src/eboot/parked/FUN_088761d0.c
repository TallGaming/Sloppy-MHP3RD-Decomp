/* Purpose: convert three packed scalar values and append a zero component. */
extern unsigned int FUN_088761b0(unsigned int value);
void FUN_088761d0(unsigned int*out,const unsigned int*input){out[0]=FUN_088761b0(input[0]);out[1]=FUN_088761b0(input[1]);out[2]=FUN_088761b0(input[2]);out[3]=0;}
