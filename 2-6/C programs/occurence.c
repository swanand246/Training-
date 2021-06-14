//occurence of digits

#include<stdio.h>
int getOccurence(int num,int dig){

 int rem, cnt;
  
    cnt=0;
    while(num>0)
    {
        rem=num%10;
        if(rem==dig)
            cnt++;
        num=num/10;
    }    
    return cnt;
	
}

int main(){
	int n;
	int d;
	int cnt;
	int ch;
	printf("Enter the number:-");
	scanf("%d",&n);
	printf("Enter the digit to be searched for the occurence:-");
	scanf("%d",&d);
	cnt=getOccurence(n,d);
	printf("Total occurences of digit is %d in number: %d\n ",cnt,n);
	do{
		printf("Do yo want to continue to search for the occurence(0 or 1):-");
		scanf("%d",&ch);
		switch(ch){
		

		
	case 1:printf("Enter the digit to be searched for the occurence:-");
		   scanf("%d",&d);
		   cnt=getOccurence(n,d);
		   printf("Total occurences of digit is %d in number: %d\n ",cnt,n);
		   break;
	default:printf("invalid input\n");
	}
	}while(ch!=0);
}

