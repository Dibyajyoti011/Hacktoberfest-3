#include<stdio.h>
int main()
{
		int original,n,remainder,reverse=0;
		printf("Enter the value of integer:");
		scanf("%d", &n);
		original=n;
		
		while(n!=0)
		{
		remainder=n%10;
		reverse = reverse*10 + remainder;
		n /= 10;
		}
		if(original==reverse)
		printf("%d is palindrome", original);
		else
		printf("%d is not a palindrome", original);

return 0;
}
