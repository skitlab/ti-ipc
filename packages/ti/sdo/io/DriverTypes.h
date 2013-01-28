/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     FUNCTION DECLARATIONS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_io_DriverTypes__include
#define ti_sdo_io_DriverTypes__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_DriverTypes__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_DriverTypes___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sdo/io/DriverTypes__prologue.h>
#include <ti/sdo/io/package/package.defs.h>

#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/IModule.h>
#include <ti/sdo/utils/List.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* PacketCmd */

/* ControlCmd */

/* Packet */
struct ti_sdo_io_DriverTypes_Packet {
    ti_sdo_utils_List_Elem link;
    xdc_Ptr addr;
    xdc_SizeT origSize;
    xdc_SizeT size;
    xdc_UArg arg;
    ti_sdo_io_DriverTypes_PacketCmd cmd;
    xdc_runtime_Error_Id error;
    xdc_UArg misc;
    xdc_Int status;
    xdc_UArg drvArg;
};

/* DoneFxn */
typedef xdc_Void (*ti_sdo_io_DriverTypes_DoneFxn)(xdc_UArg, ti_sdo_io_DriverTypes_Packet*);

/* COMPLETED */
#define ti_sdo_io_DriverTypes_COMPLETED (0x0)

/* PENDING */
#define ti_sdo_io_DriverTypes_PENDING (0x1)

/* ERROR */
#define ti_sdo_io_DriverTypes_ERROR (0x2)

/* IOMode */
enum ti_sdo_io_DriverTypes_IOMode {
    ti_sdo_io_DriverTypes_INPUT,
    ti_sdo_io_DriverTypes_OUTPUT,
    ti_sdo_io_DriverTypes_INOUT
};
typedef enum ti_sdo_io_DriverTypes_IOMode ti_sdo_io_DriverTypes_IOMode;

/* NOERROR */
#define ti_sdo_io_DriverTypes_NOERROR (0)


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_io_DriverTypes_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__diagsEnabled ti_sdo_io_DriverTypes_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_io_DriverTypes_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__diagsIncluded ti_sdo_io_DriverTypes_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_io_DriverTypes_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__diagsMask ti_sdo_io_DriverTypes_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_io_DriverTypes_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__gateObj ti_sdo_io_DriverTypes_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_io_DriverTypes_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__gatePrms ti_sdo_io_DriverTypes_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_io_DriverTypes_Module__id;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__id ti_sdo_io_DriverTypes_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_io_DriverTypes_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerDefined ti_sdo_io_DriverTypes_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_io_DriverTypes_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerObj ti_sdo_io_DriverTypes_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_io_DriverTypes_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn0 ti_sdo_io_DriverTypes_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_io_DriverTypes_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn1 ti_sdo_io_DriverTypes_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_io_DriverTypes_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn2 ti_sdo_io_DriverTypes_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_io_DriverTypes_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn4 ti_sdo_io_DriverTypes_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_io_DriverTypes_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn8 ti_sdo_io_DriverTypes_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_io_DriverTypes_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Module__startupDoneFxn ti_sdo_io_DriverTypes_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_io_DriverTypes_Object__count;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Object__count ti_sdo_io_DriverTypes_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_io_DriverTypes_Object__heap;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Object__heap ti_sdo_io_DriverTypes_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_io_DriverTypes_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Object__sizeof ti_sdo_io_DriverTypes_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_io_DriverTypes_Object__table;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_Object__table ti_sdo_io_DriverTypes_Object__table__C;

/* READ */
#define ti_sdo_io_DriverTypes_READ (ti_sdo_io_DriverTypes_READ__C)
typedef ti_sdo_io_DriverTypes_PacketCmd CT__ti_sdo_io_DriverTypes_READ;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_READ ti_sdo_io_DriverTypes_READ__C;

/* WRITE */
#define ti_sdo_io_DriverTypes_WRITE (ti_sdo_io_DriverTypes_WRITE__C)
typedef ti_sdo_io_DriverTypes_PacketCmd CT__ti_sdo_io_DriverTypes_WRITE;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_WRITE ti_sdo_io_DriverTypes_WRITE__C;

/* CHAN_ABORT */
#define ti_sdo_io_DriverTypes_CHAN_ABORT (ti_sdo_io_DriverTypes_CHAN_ABORT__C)
typedef ti_sdo_io_DriverTypes_ControlCmd CT__ti_sdo_io_DriverTypes_CHAN_ABORT;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_CHAN_ABORT ti_sdo_io_DriverTypes_CHAN_ABORT__C;

