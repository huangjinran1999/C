//写一个程序，有用户输入半径和高
//计算并输出圆柱体表面积和体积
//运行效果：
//请输入圆柱体的半径：1.0
//请输入圆柱体的高：2
//圆柱体的表面积为：18.84
//圆柱体的体积为：6.18
/*#include <stdio.h> 
int main(void)
{ 
   float r;
   float h;
   printf("请输入圆柱体的半径：");
   scanf("%1f",&r);
   printf("请输入圆柱体的高：");
   scanf("%1f",&h);
   printf("圆柱体的表面积为：%.2lf\n",
       2*3.14*r*r+2*3.141592*r*h);
   printf("圆柱体的体积为：%.2lf\n",
       3.14*r*r*h);

   return 0;
}*/





/*
 * 说明：任务02_2 字符转换
 * 姓名：黄瑾然
 * 学号：2016011438
 * 班级：3班
 * 日期：2017/03/19
*/
/*
#include <stdio.h>
int main(void)
{
    char c1,c2,c3,c4,c5; 
    printf("请输入3个小写字母，用空格隔开：");
    scanf("%c%c%c%c%c",
        &c1,&c2,&c3,&c4,&c5);
    printf("%c, %d\n", c1, c1);
    printf("%c, %d\n", c3, c3);
    printf("%c, %d\n", c5, c5);
    printf("大写形式为：%c%c%c%c%c\n",
        c1-32,c2-32,c3-32,c4-32,c5-32);
   
    return 0;
}
*/




/*#include <stdio.h>
int main(void)
{
    char c,rtn;
    int a=0,b=0;
    printf("请输入一个英文字母：");
    scanf("%c",&c);
    (c>='A'&&c<='Z')?(rtn=c+32):a=1;
    (c<='a'&&c>='z')?(rtn=c-32):b=1;
    (a==1&&b==1)?printf("输入非法！\n")
        :printf("转换后为%c\n",rtn);

    c<'a'? printf("您输入的形式为小写，其大写形式为：%c\n",c+32)
       :printf("您输入的形式为大写，其小写形式为：%c\n",c-32);

    return 0;
}*/




/*#include <stdio.h>
int main(void)
{
    char c='a';
    printf("请输入一个字符：\n");
    printf("您输入的字符的ASCII码的二进制为：%d\n",c%2);
    printf("%d\n",(c>>1)%2);
    return 0;
}*/




/*#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个百分制成绩：");
    scanf("%d", &a); 
    if(100>a) 
    {
        if(a<60)
        {
            printf("成绩等级为差");
        }
        else
        {
            if(60<a<80)
            {
                printf("成绩等级为中");
            }
            else
            {
                printf("成绩等级为优");
            }
        }
         
    } 
    else
    { 
        printf("输入非法"); 
    } 
    return 0;
}*/




//判断某一年是否为闰年
/*#include <stdio.h>
int main(void)
{
    int year;
    printf("请输入一个年份："); 
    scanf("%d", &year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("这一年是闰年!");
        }
        else
        {
            printf("这一年是平年!");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("这一年是闰年!");
        }
        else
        {
            printf("这一年是平年!");
        }
    }
    return 0;

}*/




//求一个数的阶乘
/*#include <stdio.h>
int main(void)
{
    int num,i,num2=1;
    printf("请问，您想求什么数的阶乘：");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        num2=num2*i;
    }
    printf("您输入的数的阶乘为：%d\n",num2);
    return 0;
}*/




//小游戏石头剪子布
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int computer, user;
    srand(time(0));
    while(1)
    {
        printf("请输入您的出招（1石头，2剪刀，3包袱，其它退出）:");
        scanf("%d", &user);
        if(user!=1 && user!=2 && user !=3)
            break;
        computer = rand()%3 +1;
        
        if(computer == 1)
            printf("电脑出石头\n");
        else if(computer == 2)
            printf("电脑出剪子\n");
        else
            printf("电脑出包袱\n");

        if(user==computer)
            printf("平局!\n");
        else if((user==1 && computer==2)
            || (user==2 && computer==3)
            || (user==3 && computer==1))
            printf("您赢了!\n");
        else
            printf("您输了！\n");

        
    }

    return 0;
}*/





