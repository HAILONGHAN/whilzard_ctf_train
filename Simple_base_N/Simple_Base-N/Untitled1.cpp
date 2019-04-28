#include<stdio.h>
#include<string.h>

int main(){
  char input[50];
  char *v1; // edi
  unsigned int v2; // esi
  char v3; // cl
  fflush(stdin);
   scanf("%s",input);
   
   printf("\n122");
  v1 = input;
  v2 = 0;
  if ( strlen(input) )
  {
    do
    {
      v3 = v1[v2];
      if ( (unsigned __int8)(v3 - 'a') <= 0x19u )
        v1[v2] = (v3 - 84) % 26 + 97;
      if ( (unsigned __int8)(v3 - 'A') <= 0x19u )
        v1[v2] = (v3 - 52) % 26 + 65;
      ++v2;
    }
    while ( v2 < strlen(v1) );
  }
  printf("%c%c\n",'P'+32,'N'+32); 
  printf("\n123%s\n%s",v1,input);
  return 0;
} 
