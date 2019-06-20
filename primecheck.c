// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
// The next T lines contains an integer N.

#include <stdio.h>

int checkprime(int n){
    int i,flag = 0;
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0 && n  != 1 )
    {
        return n;
    }
    
    else{
        flag = 0;
        return 0;
    }
    
}

int main() {
	//code
	int n,i,j,t,sum = 0,c;
	scanf("%d",&t);
	while(t > 0){
	  scanf("%d",&n);
	  while(n > 0)
	    {
	       int rem = n % 10;
	       n = n / 10;
		   c = checkprime(rem);
	       sum = sum + c;
	   
      	}
      	t--;
      	printf("%d\n",sum);
      	sum = 0;
     	}
    return 0;

}