/**Differences between typedef and #define **/
/**USES of #define **/

#include<stdio.h>
int add(int a,int b);
int main()
{
    #define i int
    i sum;
    sum = add(5,6);
    printf("%d",sum);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}

#include<stdio.h>
int add(int a,int b);
int main()
{
typedef int i;
i sum;
sum = add(4,34);
printf("%d\n",sum);
return 0;


}
int add(i a,int b)//error out of scope
{
    return a+b;
}