/*#include <stdio.h>
int main(void)
{
    const double pi=3.14159;
    double r,area,circuit;
    int flag;
    do
    {
        printf("请输入圆的半径：");
        scanf("%lf", &r);
        if(r<=0)
            printf("您的输入非法！\n");
        else
        {
            area=pi*r*r;
            circuit=2*pi*r;
            printf("面积为：%lf\n",area);
            printf("周长为：%lf\n",circuit);
        }
        printf("是否继续运算？（Y/N）：");
        fflush(stdin);
        scanf("%c",&flag);
    }while(flag=='Y'||flag=='y');

    printf("谢谢使用，欢迎下次再来!\n");
}*/




//水仙花数。十进制的三位数字。abc==a^3+b^3+c^3,则为水仙花数，打印所有水仙花数
/*#include <stdio.h>
int main(void)
{
    int num,a,b,c;
    for(num=100;num<1000;num++)
    {
        a=num/100;
        b=(num%100)/10;
        c=num%10;
        if(num==a*a*a+b*b*b+c*c*c)
            printf("%d\n",num);    
    }
}*/





//编写一个程序，输入三个数字，输出其最大公约数
/*#include <stdio.h>
int main(void)
{
    int a,b,c,min,i;
    printf("请输入三个整数（用空格隔开）：");
    scanf("%d%d%d",&a,&b,&c);
    min=a<b?a:b;
    min=min<c?min:c;
    for(i=min;i>0;i--)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            printf("最大公约数为：%d\n",i);
            break;
        }
    }
}*/




//绘制金字塔，用户输入金字塔层数，计算机进行绘制
/*#include <stdio.h>
int main(void)
{
    int num;
    int i;
    printf("请输入金字塔层数：");
    scanf("%d",&num);
    for(i=0;i<num;++i)
    {
        int n,m;
        for(m=0;m<num-1-i;++m)
        {
            printf(" ");
        }
        for(n=0;n<i*2+1;++n)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/




//打印九九乘法表(错误)
/*#include <stdio.h>
int main(void)
{
    int i,n;
    for(i=1;i<10;i++)
    {
        for(n=0;n<i;n++)
        {
            printf("%d*%d=%2d",n,i,n*i);
        }
        printf("\n");
    }
}*/





//用户输入一个字符，输出其二进制
/*#include <stdio.h>
int main(void)
{
    char c,i;
    printf("请输入一个字符：");
    scanf("%c",&c);
    printf("您输入的字符的二进制为：");
    for(i=7;i>=0;i--)
        printf("%d",(c>>i)%2);
    printf("\n");

    return 0;
}*/





//从命令行输入10个成绩，然后反序打印出来（错误）
/*#include <stdio.h>
int main(void)
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
        printf("%d",arr[9]);
    printf("\n");

    for(i=9;i>=0;i--)
        printf("%d ",arr[9]);
    printf("\n");

    return 0;
}*/




//数组倒置
/*#include <stdio.h>
int main(void)
{
    int i,temp;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<5;i++)
    {
        temp=arr[i];
        arr[i] =arr[9-i];
        arr[9-i] =temp;
    }
    for(i=0;i<10;i++)
        printf("%d",arr[i]);
    return 0;
}*/




//无序数组，从小到大存储（未完成）
/*#include <stdio.h>
int main(void)
{
    int arr[10]={11,44,66,88,22,33,99,55,77,0};
    int n,temp;
    for(n=0;n<9;n++)
    {
        if(arr[n]>arr[n+1]);
        {
            temp=arr[n];
            arr[n]=arr[n+1];
            arr[n+1]=temp;
        }
    }
    for(n=0;n<10;n++)
        printf("%d",arr[n]);
*/




