#include<stdio.h>
#include<string.h>
#include<math.h>


int main(){
	char key[]="JE";
	char m[]="ZF_SN_HFVELV:S5SOS3SEFIBW4RD2XC3MDVROCP3HBEOGYTRXFIVWYCQYVENZYGQHZFNXYO2LGFQXGJUKQHSAGI2XHRCNK4ZLEFNOYE2TWHQUZPDDYGIXZL3YCFWXKSTHOGVKKJ3UIMRNX42HFIFVAY2KSFQZGQ3XBUCKKM2WWEDOXCZVCEDMXYZLM===";
	char ml[]="O5SWY3BAMRXW4ZJ2GY3TMRRWIY3DINKGGZATMRRWGIZUCNJZGMZDGOJXGU2UCMZTGRATMOBWGQ2DQNJWG4ZTKOJVHA2TENZQGYZDGMRTGU3UCNCGGZCDOOBTGQ3DEMZTG42DMRBVIE2TOMZVGY3DKQJTGM2ECNZVGYZDINZTGUZTS===";
	char mi[]="LXO{FEN_GRNLN}";
	char ch;
	int i;
	int j=0;
	for(i=0;mi[i]!='\0';i++){
		if(mi[i]>='A'&&mi[i]<='Z'){
			if(mi[i]>key[j]){
				ch=((mi[i]-key[j])%26) +'A';
			}else{
				ch=((26+mi[i]-key[j])%26) +'A';
			}
			j++;
			
			j = j%2;
		} else{
			ch = mi[i];
		}
		printf("%c",ch);
	}
	
	return 0;
	
}

int l(){
	char m[]="676F6F645F6A6F623A593239755A334A6864485673595852706232357A4F6D78346233746D5A5735665A334A7562473539";
	char ch;
	int i;
	int h;
	int l;
	for(i=0;m[i]!='\0';i+=2){
		h=(m[i]-'0')*16;
		if(m[i+1]>='9'){
			l=m[i+1]-'A'+10;
		}else{
			l=m[i+1]-'0';
		}
		printf("%c",h+l);
	}
	
	return 0;
}
