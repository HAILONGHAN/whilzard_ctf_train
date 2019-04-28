#include<stdio.h>



int  sub_2A1170(unsigned __int8 *input_2, signed int size)
{
  signed int size2; // ebx
  int ch1; // eax
  uint64_t v4; // rt0
  
  
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // kr08_4
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  signed __int64 v15; // rax
  __int64 v16; // rax
  int result; // eax

  size2 = size;
  ch1 = input_2[1];
  HIDWORD(v4) = __CFADD__(ch1, *input_2 << 8);
  LODWORD(v4) = ch1 + (*input_2 << 8);
  v5 = input_2[4];
  v6 = (input_2[3] + ((input_2[2] + (v4 << 8)) << 8)) << 8;
  v7 = (input_2[3] + ((input_2[2] + ((_DWORD)v4 << 8)) << 8)) << 8;
  v8 = v5 + ((input_2[3] + ((input_2[2] + ((_DWORD)v4 << 8)) << 8)) << 8);
  v9 = v5 + __PAIR__(HIDWORD(v6), v7);
  MEMORY[0] = *((_BYTE *)&dword_2A507C + (HIDWORD(v9) >> 3));
  v10 = *((unsigned __int8 *)&dword_2A507C + ((__PAIR__(HIDWORD(v9), v8) >> 30) & 0x1F));
  *(_BYTE *)(HIDWORD(v10) + 1) = v10;
  v11 = *((unsigned __int8 *)&dword_2A507C + ((v9 >> 25) & 0x1F));
  *(_BYTE *)(HIDWORD(v11) + 2) = v11;
  v12 = *((unsigned __int8 *)&dword_2A507C + ((v9 >> 20) & 0x1F));
  *(_BYTE *)(HIDWORD(v12) + 3) = v12;
  v13 = *((unsigned __int8 *)&dword_2A507C + ((v9 >> 15) & 0x1F));
  *(_BYTE *)(HIDWORD(v13) + 4) = v13;
  v14 = *((unsigned __int8 *)&dword_2A507C + ((v9 >> 10) & 0x1F));
  *(_BYTE *)(HIDWORD(v14) + 5) = v14;
  
 
  }
  return result;
}

int main(){
	sub_2A1170();
	return 0;
}
