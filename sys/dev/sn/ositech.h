/*
    This file contains the firmware of Seven of Diamonds from OSITECH.
    (Special thanks to Kevin MacPherson of OSITECH)
    (Thanks to Ositech Communications for permitting for BSDL distribution)

Copyright 2002 Ositech Communications Inc.  All Rights Reserved

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY AUTHOR AND CONTRIBUTORS ``AS IS'' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED.  IN NO EVENT SHALL AUTHOR OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
SUCH DAMAGE.

$FreeBSD: head/sys/dev/sn/ositech.h 147955 2005-07-13 14:49:06Z imp $

*/

    static const u_char __Xilinx7OD[] = {
    0xFF, 0x04, 0xA0, 0x36, 0xF3, 0xEC, 0xFF, 0xFF, 0xFF, 0xDF, 0xFB, 0xFF,
    0xF3, 0xFF, 0xFF, 0xFF, 
    0xEF, 0x3F, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x7F, 0xFE, 0xFF,
    0xCE, 0xFE, 0xFE, 0xFE, 
    0xFE, 0xDE, 0xBD, 0xDD, 0xFD, 0xFF, 0xFD, 0xCF, 0xF7, 0xBF, 0x7F, 0xFF,
    0x7F, 0x3F, 0xFE, 0xBF, 
    0xFF, 0xFF, 0xFF, 0xBC, 0xFF, 0xFF, 0xBD, 0xB5, 0x7F, 0x7F, 0xBF, 0xBF,
    0x7F, 0xFF, 0xEF, 0xFF, 
    0xFF, 0xFF, 0xFB, 0xFF, 0xF7, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xDE,
    0xFE, 0xFE, 0xFA, 0xDE, 
    0xBD, 0xFD, 0xED, 0xFD, 0xFD, 0xCF, 0xEF, 0xEF, 0xEF, 0xEF, 0xC7, 0xDF,
    0xDF, 0xDF, 0xDF, 0xDF, 
    0xFF, 0x7E, 0xFE, 0xFD, 0x7D, 0x6D, 0xEE, 0xFE, 0x7C, 0xFB, 0xF4, 0xFB,
    0xCF, 0xDB, 0xDF, 0xFF, 
    0xFF, 0xBB, 0x7F, 0xFF, 0x7F, 0xFF, 0xF7, 0xFF, 0x9E, 0xBF, 0x3B, 0xBF,
    0xBF, 0x7F, 0x7F, 0x7F, 
    0x7E, 0x6F, 0xDF, 0xEF, 0xF5, 0xF6, 0xFD, 0xF6, 0xF5, 0xED, 0xEB, 0xFF,
    0xEF, 0xEF, 0xEF, 0x7E, 
    0x7F, 0x7F, 0x6F, 0x7F, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xEF, 0xBF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBC, 0x1F, 0x1F, 0xEE, 0xFF, 0xBC,
    0xB7, 0xFF, 0xDF, 0xFF, 
    0xDF, 0xEF, 0x3B, 0xE3, 0xD3, 0xFF, 0xFB, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF,
    0xFF, 0xBA, 0xBF, 0x2D, 
    0xDB, 0xBD, 0xFD, 0xDB, 0xDF, 0xFA, 0xFB, 0xFF, 0xEF, 0xFB, 0xDB, 0xF3,
    0xFF, 0xDF, 0xFD, 0x7F, 
    0xEF, 0xFB, 0xFF, 0xFF, 0xBE, 0xBF, 0x27, 0xBA, 0xFE, 0xFB, 0xDF, 0xFF,
    0xF6, 0xFF, 0xFF, 0xEF, 
    0xFB, 0xDB, 0xF3, 0xD9, 0x9A, 0x3F, 0xFF, 0xAF, 0xBF, 0xFF, 0xFF, 0xBE,
    0x3F, 0x37, 0xBD, 0x96, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAE, 0xFB, 0xF3, 0xF3, 0xEB, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xF7, 0xFA, 0xBC, 0xAE, 0xFE, 0xBE, 0xFE, 0xBB, 0x7F, 0xFD, 0xFF,
    0x7F, 0xEF, 0xF7, 0xFB, 
    0xBB, 0xD7, 0xF7, 0x7F, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xBC, 0xED, 0xFD,
    0xBD, 0x9D, 0x7D, 0x7B, 
    0xFB, 0x7B, 0x7B, 0xFB, 0xAF, 0xFF, 0xFE, 0xFD, 0xFD, 0xFE, 0xFE, 0xFF,
    0xFF, 0xFF, 0xFF, 0xF7, 
    0xAA, 0xB9, 0xBF, 0x8F, 0xBF, 0xDF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xCF,
    0xFB, 0xEB, 0xCB, 0xEB, 
    0xEE, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0x3E, 0x33, 0x3F, 0x1C, 0x7C,
    0xFC, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xCF, 0xD3, 0xF3, 0xE3, 0xF3, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xEB, 0xFE, 0x35, 
    0x3F, 0x3D, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xEF, 0x6F, 0xE3,
    0xE3, 0xE3, 0xEF, 0xFF, 
    0xFF, 0xDF, 0xFF, 0xFF, 0xF7, 0xFE, 0x3E, 0x5E, 0xFE, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFD, 0xFF, 0xFF, 
    0xAF, 0xCF, 0xF2, 0xCB, 0xCF, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD,
    0xFC, 0x3E, 0x1F, 0x9E, 
    0xAD, 0xFD, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xEF, 0xFF, 0xB3, 0xF7, 0xE7,
    0xF7, 0xFA, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xEE, 0xEB, 0xAB, 0xAF, 0x9F, 0xE3, 0x7F, 0xFF, 0xDE,
    0xFF, 0x7F, 0xEE, 0xFF, 
    0xFF, 0xFB, 0x3A, 0xFA, 0xFF, 0xF2, 0x77, 0xFF, 0xFF, 0xF7, 0xFE, 0xFF,
    0xFE, 0xBD, 0xAE, 0xDE, 
    0x7D, 0x7D, 0xFD, 0xFF, 0xBF, 0xEE, 0xFF, 0xFD, 0xFF, 0xDB, 0xFB, 0xFF,
    0xF7, 0xEF, 0xFB, 0xFF, 
    0xFF, 0xFE, 0xFF, 0x2D, 0xAF, 0xB9, 0xFD, 0x79, 0xFB, 0xFA, 0xFF, 0xBF,
    0xEF, 0xFF, 0xFF, 0x91, 
    0xFA, 0xFB, 0xDF, 0xF7, 0xF7, 0xFF, 0xFF, 0xFF, 0xFC, 0xCF, 0x37, 0xBF,
    0xBF, 0xFF, 0x7F, 0x7F, 
    0xFF, 0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 0xF3, 0xFB, 0xFB, 0xFF, 0xF5, 0xEF,
    0xFF, 0xFF, 0xF7, 0xFA, 
    0xFF, 0xFF, 0xEE, 0xFA, 0xFE, 0xFB, 0x55, 0xDD, 0xFF, 0x7F, 0xAF, 0xFE,
    0xFF, 0xFB, 0xFB, 0xF5, 
    0xFF, 0xF7, 0xEF, 0xFF, 0xFF, 0xFF, 0xBE, 0xBD, 0xBD, 0xBD, 0xBD, 0x7D,
    0x7B, 0x7B, 0x7B, 0x7B, 
    0xFB, 0xAE, 0xFF, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xF7, 0xDA, 0xB7, 0x61, 
    0xFF, 0xB9, 0x59, 0xF3, 0x73, 0xF3, 0xDF, 0x7F, 0x6F, 0xDF, 0xEF, 0xF7,
    0xEB, 0xEB, 0xD7, 0xFF, 
    0xD7, 0xFF, 0xFF, 0xF7, 0xFE, 0x7F, 0xFB, 0x3E, 0x38, 0x73, 0xF6, 0x7F,
    0xFC, 0xFF, 0xFF, 0xCF, 
    0xFF, 0xB7, 0xFB, 0xB3, 0xB3, 0x67, 0xFF, 0xE7, 0xFD, 0xFF, 0xEF, 0xF6,
    0x7F, 0xB7, 0xBC, 0xF5, 
    0x7B, 0xF6, 0xF7, 0xF5, 0xFF, 0xFF, 0xEF, 0xFF, 0xF7, 0xFF, 0xF7, 0xCE,
    0xE7, 0xFF, 0x9F, 0xFF, 
    0xFF, 0xF5, 0xFE, 0x7D, 0xFF, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xEF, 0xFF, 0xF6, 
    0xCB, 0xDB, 0xEE, 0xFE, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xBE,
    0x1E, 0x3E, 0xFE, 0xFF, 
    0x7D, 0xFE, 0xFF, 0xFF, 0xEF, 0xBF, 0xE7, 0xFF, 0xE3, 0xE3, 0xFF, 0xDF,
    0xE7, 0xFF, 0xFF, 0xFF, 
    0xB8, 0xEF, 0xB7, 0x2F, 0xEE, 0xFF, 0xDF, 0xFF, 0xBF, 0xFF, 0x7F, 0xEF,
    0xEB, 0xBF, 0xA3, 0xD3, 
    0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xBE, 0xFD, 0x3F, 0xCF, 0xFD,
    0xFB, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xAF, 0xFB, 0xBF, 0xBB, 0xBF, 0xDB, 0xFD, 0xFB, 0xFF, 0xFF,
    0xFF, 0xFF, 0x3E, 0xFE, 
    0x3F, 0xBA, 0xBA, 0xFE, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xEF, 0xC3, 0x7F,
    0xB2, 0x9B, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0x3C, 0xFF, 0x3F, 0x3C, 0xFF, 0xFE, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xAF, 0xF3, 0xFE, 0xF3, 0xE3, 0xEB, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xF7,
    0x9A, 0xFE, 0xAF, 0x9E, 
    0xBE, 0xFE, 0xFF, 0xDF, 0xFF, 0xFF, 0x7B, 0xEF, 0xF7, 0xBF, 0xFB, 0xFB,
    0xFB, 0xFF, 0xFF, 0x7F, 
    0xFF, 0xFF, 0xFF, 0xBC, 0xBD, 0xFD, 0xBD, 0xDD, 0x7D, 0x7B, 0x7B, 0x7B,
    0x7B, 0xFB, 0xAE, 0xFF, 
    0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xF7, 0x9A, 0xFF,
    0x9F, 0xFF, 0xAF, 0xEF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xCF, 0xF3, 0xFF, 0xEB, 0xFF, 0xEB, 0xFF,
    0xFF, 0xBF, 0xFF, 0xFF, 
    0xEF, 0xFE, 0xFF, 0x37, 0xFC, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xCF, 0xEF, 0xFD, 0xF3, 
    0xFF, 0xEE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0xFD, 0x2F, 0xFD,
    0xFF, 0xFD, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xEF, 0xCF, 0xFF, 0xF3, 0xBF, 0x69, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFE, 
    0xFB, 0x9F, 0xFF, 0xBF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x87,
    0xFE, 0xDA, 0xEF, 0xCF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xEF, 0xBF, 0xEF, 0xEF, 0xFD,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xEF, 0xFD, 0xFF, 0x7B, 0xFF, 0xEB, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0xEB, 0xF8, 0xFF, 0xEF, 
    0xAF, 0xFF, 0xFF, 0xBD, 0xFF, 0xFF, 0xFF, 0x7F, 0xEE, 0x7F, 0xEF, 0xFF,
    0xBB, 0xFF, 0xBF, 0xFB, 
    0xFF, 0xFF, 0xFF, 0xF7, 0xF6, 0xFB, 0xBD, 0xFD, 0xDD, 0xF5, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xAF, 
    0xFF, 0x5F, 0xF5, 0xDF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6,
    0xF3, 0xFF, 0xDE, 0xFE, 
    0xEF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xDE, 0xDF, 0x5F, 0xDF,
    0xFD, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF,
    0xFF, 0xAF, 0xFF, 0xFF, 
    0xEF, 0xED, 0xFF, 0xDF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xDA, 0xBD, 0xBE,
    0xAE, 0xFE, 0x7F, 0xFD, 
    0xDF, 0xFF, 0xFF, 0x7F, 0xEF, 0xFF, 0xFB, 0xFB, 0xFB, 0x7F, 0xF7, 0xFF,
    0xFF, 0xFF, 0xFF, 0xF7, 
    0xBC, 0xFD, 0xBD, 0xBD, 0xBD, 0xFD, 0x7B, 0x7B, 0x7B, 0x7B, 0xFB, 0xAE,
    0xFF, 0xFF, 0xFD, 0xFF, 
    0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x9F, 0xBF, 0xBF, 0xCF,
    0x7F, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xAF, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0xD7, 0xFE, 0xFF, 0xFF,
    0xBF, 0xE7, 0xFE, 0xBF, 
    0x7F, 0xFC, 0xFF, 0xFF, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0xFF, 0xFB,
    0xFB, 0xFF, 0xFF, 0xDD, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xBD, 0xDF, 0x9D, 0xFD, 0xDF, 0xB9,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xEF, 0xFF, 0xFB, 0xEF, 0xEB, 0xFF, 0xDE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xF6, 0x9F, 0xFF, 0xFC, 
    0xFE, 0xFB, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xDF, 0xFA, 0xCD, 0xCF,
    0xBF, 0x9F, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xF7, 0xFE, 0xBF, 0xFF, 0xDF, 0xEF, 0x5F, 0xFF, 0xFF, 0xFF,
    0xFF, 0x7F, 0x6F, 0xFF, 
    0xBB, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0xFF,
    0x5F, 0xFF, 0xBF, 0xBF, 
    0xF9, 0xFF, 0xFF, 0xFF, 0x7F, 0x6E, 0x7B, 0xFF, 0xEF, 0xFD, 0xEB, 0xDF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xF7, 0xB6, 0x3E, 0xFC, 0xFD, 0xBF, 0x7E, 0xFB, 0xFF, 0xFF, 0xFF, 0xF7,
    0xEF, 0xF7, 0xF3, 0xF7, 
    0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0x35, 0x79, 0xFF,
    0xBF, 0xFC, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xEF, 0xFB, 0x53, 0xDF, 0xFF, 0xEB, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xBC, 
    0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xF5,
    0xFF, 0xF7, 0xFF, 0xFB, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBA, 0xAA, 0xEE, 0xFE, 0x3F, 0x7D,
    0xFD, 0xFF, 0xFF, 0xFF, 
    0x7F, 0xAF, 0x77, 0xFB, 0xFB, 0xFF, 0xFB, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF,
    0xF7, 0xBE, 0xBD, 0xBD, 
    0xBD, 0xBD, 0xFD, 0x7B, 0x7B, 0x7B, 0x7B, 0xFB, 0xAE, 0xFF, 0xEF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFC, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x9A, 0xD9, 0xB8, 0xFF, 0xFF, 0x79, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xCF, 
    0xFB, 0xFF, 0xEB, 0xFF, 0xEB, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xDE,
    0xF8, 0xFB, 0xFE, 0x3F, 
    0xFB, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xAD, 0xBF, 0xFA, 0xFF, 0x73,
    0xDF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x3A, 0xF5, 0xB7, 0xFC, 0x3F, 0xF9, 0xFD, 0xFF, 0xFF, 0xFF,
    0x7F, 0xEF, 0xF3, 0xFF, 
    0xBF, 0xFE, 0xF3, 0x9F, 0xFE, 0xFF, 0xFF, 0xFF, 0xF7, 0x3E, 0xFF, 0xFF,
    0xFF, 0xBF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xD3, 0xFE, 0xDB, 0xFF, 0xDB, 0xDF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0x3E, 0xFF, 0xBF, 0xFF, 0x7F, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F,
    0xF3, 0xFF, 0xED, 0xFF, 
    0xF7, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xF6, 0x3C, 0xFE, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x9F, 0xEF, 0xEF, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x7E, 0xBF, 
    0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBB, 0xEF, 0xDF, 0xF1,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEE, 0x3E, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xBF, 
    0xEF, 0xFD, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF,
    0xFC, 0x3E, 0xFE, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0xEF, 0xF3, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xF7, 0xBA, 0xBE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x7F, 0xAF, 0xFB, 
    0xFB, 0xFD, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xF2, 0xD6, 0xED,
    0xBD, 0xBD, 0xBD, 0x7D, 
    0x7B, 0x7B, 0x7B, 0x7B, 0xFB, 0xAF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x92, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,
    0xAF, 0xEB, 0xEB, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFE, 0x2E, 0xFE, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0x4F, 0xEF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFE, 
    0x3C, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xCE,
    0xC3, 0xFD, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x5D, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xEF, 0xCF, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xF7, 0xEE, 0x3E, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xEF, 0xDF, 0xE2, 0xFF,
    0xFF, 0xFF, 0xFB, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xBE, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x7F, 0xEE, 
    0x5F, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E,
    0x7D, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xF3, 0xFB, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xBF, 0xF7, 0x36, 0xBE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xEF, 0xD3, 0xF6, 
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xEE,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xEF, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xBA, 0xBE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEE,
    0xFB, 0xFA, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xD6, 0xFD, 0xBD, 0xBD, 0xBD,
    0x7D, 0x7B, 0x7B, 0x7B, 
    0x7B, 0xFB, 0xAE, 0xFF, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF7, 0xBA, 0xBF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xEF, 0xEB, 0x6B,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFE, 0xBE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0x4F, 0xEF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF,
    0x3E, 0x6E, 0xFC, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xC3, 0xC9, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0x3E, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xEF, 0xFB, 
    0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE,
    0xFE, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0xEF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFB,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xF6, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFE,
    0xEF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFE, 0xFF, 0xF7, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x7F, 0xFA, 0xEF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xE7, 0xFF, 0xFE, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFE, 0xEF, 0xBF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0xFF, 0xFC, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x7F, 
    0xFE, 0xAE, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7,
    0xF7, 0xFA, 0xFF, 0xFD, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xAF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xF7, 0xBE, 0xBD, 0xBD, 0xBD, 0xBD, 0x7D, 0x7B, 0x7B,
    0x7B, 0x7B, 0xFB, 0xAF, 
    0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCA,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xE7, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xCF, 0xFE, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xDF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xEF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF,
    0xFF, 0xE7, 0xF2, 0xFC, 
    0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xAE, 0xEF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x7E, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xEF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF,
    0xFE, 0xFE, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xEF, 0xDD, 0xFE, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xAF, 0xEF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBA, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFA, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xF6, 0x9C, 0xBD, 0xBD, 0xBD, 0xBD, 0x7D, 0x7B, 0x7B, 0x7B, 0x7B, 0xFB,
    0xAE, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x7A, 0xFF, 0xFF, 0xFF,
    0xFF, 0xDF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x6F, 0xEF, 0xF7, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF7, 0xFE, 
    0xFE, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xEB,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x9E, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFE, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xEF, 0xCB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFD, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xBE, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xEF, 
    0xEF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFB, 0xAF, 0x7F, 0xFF, 
    0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xEF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xBF, 0xFF, 
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAE,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x7F, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF7, 0xBC, 0xBD, 
    0xBD, 0xBD, 0xBD, 0x7D, 0x7B, 0x7B, 0x7B, 0x7B, 0xFB, 0xAF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x7F, 
    0xAF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF,
    0xFE, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF,
    0xFF, 0xFF, 0xEF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xBF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xEF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFE, 0xFF, 0x9F, 0x9F,
    0x9F, 0x3F, 0x3F, 0x3F, 
    0x3F, 0x3F, 0xFF, 0xEF, 0xDF, 0xDF, 0xDF, 0xDF, 0xCF, 0xB7, 0xBF, 0xBF,
    0xBF, 0xBF, 0xFF, 0xBC, 
    0xB9, 0x9D, 0xBD, 0xBD, 0x7D, 0x7B, 0x7B, 0x7B, 0x7B, 0xFB, 0xEF, 0xD7,
    0xF5, 0xF3, 0xF1, 0xD1, 
    0x65, 0xE3, 0xE3, 0xE3, 0xA3, 0xFF, 0xFE, 0x7F, 0xFE, 0xDE, 0xDE, 0xFF,
    0xBD, 0xBD, 0xBD, 0xBD, 
    0xDF, 0xEF, 0xFB, 0xF7, 0xF3, 0xF3, 0xF3, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7,
    0xFB, 0xFE, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    
    };
