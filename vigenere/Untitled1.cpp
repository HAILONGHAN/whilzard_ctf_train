#include<stdio.h>

int main(){
	char m[]="tn gpvetlv-pk uu ukvqyvkpqvipmhvq mp)vycvl qq ukv-hvjpmvl lqpmvyuvqjpv-turvtu)vycvjti ukvuyqj ukvqyv)yvyugpvymvqe gpvljpvjt)voppop)v uqyvqjpv-yyrvjpmvl lqpmvetlvmpt) ukv-(qv qvjt)vuyvo gq(mplvymvgyuipmltq yulv uv qvtu)vejtqv lvqjpv(lpvycvtv-yyrvqjy(kjqvtn gpve qjy(qvo gq(mplvymvgyuipmltq yulvlyvljpvetlvgyul )pm ukv uvjpmvyeuvb u)vdtlvepnnvtlvljpvgy(n)vcymvqjpvjyqv)thvbt)pvjpmvcppnvipmhvlnppohvtu)vlq(o )wvejpqjpmvqjpvonptl(mpvycvbtr ukvtv)t lhfgjt uvey(n)v-pveymqjvqjpvqmy(-npvycvkpqq ukv(ovtu)vo gr ukvqjpv)t l plvejpuvl())punhvtvej qpvmt-- qve qjvo urvphplvmtuvgnylpv-hvjpmvqjpmpvetlvuyqj ukvlyvipmhvmpbtmrt-npv uvqjtqvuymv) )vtn gpvqj urv qvlyvipmhvb(gjvy(qvycvqjpvethvqyvjptmvqjpvmt-- qvlthvqyv qlpncvyjv)ptmvyjv)ptmv vljtnnv-pvqyyvntqpvdejpuvljpvqjy(kjqv qvyipmvtcqpmetm)lv qvygg(mmp)vqyvjpmvqjtqvljpvy(kjqvqyvjtipveyu)pmp)vtqvqj lv-(qvtqvqjpvq bpv qvtnnvlppbp)vs( qpvutq(mtnwv-(qvejpuvqjpvmt-- qvtgq(tnnhvqyyrvtvetqgjvy(qvycv qlvet lqgytqfoygrpqvtu)vnyyrp)vtqv qvtu)vqjpuvj(mm p)vyuvtn gpvlqtmqp)vqyvjpmvcppqvcymv qvcntljp)vtgmyllvjpmvb u)vqjtqvljpvjt)vupipmv-pcympvlppuvtvmt-- qve qjvp qjpmvtvet lqgytqfoygrpqvymvtvetqgjvqyvqtrpvy(qvycv qvtu)v-(mu ukve qjvg(m yl qhvljpvmtuvtgmyllvqjpvc pn)vtcqpmv qvtu)vetlva(lqv uvq bpvqyvlppv qvoyov)yeuvtvntmkpvmt-- qfjynpv(u)pmvqjpvjp)kpvcntkv lvmpbyipfqjplpftuuyh ukf-mtgrpqlftu)f)yeufqjpfmt-- qfjynp";
	int i;
	for(i=0;m[i]!='\0';i++){
		if(m[i]=='v'){
			printf(" ");
			continue;
		}
		if(m[i]==' '){
			printf("i");
			continue;
		}
		if(m[i]=='q'){
			printf("t");
			continue;
		}
		if(m[i]=='p'){
			printf("e");
			continue;
		}
		if(m[i]=='t'){
			printf("a");
			continue;
		}
		if(m[i]=='j'){
			printf("h");
			continue;
		}
		if(m[i]=='y'){
			printf("o");
			continue;
		}
		if(m[i]=='l'){
			printf("s");
			continue;
		}
		if(m[i]=='c'){
			printf("f");
			continue;
		}
		if(m[i]=='m'){
			printf("r");
			continue;
		}
		
		if(m[i]=='u'){
			printf("n");
			continue;
		}
		if(m[i]==')'){
			printf("d");
			continue;
		}
		if(m[i]=='n'){
			printf("l");
			continue;
		}
		if(m[i]=='e'){
			printf("w");
			continue;
		}
		if(m[i]=='k'){
			printf("g");
			continue;
		}
		if(m[i]=='o'){
			printf("p");
			continue;
		}
		if(m[i]=='('){
			printf("u");
			continue;
		}
		if(m[i]=='-'){
			printf("b");
			continue;
		}
		if(m[i]=='g'){
			printf("c");
			continue;
		}
		if(m[i]=='h'){
			printf("y");
			continue;
		}
		if(m[i]=='i'){
			printf("v");
			continue;
		}
		if(m[i]=='r'){
			printf("k");
			continue;
		}
		if(m[i]=='b'){
			printf("m");
			continue;
		}
		if(m[i]=='d'){
			printf("(");
			continue;
		}
		if(m[i]=='w'){
			printf(")");
			continue;
		}
		if(m[i]=='f'){
			printf("-");
			continue;
		}
	
	
	
		
		printf("%c",m[i]);
	}

	return 0;
} 


