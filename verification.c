#include <stdio.h>
int main(void)
{
    long long card=0;
    long long provider;
    int m=0, n=0,result=0,temp=0,count=0;
    printf("Please Enter your Credit card Details: ");
    scanf("%lld",&card);
    provider=card;
    while(card>=9)
    { 
        m=m+card%10;
        card = card/10;
        if(2*(card%10)>9)
        {
            temp=2*(card%10);
            n=n+temp%10;
            temp=temp/10;
            n=n+temp%10;
            card=card/10;
            
        }
        else
        {
             n=n+2*(card%10);
             card = card/10;
        }
       
       
    }
    result=m+n+card;


    for(int i=0;provider>99;i++)
    {
        provider=provider/10;
        count+=1;
    }
    count=count+2;
    if (result%10==0)
    {
         if ((provider > 39 && provider < 50) && (count > 12 && count < 17))
        {
            printf("VISA\n");
        }
        else if ((provider > 50 && provider < 56) && (count == 16))
        {
            printf("MASTERCARD\n");
        }
        else if ((provider == 34 || provider == 37) && (count == 15))
        {
            printf("AMERICANEXPRESS\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    // printf("%i::%li::%i",count,provider,result);
    return 0;
}
