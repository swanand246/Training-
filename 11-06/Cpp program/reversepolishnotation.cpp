//Code for evaluatiing reverse polish notation
#include<iostream>
using namespace std;

class Stack
{
private:
  int i;
  int data[100];

public:
  void init (void)
  {
    i = -1;
  }

  int isFull (void)
  {
    if (i == 99)
      {
	return 1;
      }
    else
      {
	return 0;
      }
  }

  int isEmpty (void)
  {
    if (i == -1)
      {
	return 1;
      }
    else
      {
	return 0;
      }
  }

  int pop (void)
  {
    int k = isEmpty ();
    if (k == 0)
      {
	int t = data[i];
	i--;
	return t;
      }
  }

  void push (int a)
  {
    int k = isFull ();
    if (k == 0)
      {
	i++;
	data[i] = a;
      }
  }

  int top (void)
  {
    int k = isEmpty ();
    if (k == 0)
      {
	int t = data[i];
	return t;
      }
  }
};
//check whether it is operator
int isOperator (char op)
{
  if (op == '+')
    {
      return 1;
    }

  if (op == '-')
    {
      return 1;
    }

  if (op == '*')
    {
      return 1;
    }

  if (op == '/')
    {
      return 1;
    }

    if (op == '^')
    {
      return 1;
    }

  else
    {
      return 0;
    }
}
//converts ascci into actual value
int getNumber(char op){
    if(op == 48){
        return 0;
    }

    if(op == 49){
        return 1;
    }

    if(op == 50){
        return 2;
    }

    if(op == 51){
        return 3;
    }

    if(op == 52){
        return 4;
    }

    if(op == 53){
        return 5;
    }

    if(op == 54){
        return 6;
    }

    if(op == 55){
        return 7;
    }

    if(op == 56){
        return 8;
    }

    if(op == 57){
        return 9;
    }
}
//performs operation
int Operation (int m, int n, char op)
{
  if (op == '+')
    {
      int p = m + n;
      return p;
    }

  if (op == '-')
    {
      int p = n-m;
      return p;
    }

  if (op == '*')
    {
      int p = m * n;
      return p;
    }

  if (op == '/')
    {
      int p = n/m;
      return p;
    }

  if (op == '^')
    {
      int p = 1;
      while (m != 0)
	{
	  p = p * n;
	  m--;
	}
      return p;
    }
}
//parse the string
void postfixEval (char postfix[])
{
  int i;
  Stack stk;
  i = 0;
  stk.init ();

  while (postfix[i] != '\0')
    {
      int k = isOperator (postfix[i]);
      if (k == 0)
	{
	  int d=getNumber(postfix[i]);//postfix[i] ascii value,d value is actual,getnumber converts the asccivalue to actual value
	  stk.push(d);
	}

      if (k == 1)
	{
	  int a = stk.pop ();
	  int b = stk.pop ();
	  int t = Operation (a, b, postfix[i]);
	  stk.push (t);
	}
      i++;
    }

  int ans = stk.top ();
  cout << ans;
}

main ()
{
  char post[100];
  cout << "Enter the string:-";
  cin >> post;
  postfixEval (post);
  return 0;
}