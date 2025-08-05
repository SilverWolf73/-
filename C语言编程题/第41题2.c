/*编写函数将一个字符串中每一个单词的第一个字母转换为大写*/
 #include <stdio.h>
 int main()
 {
 	int word=0;//满足非空格字符转换条件
	char ch;
	while((ch=getchar())!='\n'){
		if (ch==' ') word=0;//符合多空格也可以满足条件，同时在此条件下，进行字符转换
		else if (word==0) {//字符非空格，此时word(定义的时候)=0，判断并转化为大写字母
			if (ch>='a'&&ch<='z'){
				ch=ch-32;
				word=1;//表示当前不是空格，后面不是新单词 
			} //if
		} //else if 
		putchar(ch);//输出大写字母后，word=1, 第1个if不进，第1个else也不进，直接到这里原样输出字符 
	} 
	return 0;
 }
