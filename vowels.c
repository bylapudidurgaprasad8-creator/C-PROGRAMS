/*write a c-programme to verify whether a given character is vowel(or) not by using switch*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	switch(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
{
	case'a':printf("it is vowel");
	break;
	case'A':printf("it is vowel");
	break;
	case'e':printf("it is vowel");
	break;
	case'E':printf("it is vowel");
	break;
	case'i':printf("it is vowel");
	break;
	case'I':printf("it is vowel");
	break;
	case'o':printf("it is vowel");
	break;
	case'O':printf("it is vowel");
	break;
	case'u':printf("it is vowel");
	break;
	case'U':printf("it is vowel");
	break;
	default:printf("it is not a vowel");
	break;
}
}

