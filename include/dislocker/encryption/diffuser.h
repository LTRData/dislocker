/* -*- coding: utf-8 -*- */
/* -*- mode: c -*- */
/*
 * Dislocker -- enables to read/write on BitLocker encrypted partitions under
 * Linux
 * Copyright (C) 2012-2013  Romain Coltel, Hervé Schauer Consultants
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */
#ifndef DIFFUSER_H
#define DIFFUSER_H


#include <stdint.h>
#include <dislocker/xstd/xstdio.h>


/*
 * Prototypes
 */
DISLOCKER_API
void diffuserA_decrypt(uint8_t* sector, uint16_t sector_size, uint32_t* buffer);

DISLOCKER_API
void diffuserB_decrypt(uint8_t* sector, uint16_t sector_size, uint32_t* buffer);

DISLOCKER_API
void diffuserA_encrypt(uint8_t* sector, uint16_t sector_size, uint32_t* buffer);

DISLOCKER_API
void diffuserB_encrypt(uint8_t* sector, uint16_t sector_size, uint32_t* buffer);





#endif /* DIFFUSER_H */
