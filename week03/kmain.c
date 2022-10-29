#include "serial_port.h"
#include "frame_buffer.h"



    
    int main(){

           char prs[] = "Hi! welcome to Wathsala's OS.";
   
    
    serial_write(0x3F8, prs, sizeof(prs));
    fb_write(prs, sizeof(prs));
    
    }
