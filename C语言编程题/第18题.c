/*
18.��**��������һ��m*n�����е�������СԪ�ؼ����±ꡣ
*/ 
#include <stdio.h>
main()
{
	int a[3][4]={{1,2,3,4},
	            {5,6,7,8},
				{9,10,11,12}};
	int m=3,n=4,i,j,max,maxi,maxj,min,mini,minj;
	max=min=a[0][0];
	maxi=mini=maxj=minj=0;	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max<a[i][j]){max=a[i][j];maxi=i;maxj=j;}
			if(min>a[i][j]){min=a[i][j];mini=i;minj=j;}
		}
	}
	printf("���ֵΪ:a[%d][%d]=%d,��СֵΪ:a[%d][%d]=%d��\n",maxi,maxj,max,mini,minj,min); 
}


