/*It's comment*/
/* Example compiler command-line for GCC:*/
/* gcc -Wall -o InterfaceDevice InterfaceDevice.c -lpcap*/

/* Running a code*/
/* ./InterfaceDevice you did it wlp1s0 */
/* Use eth0 or xl1 at wlp1s0 according to your interface */

#include <stdio.h>
#include <pcap.h>
int main(int argc, char *argv[])
{
                char *dev;
         dev=argv[4]; 
        printf("Device:%s\n",dev);
        return (0);
}
