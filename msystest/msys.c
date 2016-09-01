#define UFCON0 ((volatile unsigned int*)(0x50000020))

void printf(void)
{
        const char *p="helloworld!\n";
        while(*p)
        {
                *UFCON0=*p++;
        }
        while(1);
}