/* CHAN_RESET */
#define ti_sdo_io_DriverTypes_CHAN_RESET (ti_sdo_io_DriverTypes_CHAN_RESET__C)
typedef ti_sdo_io_DriverTypes_ControlCmd CT__ti_sdo_io_DriverTypes_CHAN_RESET;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_CHAN_RESET ti_sdo_io_DriverTypes_CHAN_RESET__C;

/* DEVICE_RESET */
#define ti_sdo_io_DriverTypes_DEVICE_RESET (ti_sdo_io_DriverTypes_DEVICE_RESET__C)
typedef ti_sdo_io_DriverTypes_ControlCmd CT__ti_sdo_io_DriverTypes_DEVICE_RESET;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_DEVICE_RESET ti_sdo_io_DriverTypes_DEVICE_RESET__C;

/* EBADIO */
#define ti_sdo_io_DriverTypes_EBADIO (ti_sdo_io_DriverTypes_EBADIO__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_EBADIO;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_EBADIO ti_sdo_io_DriverTypes_EBADIO__C;

/* EBADMODE */
#define ti_sdo_io_DriverTypes_EBADMODE (ti_sdo_io_DriverTypes_EBADMODE__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_EBADMODE;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_EBADMODE ti_sdo_io_DriverTypes_EBADMODE__C;

/* ENOTIMPL */
#define ti_sdo_io_DriverTypes_ENOTIMPL (ti_sdo_io_DriverTypes_ENOTIMPL__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_ENOTIMPL;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_ENOTIMPL ti_sdo_io_DriverTypes_ENOTIMPL__C;

/* EBADARGS */
#define ti_sdo_io_DriverTypes_EBADARGS (ti_sdo_io_DriverTypes_EBADARGS__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_EBADARGS;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_EBADARGS ti_sdo_io_DriverTypes_EBADARGS__C;

/* EINUSE */
#define ti_sdo_io_DriverTypes_EINUSE (ti_sdo_io_DriverTypes_EINUSE__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_EINUSE;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_EINUSE ti_sdo_io_DriverTypes_EINUSE__C;

/* EINVALIDDEV */
#define ti_sdo_io_DriverTypes_EINVALIDDEV (ti_sdo_io_DriverTypes_EINVALIDDEV__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_EINVALIDDEV;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_EINVALIDDEV ti_sdo_io_DriverTypes_EINVALIDDEV__C;

/* EABORTED */
#define ti_sdo_io_DriverTypes_EABORTED (ti_sdo_io_DriverTypes_EABORTED__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_DriverTypes_EABORTED;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_EABORTED ti_sdo_io_DriverTypes_EABORTED__C;

/* LM_startIO */
#define ti_sdo_io_DriverTypes_LM_startIO (ti_sdo_io_DriverTypes_LM_startIO__C)
typedef xdc_runtime_Log_Event CT__ti_sdo_io_DriverTypes_LM_startIO;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_LM_startIO ti_sdo_io_DriverTypes_LM_startIO__C;

/* LM_ioComplete */
#define ti_sdo_io_DriverTypes_LM_ioComplete (ti_sdo_io_DriverTypes_LM_ioComplete__C)
typedef xdc_runtime_Log_Event CT__ti_sdo_io_DriverTypes_LM_ioComplete;
__extern __FAR__ const CT__ti_sdo_io_DriverTypes_LM_ioComplete ti_sdo_io_DriverTypes_LM_ioComplete__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_io_DriverTypes_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_io_DriverTypes_Module__startupDone__S, "ti_sdo_io_DriverTypes_Module__startupDone")
__extern xdc_Bool ti_sdo_io_DriverTypes_Module__startupDone__S( void );


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_io_DriverTypes_Module_startupDone() ti_sdo_io_DriverTypes_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_io_DriverTypes_Object_heap() ti_sdo_io_DriverTypes_Object__heap__C

