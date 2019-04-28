#include<stdio.h>


int main(){
	char m[]="tn gpvetlv-pk uu ukvqyvkpqvipmhvq mp)vycvl qq ukv-hvjpmvl lqpmvyuvqjpv-turvtu)vycvjti ukvuyqj ukvqyv)yvyugpvymvqe gpvljpvjt)voppop)v uqyvqjpv-yyrvjpmvl lqpmvetlvmpt) ukv-(qv qvjt)vuyvo gq(mplvymvgyuipmltq yulv uv qvtu)vejtqv lvqjpv(lpvycvtv-yyrvqjy(kjqvtn gpve qjy(qvo gq(mplvymvgyuipmltq yulvlyvljpvetlvgyul )pm ukv uvjpmvyeuvb u)vdtlvepnnvtlvljpvgy(n)vcymvqjpvjyqv)thvbt)pvjpmvcppnvipmhvlnppohvtu)vlq(o )wvejpqjpmvqjpvonptl(mpvycvbtr ukvtv)t lhfgjt uvey(n)v-pveymqjvqjpvqmy(-npvycvkpqq ukv(ovtu)vo gr ukvqjpv)t l plvejpuvl())punhvtvej qpvmt-- qve qjvo urvphplvmtuvgnylpv-hvjpmvqjpmpvetlvuyqj ukvlyvipmhvmpbtmrt-npv uvqjtqvuymv) )vtn gpvqj urv qvlyvipmhvb(gjvy(qvycvqjpvethvqyvjptmvqjpvmt-- qvlthvqyv qlpncvyjv)ptmvyjv)ptmv vljtnnv-pvqyyvntqpvdejpuvljpvqjy(kjqv qvyipmvtcqpmetm)lv qvygg(mmp)vqyvjpmvqjtqvljpvy(kjqvqyvjtipveyu)pmp)vtqvqj lv-(qvtqvqjpvq bpv qvtnnvlppbp)vs( qpvutq(mtnwv-(qvejpuvqjpvmt-- qvtgq(tnnhvqyyrvtvetqgjvy(qvycv qlvet lqgytqfoygrpqvtu)vnyyrp)vtqv qvtu)vqjpuvj(mm p)vyuvtn gpvlqtmqp)vqyvjpmvcppqvcymv qvcntljp)vtgmyllvjpmvb u)vqjtqvljpvjt)vupipmv-pcympvlppuvtvmt-- qve qjvp qjpmvtvet lqgytqfoygrpqvymvtvetqgjvqyvqtrpvy(qvycv qvtu)v-(mu ukve qjvg(m yl qhvljpvmtuvtgmyllvqjpvc pn)vtcqpmv qvtu)vetlva(lqv uvq bpvqyvlppv qvoyov)yeuvtvntmkpvmt-- qfjynpv(u)pmvqjpvjp)kpvcntkv lvmpbyipfqjplpftuuyh ukf-mtgrpqlftu)f)yeufqjpfmt-- qfjynp";
	int  i=0;
	int num[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int black=0;
	int lin=0;
	int right=0;
	int left=0;
	for(i=0;m[i]!='\0';i++){
		if(m[i]==' '){
			black++;
			continue;
		}
		if(m[i]=='-'){
			lin++;
			continue;
		}
		if(m[i]==')'){
			right++;
			continue;
		}
		if(m[i]=='('){
			left++;
			continue;
		}
		num[m[i]-'a']++;
	}
	printf("-:%d, :%d,):%d,(:%d\n",lin,black,right,left);
	for(i=0;i<26;i++){
		//printf("123");
		printf("%c:%d   ",'a'+i,num[i]);
	}
	
	
	return 0;
}
