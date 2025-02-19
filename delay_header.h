void delay_milliseconds(int msec)
{
T0PR=15000-1;
T0TCR=0x01;
while(T0TC<msec);
T0TCR=0x03;
T0TCR=0x00;

}
