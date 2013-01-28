/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#ifndef ti_sdo_io__
#define ti_sdo_io__


/*
 * ======== module ti.sdo.io.DriverTypes ========
 */

typedef struct ti_sdo_io_DriverTypes_Packet ti_sdo_io_DriverTypes_Packet;

/*
 * ======== module ti.sdo.io.DriverTable ========
 */

typedef struct ti_sdo_io_DriverTable_Entry ti_sdo_io_DriverTable_Entry;
typedef struct ti_sdo_io_DriverTable_Module_State ti_sdo_io_DriverTable_Module_State;

/*
 * ======== module ti.sdo.io.Stream ========
 */

typedef struct ti_sdo_io_Stream_Entry ti_sdo_io_Stream_Entry;
typedef struct ti_sdo_io_Stream_Module_State ti_sdo_io_Stream_Module_State;
typedef struct ti_sdo_io_Stream_Params ti_sdo_io_Stream_Params;
typedef struct ti_sdo_io_Stream_Object ti_sdo_io_Stream_Object;
typedef struct ti_sdo_io_Stream_Struct ti_sdo_io_Stream_Struct;
typedef ti_sdo_io_Stream_Object* ti_sdo_io_Stream_Handle;
typedef struct ti_sdo_io_Stream_Object__ ti_sdo_io_Stream_Instance_State;
typedef ti_sdo_io_Stream_Object* ti_sdo_io_Stream_Instance;

/*
 * ======== interface ti.sdo.io.IDriver ========
 */

typedef struct ti_sdo_io_IDriver_Fxns__ ti_sdo_io_IDriver_Fxns__;
typedef const ti_sdo_io_IDriver_Fxns__* ti_sdo_io_IDriver_Module;
typedef struct ti_sdo_io_IDriver_Params ti_sdo_io_IDriver_Params;
typedef struct ti_sdo_io_IDriver___Object { ti_sdo_io_IDriver_Fxns__* __fxns; xdc_Bits32 __label; } *ti_sdo_io_IDriver_Handle;

/*
 * ======== interface ti.sdo.io.IConverter ========
 */

typedef struct ti_sdo_io_IConverter_Fxns__ ti_sdo_io_IConverter_Fxns__;
typedef const ti_sdo_io_IConverter_Fxns__* ti_sdo_io_IConverter_Module;
typedef struct ti_sdo_io_IConverter_Params ti_sdo_io_IConverter_Params;
typedef struct ti_sdo_io_IConverter___Object { ti_sdo_io_IConverter_Fxns__* __fxns; xdc_Bits32 __label; } *ti_sdo_io_IConverter_Handle;


#endif /* ti_sdo_io__ */ 
