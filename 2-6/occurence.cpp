#include<stdio.h>
int getOccurence(int num,int dig){

 int rem, cnt;
  
    cnt=0;
    while(num>0)
    {
        rem=num%10;
        if(rem==dig)
            cnt++;
        num/=10;
    }    
    return cnt;
	
}

int main(){
	int n;
	int d;
	int cnt;
	printf("Enter the number:-");
	scanf("%d",&n);
	printf("Enter the digit to be searched for the occurence:-");
	scanf("%d",&d);
	cnt=getOccurence(n,d);
	printf("Total occurences of digit is %d in number: %d ",cnt,n);
}

