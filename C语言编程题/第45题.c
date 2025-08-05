/*45.(**)试编程序，找出1至99之间的全部同构数。同构数是这样一组数：
  它出现在平方数的右边。如 5是25右边的数，25是625右边的数，
  5和25均是同构数。 

#include <stdio.h>
main()
{
	int i;
	for (i=1;i<=99;i++)
	{
		if (i*i%10 == i || i*i % 100 == i)
			printf("%5d",i);
	}
} */
#include <stdio.h> 
main()
{
	int i,m,pf,flag;
	for(i=1;i<=100;i++){
		flag=1;	pf=i*i; m=i;
		while(m){
			if(m%10!=pf%10){flag=0;break;}
			m/=10;pf/=10;
		}
		if(flag) printf("%5d",i);
	}	
}


