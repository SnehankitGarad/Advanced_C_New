#include <stdio.h>
int main()
{
	char ch;
	 
	printf("enter the character:");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
		{
		ch = ch+32;
	printf("%c\n",ch);
	}

	else if(ch>='a'>= ch<='z'){
		ch =ch-32;
	printf("%c\n",ch);
	}
	else if(ch>='0' && ch<='9'){
		ch=ch - '0';
		printf("%c\n",ch);
	}

	else{
	       printf("special char");	
	}	
	

	
			
		
}

