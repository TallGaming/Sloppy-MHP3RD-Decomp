/* Purpose: retain the supported field and call-flow view for this incomplete target. */
/* This is not a whole-function candidate. */
typedef unsigned char u8;
typedef unsigned short u16;

struct Input_0885e034 {
    u8 unknown_00[6];
    u16 table_index_06;
    u16 table_index_08;
    u16 table_index_0a;
    u8 unknown_0c[5];
};

struct Output_0885e034 {
    u16 selected_00;
    u16 selected_02;
    u16 selected_04;
};

/* Registered C proves that this returns a table-record address or zero. */
extern int FUN_0885ca20(unsigned int unused, unsigned int index);

/*
 * Supported target flow: lane 1 is Input_0885e034 and lane 2 is
 * Output_0885e034.  The target passes zero and each of the three table
 * indices to FUN_0885ca20.  It reads byte zero of each returned record and
 * conditionally writes the corresponding output halfword.  The full record
 * byte meaning and the loop/control case are unresolved.
 */
