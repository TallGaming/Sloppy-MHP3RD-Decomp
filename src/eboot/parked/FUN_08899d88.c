/* Dispatch a status RPC command or report an unknown command. */
extern char D_09bc1ed0,D_089671cc[],D_089671d4[],D_08967204[];int FUN_0889bd9c(void*);void FUN_0889bf7c(void*,void*);void FUN_0880d4b4(char*,...);
void FUN_08899d88(int unused,int*cmd,int*out){int value;if(*cmd==0x20000001){value=FUN_0889bd9c(out);*out=value;return;}if(*cmd==0x20000002){FUN_0889bf7c(out,cmd+2);*out=0;return;}if(D_09bc1ed0&&(FUN_0880d4b4(D_089671cc),D_09bc1ed0)&&(FUN_0880d4b4(D_089671d4),D_09bc1ed0))FUN_0880d4b4(D_08967204,*cmd);*out=0;}
