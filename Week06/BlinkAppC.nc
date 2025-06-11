configuration BlinkAppC
{
}
implementation
{
    components MainC, BlinkC, LedsC;
 
    components new TimerMilliC() as Timer0;
    components new TimerMilliC() as Timer1;
    components new TimerMilliC() as Timer2;


    BlinkC -> MainC.Boot;

    BlinkC.Timer0 -> Timer0;
    BlinkC.Timer0 -> Timer1;
    BlinkC.Timer0 -> Timer2;
    BlinkC.Leds -> LedsC;
}
