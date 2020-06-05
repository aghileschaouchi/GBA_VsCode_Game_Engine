#ifndef REGISTERS_H
#define REGISTERS_H

/*
* base address for external (on-board) WorkRAM (WRAM)
  256k in size
*/
#define EWRAM       0x02000000
#define EWRAM_END   0x02040000 //from there to 0x02FFFFFF is not used

/*
* base address for internal (on-chip) WRAM
* 32k in size
*/
#define IWRAM       0x03000000

/*
* base address for I/O or harware registers
* 
*/
#define REG_BASE    0x04000000

/*
* base address for video ram (VRAM)
* 96k in size
*/
#define VRAM        0x06000000

/*
* base address for cart save RAM (SRAM)
* 64k max in size
*/
#define SRAM        0x0E000000

#endif