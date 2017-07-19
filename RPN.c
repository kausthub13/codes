#include<stdio.h>

void pop(int num[],char op);
int count= 0;

int main()
{
    int num[10];
    char num1 = '0';
    start:;
    while(num1!='=')
    {
        printf("Enter A number or operator\n");
        num1 = getchar();
        getchar();
        if(num1=='+')
        {
            pop(num,'+');
            goto start;
        }
        if(num1=='-')
        {
            pop(num,'-');
            goto start;
        }
        if(num1=='*')
        {
            pop(num,'*');
            goto start;
        }
        if(num1=='/')
        {
            pop(num,'/');
            goto start;
        }
        if(num1=='=')
        {

            goto end;
        }
        num[count] = num1 - 48;
        ++count;
    }
    end:
    for(int i = 0;i<count;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}

void pop(int num[],char op)
{
    signed int temp=0;
   switch(op)
        {
        case '+':
            temp = num[count-1] + num[count-2];
            --count;
            num[count-1] = temp;
            break;
        case '-':
            temp = num[count-1] - num[count-2];
            --count;
            num[count-1] = temp;
            break;
        case '*':
            temp = num[count-1] * num[count-2];
            --count;
            num[count-1] = temp;
            break;
        case '/':
            temp = num[count-1] / num[count-2];
            --count;
            num[count-1] = temp;
            break;
        }

}
