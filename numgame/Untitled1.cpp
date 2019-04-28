#include<stdio.h>

int main(){
	int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char m[]="bolnstkrvwnuoemanpaaioaxkolnfrphvnssnolchkboiphlloephzocfjtzjeepaeawewtzkntkntaimadzjlzxeipyrjduadzyakadkktyapikpfoikeoephrpachmvjaiaciaakadvmurhnfswvwrvanxwgvziewgiaakyimelnwrkaskenxshvphvntywtewtzknfnaeunrpifjsfyoeyezreuwnuoouadzyakadtwncknxanuqrvsernedatfjaxnerpbrptcafzalukfkdaksaiseywvvyodatfzeuecrperloipifjowphrpfzaluwsrbiewliaskenxllryewkrkdojawykhvnexwvvphvercevvotywtkdakjakeoeiixdtcevvetzoacpoxatyarwetkenxwnulrfleiphrpwvohfqluzokdij";
   int ch;
   int i;  
	
   for(i=0;m[i]!='\0';i++){
   	  ch = (m[i]-'a');
   	  a[ch]++;
   }
   
   int j =0;
   int max;
   int temp;
   for(i=0;i<26;i++){
   	max = a[i];
   	temp = i;
   	for(j=0;j<26;j++){
   		if(max<a[j]){
   			max = a[j];
   			temp =j;
		   }
	   }
	   printf("%c%d ",(temp+'a'),max);
	   a[temp]=0;
   }
   
   
	
	return 0;
} 
