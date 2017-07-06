    #include <bcm2835.h>  
    #include <stdio.h>
    #include <unistd.h>
    unsigned char WriteBuf;
    unsigned char WriteBuf1;  
    unsigned int  ReadBuf0;  


    int main(int argc, char **argv)  
    {  
        if (!bcm2835_init())  
        return 1;  
        bcm2835_i2c_begin();  
        bcm2835_i2c_setSlaveAddress(0x57);  
        bcm2835_i2c_set_baudrate(10000);  
        printf("start..........\n"); 

        while(1)  
        {  
		WriteBuf = 0x00;  
		bcm2835_i2c_write_read_rs(&WriteBuf,2,&WriteBuf1,2);  
		bcm2835_i2c_read (&ReadBuf0,2);        
		printf("TTP229:%d\n",ReadBuf0);
		printf ("\r");
		fflush (stdout);
		bcm2835_delay(100);  
        }  
         
        bcm2835_i2c_end();  
        bcm2835_close();  
      
        return 0;  
    }  
