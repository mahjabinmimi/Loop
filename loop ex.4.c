 #include<stdio.h>
int main()
{
    int i;
    for(i=1;i<100;i++)
    {
        if(i%2==0)
            continue;
            printf("%d\n",i);
        
        if(i==10)
            break;
        
    }
    return 0;
}

