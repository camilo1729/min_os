#ifndef INCLUDE_IO_H
#define INCLUDE_IO_H

//@ param port The I/O port to send the data to
//@ param data The data to send to the port

void outb(unsigned short port, unsigned char data);
void fb_write_cell(unsigned int i, char c, unsigned char fg,unsigned char bg);
void fb_move_cursor(unsigned short pos);
int fb_write(char *buf );
void initialize_console();

#endif
