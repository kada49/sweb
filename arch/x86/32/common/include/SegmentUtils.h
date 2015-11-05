/**
 * @file SegmentUtils.h
 *
 */

#ifndef _SEGMENT_UTILS_H_
#define _SEGMENT_UTILS_H_

#include "types.h"

typedef struct {
    uint16  backlink; //0
    uint16  pad0;
    uint32 esp0;      //1
    uint16  ss0;      //2
    uint16  pad1;
    uint32 esp1;
    uint16  ss1;
    uint16  pad2;
    uint32 esp2;
    uint16  ss2;
    uint16  pad3;
    uint32 cr3;
    uint32 eip;
    uint32 eflags;
    uint32 eax;
    uint32 ecx;
    uint32 edx;
    uint32 ebx;
    uint32 esp;
    uint32 ebp;
    uint32 esi;
    uint32 edi;
    uint16  es;
    uint16  pad4;
    uint16  cs;
    uint16  pad5;
    uint16  ss;
    uint16  pad6;
    uint16  ds;
    uint16  pad7;
    uint16  fs;
    uint16  pad8;
    uint16  gs;
    uint16  pad9;
    uint16  ldt;
    uint16  padA;
    uint16  debugtrap;
    uint16  iobase;
} __attribute__((__packed__))TSS;

class SegmentUtils
{
public:

  /**
   * initialisation
   */
  static void initialise();

  static void initialiseCore(uint32 core, TSS* &tss);

  static void load_gs(int8 core);

  /**
   * load
   */
  static void load(int8 offset);

};

#endif
