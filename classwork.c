//дһ���������û�����뾶�͸�
//���㲢���Բ�������������
//����Ч����
//������Բ����İ뾶��1.0
//������Բ����ĸߣ�2
//Բ����ı����Ϊ��18.84
//Բ��������Ϊ��6.18
/*#include <stdio.h> 
int main(void)
{ 
   float r;
   float h;
   printf("������Բ����İ뾶��");
   scanf("%1f",&r);
   printf("������Բ����ĸߣ�");
   scanf("%1f",&h);
   printf("Բ����ı����Ϊ��%.2lf\n",
       2*3.14*r*r+2*3.141592*r*h);
   printf("Բ��������Ϊ��%.2lf\n",
       3.14*r*r*h);

   return 0;
}*/





/*
 * ˵��������02_2 �ַ�ת��
 * ���������Ȼ
 * ѧ�ţ�2016011438
 * �༶��3��
 * ���ڣ�2017/03/19
*/
/*
#include <stdio.h>
int main(void)
{
    char c1,c2,c3,c4,c5; 
    printf("������3��Сд��ĸ���ÿո������");
    scanf("%c%c%c%c%c",
        &c1,&c2,&c3,&c4,&c5);
    printf("%c, %d\n", c1, c1);
    printf("%c, %d\n", c3, c3);
    printf("%c, %d\n", c5, c5);
    printf("��д��ʽΪ��%c%c%c%c%c\n",
        c1-32,c2-32,c3-32,c4-32,c5-32);
   
    return 0;
}
*/




/*#include <stdio.h>
int main(void)
{
    char c,rtn;
    int a=0,b=0;
    printf("������һ��Ӣ����ĸ��");
    scanf("%c",&c);
    (c>='A'&&c<='Z')?(rtn=c+32):a=1;
    (c<='a'&&c>='z')?(rtn=c-32):b=1;
    (a==1&&b==1)?printf("����Ƿ���\n")
        :printf("ת����Ϊ%c\n",rtn);

    c<'a'? printf("���������ʽΪСд�����д��ʽΪ��%c\n",c+32)
       :printf("���������ʽΪ��д����Сд��ʽΪ��%c\n",c-32);

    return 0;
}*/




/*#include <stdio.h>
int main(void)
{
    char c='a';
    printf("������һ���ַ���\n");
    printf("��������ַ���ASCII��Ķ�����Ϊ��%d\n",c%2);
    printf("%d\n",(c>>1)%2);
    return 0;
}*/




/*#include <stdio.h>
int main(void)
{
    int a;
    printf("������һ���ٷ��Ƴɼ���");
    scanf("%d", &a); 
    if(100>a) 
    {
        if(a<60)
        {
            printf("�ɼ��ȼ�Ϊ��");
        }
        else
        {
            if(60<a<80)
            {
                printf("�ɼ��ȼ�Ϊ��");
            }
            else
            {
                printf("�ɼ��ȼ�Ϊ��");
            }
        }
         
    } 
    else
    { 
        printf("����Ƿ�"); 
    } 
    return 0;
}*/




//�ж�ĳһ���Ƿ�Ϊ����
/*#include <stdio.h>
int main(void)
{
    int year;
    printf("������һ����ݣ�"); 
    scanf("%d", &year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("��һ��������!");
        }
        else
        {
            printf("��һ����ƽ��!");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("��һ��������!");
        }
        else
        {
            printf("��һ����ƽ��!");
        }
    }
    return 0;

}*/




//��һ�����Ľ׳�
/*#include <stdio.h>
int main(void)
{
    int num,i,num2=1;
    printf("���ʣ�������ʲô���Ľ׳ˣ�");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        num2=num2*i;
    }
    printf("����������Ľ׳�Ϊ��%d\n",num2);
    return 0;
}*/




//С��Ϸʯͷ���Ӳ�
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int computer, user;
    srand(time(0));
    while(1)
    {
        printf("���������ĳ��У�1ʯͷ��2������3�����������˳���:");
        scanf("%d", &user);
        if(user!=1 && user!=2 && user !=3)
            break;
        computer = rand()%3 +1;
        
        if(computer == 1)
            printf("���Գ�ʯͷ\n");
        else if(computer == 2)
            printf("���Գ�����\n");
        else
            printf("���Գ�����\n");

        if(user==computer)
            printf("ƽ��!\n");
        else if((user==1 && computer==2)
            || (user==2 && computer==3)
            || (user==3 && computer==1))
            printf("��Ӯ��!\n");
        else
            printf("�����ˣ�\n");

        
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
        printf("������Բ�İ뾶��");
        scanf("%lf", &r);
        if(r<=0)
            printf("��������Ƿ���\n");
        else
        {
            area=pi*r*r;
            circuit=2*pi*r;
            printf("���Ϊ��%lf\n",area);
            printf("�ܳ�Ϊ��%lf\n",circuit);
        }
        printf("�Ƿ�������㣿��Y/N����");
        fflush(stdin);
        scanf("%c",&flag);
    }while(flag=='Y'||flag=='y');

    printf("ллʹ�ã���ӭ�´�����!\n");
}*/