/* Module_heap */
#define ti_sdo_io_DriverTypes_Module_heap() ti_sdo_io_DriverTypes_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_io_DriverTypes_Module__id ti_sdo_io_DriverTypes_Module_id( void ) 
{
    return ti_sdo_io_DriverTypes_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_io_DriverTypes_Module_hasMask( void ) 
{
    return ti_sdo_io_DriverTypes_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_io_DriverTypes_Module_getMask( void ) 
{
    return ti_sdo_io_DriverTypes_Module__diagsMask__C != NULL ? *ti_sdo_io_DriverTypes_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_io_DriverTypes_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_io_DriverTypes_Module__diagsMask__C != NULL) *ti_sdo_io_DriverTypes_Module__diagsMask__C = mask;
}


/*
 * ======== EPILOGUE ========
 */

#include <ti/sdo/io/DriverTypes__epilogue.h>

#ifdef ti_sdo_io_DriverTypes__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_DriverTypes__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_io_DriverTypes__internalaccess))

#ifndef ti_sdo_io_DriverTypes__include_state
#define ti_sdo_io_DriverTypes__include_state


#endif /* ti_sdo_io_DriverTypes__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_DriverTypes__nolocalnames)

#ifndef ti_sdo_io_DriverTypes__localnames__done
#define ti_sdo_io_DriverTypes__localnames__done

/* module prefix */
#define DriverTypes_PacketCmd ti_sdo_io_DriverTypes_PacketCmd
#define DriverTypes_ControlCmd ti_sdo_io_DriverTypes_ControlCmd
#define DriverTypes_Packet ti_sdo_io_DriverTypes_Packet
#define DriverTypes_DoneFxn ti_sdo_io_DriverTypes_DoneFxn
#define DriverTypes_COMPLETED ti_sdo_io_DriverTypes_COMPLETED
#define DriverTypes_PENDING ti_sdo_io_DriverTypes_PENDING
#define DriverTypes_ERROR ti_sdo_io_DriverTypes_ERROR
#define DriverTypes_IOMode ti_sdo_io_DriverTypes_IOMode
#define DriverTypes_NOERROR ti_sdo_io_DriverTypes_NOERROR
#define DriverTypes_INPUT ti_sdo_io_DriverTypes_INPUT
#define DriverTypes_OUTPUT ti_sdo_io_DriverTypes_OUTPUT
#define DriverTypes_INOUT ti_sdo_io_DriverTypes_INOUT
#define DriverTypes_READ ti_sdo_io_DriverTypes_READ
#define DriverTypes_WRITE ti_sdo_io_DriverTypes_WRITE
#define DriverTypes_CHAN_ABORT ti_sdo_io_DriverTypes_CHAN_ABORT
#define DriverTypes_CHAN_RESET ti_sdo_io_DriverTypes_CHAN_RESET
#define DriverTypes_DEVICE_RESET ti_sdo_io_DriverTypes_DEVICE_RESET
#define DriverTypes_EBADIO ti_sdo_io_DriverTypes_EBADIO
#define DriverTypes_EBADMODE ti_sdo_io_DriverTypes_EBADMODE
#define DriverTypes_ENOTIMPL ti_sdo_io_DriverTypes_ENOTIMPL
#define DriverTypes_EBADARGS ti_sdo_io_DriverTypes_EBADARGS
#define DriverTypes_EINUSE ti_sdo_io_DriverTypes_EINUSE
#define DriverTypes_EINVALIDDEV ti_sdo_io_DriverTypes_EINVALIDDEV
#define DriverTypes_EABORTED ti_sdo_io_DriverTypes_EABORTED
#define DriverTypes_LM_startIO ti_sdo_io_DriverTypes_LM_startIO
#define DriverTypes_LM_ioComplete ti_sdo_io_DriverTypes_LM_ioComplete
#define DriverTypes_Module_name ti_sdo_io_DriverTypes_Module_name
#define DriverTypes_Module_id ti_sdo_io_DriverTypes_Module_id
#define DriverTypes_Module_startup ti_sdo_io_DriverTypes_Module_startup
#define DriverTypes_Module_startupDone ti_sdo_io_DriverTypes_Module_startupDone
#define DriverTypes_Module_hasMask ti_sdo_io_DriverTypes_Module_hasMask
#define DriverTypes_Module_getMask ti_sdo_io_DriverTypes_Module_getMask
#define DriverTypes_Module_setMask ti_sdo_io_DriverTypes_Module_setMask
#define DriverTypes_Object_heap ti_sdo_io_DriverTypes_Object_heap
#define DriverTypes_Module_heap ti_sdo_io_DriverTypes_Module_heap

#endif /* ti_sdo_io_DriverTypes__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

