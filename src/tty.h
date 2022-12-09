/*
 * tio - a simple serial terminal I/O tool
 *
 * Copyright (c) 2014-2022  Martin Lund
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#pragma once

#include <stdbool.h>

extern bool interactive_mode;

void	stdout_configure(void);
void	stdin_configure(void);
void	tty_configure(void);
int 	tty_connect(void);
void	tty_disconnect(void);					//By Evandro Souza, to allow linking with extension.c
void	tty_wait_for_device(void);
void	list_serial_devices(void);
void  forward_to_tty(int, char);		//By Evandro Souza, to allow linking with extension.c
void  tty_input_thread_create(void);
void  tty_input_thread_wait_ready(void);
