#include <stdio.h>
void main()
{
	int a;
	for(;;){
	printf("1��ӡ����\n2��ӡ��������\n3��ӡ99�˷���\n����������ѡ��\n");
	scanf("%d",&a);
	if(a==1){
		int a,b,c,d;
	printf("��������ε�����");
	scanf("%d",&c); 
	printf("��������ε�����");
	scanf("%d",&d);
	for(a=1;a<=c;a++){
		for(b=1;b<=d;b++){
			printf("*");
		}printf("\n");
	}
}
    else if(a==2){
    	printf("����");
    int a,b,c,d;
  
    scanf("%d",&a);
    d=a; 
    for(b=1;b<=a;b++){
    	for(c=1;c<=d;c++){
    		printf("*");
    		
		}printf("\n");
		d=d-1;
	}
	}
	else if(a==3){int a,c,b;
	c=1;
	for(a=1;a<=9;a++){
		for(b=1;b<=c;b++){
		
			printf("%d*%d=%d\t",b,c,b*c);
		}c++; 
		printf("\n");
		 
	}
	}else printf("�������\n"); 
	system("pause");
}
}
	

