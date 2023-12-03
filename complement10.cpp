#include<iostream>
#include<math.h>
int bitwiseComplement(int n) {
        int ans=0,i=0;
        while(n!=0)
        {
            int bit=n&1;
            ans=(bit*pow(10,i))+ans;
            n=n>>1;
            i++;
        }
        int update=0;
        int j=0;
        while(ans!=0)
        {
            
            int r=ans%10;
            if(r==0)
            {
                update=update+pow(2,j); 
            }
            j=j+1;
        }
        return ans;
    }