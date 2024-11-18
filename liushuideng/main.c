#include<REGX52.H>
void delay_ms(unsigned int x)  
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}




int main(void)
{
   
	 P2=0xFE;
		delay_ms(500);
		 P2=0xFD;
		delay_ms(500);
		 P2=0xFB;
		delay_ms(500);
		 P2=0xF7;
		delay_ms(500);
		 P2=0xEF;
		delay_ms(500);
		 P2=0xDF;
		 delay_ms(500);
		 P2=0xBF;
		 delay_ms(500);
		 P2=0x7F;
		 delay_ms(500);

    return 0;
}