//小写字母转大写
/*#include <stdio.h> 
int main(void) 
{ 
    char ch = 'b'; 
    ch = 'b' - 32;   
    printf("%c, %d\n", ch, ch); 
    return 0; 
} */




//未完
/*#include <stdio.h>
int main(void)
{
    int arr[5][3];
    int i,n;
    for(i=0;i<5;i++)
    {
        for(n=0;n<3;n++)
        {
            arr[i][n]=(i+1)*10+i+1;*/




//输入5*5矩阵，计算边界值之和，对角线值之和
/*#include <stdio.h>
int main(void)
{
    int arr[5][5];
    int i,n,sum=0;
    for(i=0;i<5;i++)
    {
        for(n=0;n<5;n++)
        {
            scanf("%d",&arr[i][n]);
        }
    }
     for(i=0;i<5;i++)
    {
        for(n=0;n<5;n++)
        {
            if(i==0||i==4||n==0||n==4)
                sum+=arr[i][n];

        }
    }
     printf("sum=%d",sum);
    for(i=0;i<5;i++)
    {
        if((i==n)||(i+n==4))
            sum+=arr[i][n];
    }
    printf("sum=%d",sum);
    return 0;
}*/




//数组的合并
/*#include <stdio.h> 
int main(void)
{
    int arr1[4]={3,6,9,11};
    int arr2[5]={1,3,8,45,89};
    int arr3[9]={0};
    int i,n,temp,a=0;
    for(i=0;i<4;++i)
    {
        arr3[i]=arr1[i];
        printf("%3d",arr3[i]);
    }
    for(n=0;n<5;++n,++i)
    {
        arr3[i]=arr2[n];
        printf("%3d",arr3[i]);
    }
    printf("\n");
    for(i=0;i<8;++i)
    {
        for(n=0;n<8-i;++n)
        {
            if(arr3[n]>arr3[n+1])
            {
                temp=arr3[n];
                arr3[n]=arr3[n+1];
                arr3[n+1]=temp;
            }
        }
    }
    for(i=0;i<9;++i)
    {
        printf("%-3d",arr3[i]);
    }
    for(i=0;i<8;++i)
    {
        if(arr3[i]==arr3[i+1])
        {
            a+=1;
            for(n=i+1;n<7-i;++n)
            {
                temp=arr2[n];
                arr3[n]=arr3[n+1];
                arr3[n+1]=temp;
            }
        }
    }
    for(i=0;i<9;++i)
    {
        printf("%3d",arr3[i]);
    }

    return 0;   
}*/




//石头剪刀布
/*#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int u,num;
    srand(time(0));
    do
    {
        printf("请出（1：石头 2：剪刀 3：布 4：退出）：\n");
        scanf("%d",&u);
        num=rand()%3+1;
        if(u>0&&u<5)
        {
            if(u==1)
            {
                printf("您出石头");
                if(num==1)
                {
                    printf("电脑出石头\n");
                    printf("平局\n");
                }
                else if (num==2)
                {
                    printf("电脑出剪刀\n");
                    printf("您获胜\n");
                }
                else
                {
                    printf("电脑出布\n");
                    printf("电脑获胜\n");
                }
            }
            if(u==2)
            {
                printf("您出剪刀");
                if(num==1)
                {
                    printf("电脑出石头\n");
                    printf("电脑获胜\n");
                 }
                else if (num==2)
                {
                    printf("电脑出剪刀\n");
                    printf("平局\n");
                }
                else
                {
                    printf("电脑出布\n");
                    printf("您获胜\n");
                }
            }
            if(u==3)
            {
                printf("您出布");
                if(num==1)
                {
                    printf("电脑出石头\n");
                    printf("您获胜\n");
                 }
                else if (num==2)
                {
                    printf("电脑出剪刀\n");
                    printf("电脑获胜\n");
                }
                else
                {
                    printf("电脑出布\n");
                    printf("平局\n");
                }
            }
        }
        else
        {
            printf("输入错误！请重新输入！\n");
        }
    }while(u!=4);
    return 0;
}*/




