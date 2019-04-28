#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include<stdio.h>
#include<string.h>



signed int test(char *input_0)
{
  signed int i; // ebx
  unsigned int v2; // edx
  const char *input; // esi
  int ch_i; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // edi
  int *v10; // ebx
  signed int v11; // ecx
  int *v12; // edx
  unsigned int aim; // [esp+Ch] [ebp-Ch]
  signed int v15; // [esp+10h] [ebp-8h]
  const char *input_1; // [esp+14h] [ebp-4h]
  int dword_403020[] ={0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0, 0, 0x0F, 0x0F, 0x0F, 0, 0, 0, 0,0x0F, 0,0x0F,0x0F, 0x0F, 0,0x0F, 0x0F,0x0F, 0x0F, 0, 0, 0x0F, 0, 0, 0, 0, 0x0F, 0x0F, 0x0F, 0,0x0F, 0, 0x0F, 0, 0, 0x0F, 0, 0x0F,0x0F, 0x0F, 0x0F, 0,0x0F, 0x0F, 0, 0
,0x0F, 0, 0x0F,0x0F, 0, 0,0x0F, 0, 0, 0, 0, 0x0F, 0x0F, 0x0F, 0, 0, 0, 0,0x0F, 0,0x0F, 0x0F, 0x0F, 0x0F, 0x0F,0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0, 0, 0};
  char *dword_403170="dssdwasawawaaswddw";
  char unk_4021A0[]={0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 ,0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3
 ,0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0
 ,0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 ,5, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2
 ,0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0x42, 0, 0, 0, 0x42, 0, 0, 0, 0x42, 0, 0, 0, 0x42, 0, 0, 0, 0x48, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0  ,  0   , 0, 0};

  input_1 = input_0;
  i = 0;
  aim = 0;
  
  input = input_0;
  while ( 1 )
  {
    ch_i = input[i];
    if ( ch_i != dword_403170[i / 2] )
      return -1;
    switch ( ch_i )
    {
      case 'a':
        v7 = 'd' - input[i + 1];
        goto LABEL_14;
      case 'd':
        v7 = input[i + 1] - '^';
LABEL_14:
        v8 = input[i + 2];
        if ( v8 != dword_403170[(i + 2) / 2] )
          return -1;
        if ( v8 == 's' )
        {
          v5 = input_1[i + 3] - 95;
        }
        else
        {
          if ( v8 != 'w' )
            return -1;
          v5 = 99 - input_1[i + 3];
        }
LABEL_19:
        if ( v5 > 5 || v7 > 5 )
          return -1;
        v15 = 0;
        v9 = v5 + v7 + 8 * v5;
        v10 = (int *)((char *)&unk_4021A0 + 64 * (i / 4));
        do
        {
          v11 = 0;
          v12 = v10;
          do
          {
            if ( *v12 )
            {
              if ( dword_403020[v9 + v11] )
                return -1;
              dword_403020[v9 + v11] = *v12;
            }
            ++v11;
            ++v12;
          }
          while ( v11 < 4 );
          v10 += 4;
          v9 += 9;
          ++v15;
        }
        while ( v15 < 4 );
        input = input_1;
        aim += 4;
        i = aim;
        if ( aim >= strlen(input_1) )
          return 1;
        break;
      case 's':
        v5 = input[i + 1] - 95;
        goto LABEL_6;
      case 'w':
        v5 = 99 - input[i + 1];
LABEL_6:
        v6 = input_1[i + 2];
        if ( v6 != dword_403170[(i + 2) / 2] )
          return -1;
        if ( v6 == 97 )
        {
          v7 = 'd' - input_1[i + 3];
        }
        else
        {
          if ( v6 != 'd' )
            return -1;
          v7 = input_1[i + 3] - 94;
        }
        goto LABEL_19;
      default:
        return -1;
    }
  }
}


int main(int argc, char *argv[]) {
	char my[40];
	scanf("%s",my);
	test(my);
	
	return 0;

} 
