/*��д������һ���ַ�����ÿһ�����ʵĵ�һ����ĸת��Ϊ��д*/
 #include <stdio.h>
 void main()
 {
 	char s[81],*p,prior=' ';
 	printf("���������ݣ�\n");
 	gets(s);
 	for (p=s;*p!='\0';p++)
	{//priorΪ' '��־�ź���Ҳ�����µ��ʳ��֣�������������϶������µ��� 
		if (prior==' '&&(*p>='a' && *p<='z'))
			*p-=32;//*p=*p+'A'-'a'
		prior = *p;
	} 
	printf("%s\n",s);
 }
