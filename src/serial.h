/*
 * In The Name Of God
 * ========================================
 * [] File Name : serial.h
 *
 * [] Creation Date : 24-02-2015
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
/*
 * Copyright (c) 2015 Parham Alvani.
*/
#ifndef SERIAL_H
#define SERIAL_H

int open_serial(const char *dev);

void init_serial(void);

int write_command(const char *str);

char readchar(void);

#endif
