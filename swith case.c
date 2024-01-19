#include<stdio.h>
int main(){
	char luachon;
    printf("tinh nao giap ranh voi bien");
    printf("\na. hue \nb. thai nguyen \nc. binh thuan \nd. da lat");
    printf("\nhay chon dap an dung : ");
    luachon = getchar();
    switch(luachon){
    	case'a' :
    	case'b':
    	case'A':
    	case'B':
    	case'd':
    	case'D':
    	{ printf("\akhong chinh xac!chuc ban may man lan sau:))))");
    	break;
		}
		case'C':
		case'c':{printf("\achinh xac!xin chuc mung");
			break;
		}
		default :
		printf("\adap an cua ban khong hop le");
		
	}
	return 0;
	
}