//100以内的加减法
/*#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int a1[10]={0};
    int a2[10]={0};
    int a,b,c,i,n;
    n=0;
    for(i=0;i<10;++i)
    {
        srand(time(0));
        a =rand()%100+1;
        b =rand()%100+1;
        c =rand()%2;
        if(c==1)
        {
            a1[i]=a+b;
            printf("%d+%d=",a,b);
            scanf("%d",&a2[i]);
        }
        else
        {
            a1[i]=a-b;
            printf("%d-%d=",a,b);
            scanf("%d",&a2[i]);
        }
        if(a1[i]==a2[i])
        {
            printf("Right\n");
            n+=1;
        }
        else
        {
            printf("Not right\n");
        }
    }
    printf("您的总分为%d",10*n);
    return 0;
}*/
 





//数组合并的参考答案
/*#include <stdio.h>
int main(void)
{ 
    int arr1[4] = {3,6,9,11}; 
    int arr2[5] = {1,3,8,45,89};
    int arr3[9] = {0};
    int i=0, j=0, n=0;

    while(i<4 || j<5)
    {
        if(i==4)
            arr3[n++] = arr2[j++];
        else if(j==5)
            arr3[n++] = arr2[i++];
        else if(arr1[i] < arr2[j])
            arr3[n++] = arr1[i++];
        else if(arr1[i] > arr2[j])
            arr3[n++] = arr2[j++];
        else 
        {
            arr3[n++] = arr1[i++];
            j++;
        }
    }

    for(i=0; i<n; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    
    return 0;
}*/





//加减法自测
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i;
    int num1, num2;
    int op, result, score=0;
    srand(time(0));
    printf("开始答题，每小题10分，总分100分。\n");
    for(i=0; i<10; i++)
    {
        printf("第%d题 ", i+1);
        num1 = rand()%101;
        num2 = rand()%101;
        op = rand()%2;
        printf("%d %c %d = ", num1, 0==op ? '+' : '-', num2);
        scanf("%d", &result);
        if((0==op && result==num1+num2)
            || (1==op && result==num1-num2))
        {
            printf("Right!\n");
            score += 10;
        }
        else
        {
            printf("Not right!\n");
        }
    }
    printf("您的最终成绩为%d\n", score);
    return 0;
}*/





//猜拳游戏
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nUser;
    int nComputer;

    srand(time(0));
    while(1)
    {
        printf("请您先出(1:石头 2:剪子 3:步 4:退出)：");
        scanf("%d", &nUser);
        if(0>=nUser || 5<=nUser)
        {
            printf("输入错误，请重新输入!\n");
            continue;
        }

        if(4==nUser)
        {
            printf("再见！\n");
            break;
        }
        else if(1==nUser)
        {
            printf("您  出 石头\n");
        }
        else if(2==nUser)
        {
            printf("您  出 剪子\n");
        }
        else
        {
            printf("您  出 布\n");
        }

        nComputer = rand()%3+1;
        if(1==nComputer)
        {
            printf("电脑出 石头\n");
        }
        else if(2==nComputer)
        {
            printf("电脑出 剪子\n");
        }
        else
        {
            printf("电脑出 布\n");
        }

        if(nUser == nComputer)
        {
            printf("平局\n");
        }
        else if((1==nUser && 2==nComputer)
            || (2==nUser && 3==nComputer)
            || (3==nUser && 1==nComputer))
        {
            printf("赢了\n");
        }
        else
        {
            printf("输了\n");
        }
    }

    return 0;
}*/





//
#include <stdio.h>
int main (void)
{
    char arr[6];
    scanf("%s",arr);
    printf("%s\n",arr);

    return 0;
}

        




