# Chapter 20 - Exercise 16

Starting with the 386 processor, x86 CPUs have 32-bit registers named EAX, EBX, ECX, and EDX. The second half (the least significant bits) of these registers is the same as AX, BX, CX, and DX, respectively. Modify the `regs` union so that it includes these registers as well as the older ones. Your union should be set up so that modifying EAX changes AX and modifying AX changes the second half of EAX. (The other new registers will work in a similar fashion.) You’ll need to add some “dummy” members to the word and byte structures, corresponding to the other half of EAX, EBX, ECX, and EDX. Declare the type of the new registers to be DWORD (double word), which should be defined as unsigned long. Don’t forget that the x86 architecture is little-endian.

---

The `regs` union for 16-bit registers:

```
typedef unsigned char BYTE;
typedef unsigned short WORD;

union {
    struct {
        /* 16-bit registers */
        WORD ax, 
             bx, 
             cx, 
             dx;
    } word;
    struct {
        /* 8-bit registers */
        BYTE al, ah, 
             bl, bh, 
             cl, ch, 
             dl, dh;
    } byte;
} regs;
```

The modified version for 32-bit registers:

```
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;

union {
    struct {
        /* 32-bit registers */
        DWORD eax, 
              ebx, 
              ecx, 
              edx;
    } dword;
    struct {
        /* 16-bit registers */
        WORD axl, axh,
             bxl, bxh,
             cxl, cxh,
             dxl, dxh;
    } word;
    struct {
        /* 8-bit registers */
        BYTE axll, axlh, axhl, axhh,
             bxll, bxlh, bxhl, bxhh,
             cxll, cxlh, cxhl, cxhh,
             dxll, dxlh, dxhl, dxhh;
    } byte;
} regs;
```
