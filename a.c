#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int human(int t)
{ int num;
do{  printf("������1��2��");
     scanf("%d",&num);
	 if(num>2||num<1||t+num>30)
		 printf("�������룡");
	 else printf("���ڵ�����%d\n",t+num);
}while(num>2||num<1||num+t>30);
  return t+num;
}
int computer(int t)
{  int c;
printf("���Ե�����");
if((t+1)%3==0) printf("%d\n",++t);
else if((t+2)%3==0) {t=t+2;printf("%d\n",t);}
else {c=rand()%2+1;t=t+c;printf("%d\n",t);}
return t;
}
main()
{ int ct=0;printf("\n*******����ʮ*******\n*******��Ϸ��ʼ*******\n");
srand(time(NULL));
if(rand()%2==1) ct=human(ct);
while(ct!=30)
  if((ct=computer(ct))==30)
	  printf("\n����Ӯ�ˣ�\n");
  else if((ct=human(ct))==30)
	  printf("\n��Ӯ�ˣ�\n");
  printf("*******��Ϸ����*******\n");
}


	
