#include <stdio.h>

int high(int sum)
{
    int high,var1=0;
    printf("You have a high probability of being infected with covid 19!");
    var1++;
    printf("Tips :\nStay quarantined for 15 days and take proper care of your health! \nTake a covid test after 15 days!");

    return var1;
}

int low(int sum)
{
    int var3=0,low;
    printf("You have a low probability of being infected with covid 19!");
    var3++;
    printf("Tips :\nTake proper precautions and maintain social distancing \nUse sanitizer and mask!");
    
    return var3;
    
}

int medium(int sum)
{
    int med,var2=0;
    printf("You have a medium probability of being infected with covid 19!");
    var2++;
    printf("Tips :\nTake proper precautions and maintain social distancing \nTake a covid test after 15 days! \nUse sanitizer and mask!");
    
    return var2;
}

int severity (int arraycount)
{
    int j,n;
    for(j=0;j<=5;j++){
        if(count[j]<count[j+1]){
            printf("the number of people who are ill is increased by %d from day %d to day %d",count[j+1]-count[j],j=1,j+2);
        }
        else if(count[j]==count[j+1]){
            printf("The number of people who are ill is neither increased nor decreased from day %d to day %d",j+1,j+2);
        }
        else if
        {
            printf("The number of people who are ill is decreased by %d from day %d to day %d ",count[j]-count[j+1],j+1,j+2);
        }
    }
    
    return 0;
}
    
        
        
        