//ˮ�ɻ�����ʮ���Ƶ���λ���֡�abc==a^3+b^3+c^3,��Ϊˮ�ɻ�������ӡ����ˮ�ɻ���
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





//��дһ�����������������֣���������Լ��
/*#include <stdio.h>
int main(void)
{
    int a,b,c,min,i;
    printf("�����������������ÿո��������");
    scanf("%d%d%d",&a,&b,&c);
    min=a<b?a:b;
    min=min<c?min:c;
    for(i=min;i>0;i--)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            printf("���Լ��Ϊ��%d\n",i);
            break;
        }
    }
}*/




//���ƽ��������û������������������������л���
/*#include <stdio.h>
int main(void)
{
    int num;
    int i;
    printf("�����������������");
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




//��ӡ�žų˷���(����)
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





//�û�����һ���ַ�������������
/*#include <stdio.h>
int main(void)
{
    char c,i;
    printf("������һ���ַ���");
    scanf("%c",&c);
    printf("��������ַ��Ķ�����Ϊ��");
    for(i=7;i>=0;i--)
        printf("%d",(c>>i)%2);
    printf("\n");

    return 0;
}*/





//������������10���ɼ���Ȼ�����ӡ����������
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




//���鵹��
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




//�������飬��С����洢��δ��ɣ�
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




//Сд��ĸת��д
/*#include <stdio.h> 
int main(void) 
{ 
    char ch = 'b'; 
    ch = 'b' - 32;   
    printf("%c, %d\n", ch, ch); 
    return 0; 
} */




//δ��
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




//����5*5���󣬼���߽�ֵ֮�ͣ��Խ���ֵ֮��
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




//����ĺϲ�
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




//ʯͷ������
/*#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int u,num;
    srand(time(0));
    do
    {
        printf("�����1��ʯͷ 2������ 3���� 4���˳�����\n");
        scanf("%d",&u);
        num=rand()%3+1;
        if(u>0&&u<5)
        {
            if(u==1)
            {
                printf("����ʯͷ");
                if(num==1)
                {
                    printf("���Գ�ʯͷ\n");
                    printf("ƽ��\n");
                }
                else if (num==2)
                {
                    printf("���Գ�����\n");
                    printf("����ʤ\n");
                }
                else
                {
                    printf("���Գ���\n");
                    printf("���Ի�ʤ\n");
                }
            }
            if(u==2)
            {
                printf("��������");
                if(num==1)
                {
                    printf("���Գ�ʯͷ\n");
                    printf("���Ի�ʤ\n");
                 }
                else if (num==2)
                {
                    printf("���Գ�����\n");
                    printf("ƽ��\n");
                }
                else
                {
                    printf("���Գ���\n");
                    printf("����ʤ\n");
                }
            }
            if(u==3)
            {
                printf("������");
                if(num==1)
                {
                    printf("���Գ�ʯͷ\n");
                    printf("����ʤ\n");
                 }
                else if (num==2)
                {
                    printf("���Գ�����\n");
                    printf("���Ի�ʤ\n");
                }
                else
                {
                    printf("���Գ���\n");
                    printf("ƽ��\n");
                }
            }
        }
        else
        {
            printf("����������������룡\n");
        }
    }while(u!=4);
    return 0;
}*/




//100���ڵļӼ���
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
    printf("�����ܷ�Ϊ%d",10*n);
    return 0;
}*/
 





//����ϲ��Ĳο���
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





//�Ӽ����Բ�
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i;
    int num1, num2;
    int op, result, score=0;
    srand(time(0));
    printf("��ʼ���⣬ÿС��10�֣��ܷ�100�֡�\n");
    for(i=0; i<10; i++)
    {
        printf("��%d�� ", i+1);
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
    printf("�������ճɼ�Ϊ%d\n", score);
    return 0;
}*/





//��ȭ��Ϸ
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
        printf("�����ȳ�(1:ʯͷ 2:���� 3:�� 4:�˳�)��");
        scanf("%d", &nUser);
        if(0>=nUser || 5<=nUser)
        {
            printf("�����������������!\n");
            continue;
        }

        if(4==nUser)
        {
            printf("�ټ���\n");
            break;
        }
        else if(1==nUser)
        {
            printf("��  �� ʯͷ\n");
        }
        else if(2==nUser)
        {
            printf("��  �� ����\n");
        }
        else
        {
            printf("��  �� ��\n");
        }

        nComputer = rand()%3+1;
        if(1==nComputer)
        {
            printf("���Գ� ʯͷ\n");
        }
        else if(2==nComputer)
        {
            printf("���Գ� ����\n");
        }
        else
        {
            printf("���Գ� ��\n");
        }

        if(nUser == nComputer)
        {
            printf("ƽ��\n");
        }
        else if((1==nUser && 2==nComputer)
            || (2==nUser && 3==nComputer)
            || (3==nUser && 1==nComputer))
        {
            printf("Ӯ��\n");
        }
        else
        {
            printf("����\n");
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

        




