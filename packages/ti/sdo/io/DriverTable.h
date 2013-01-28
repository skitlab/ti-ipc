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

#ifndef ti_sdo_io_DriverTable__include
#define ti_sdo_io_DriverTable__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_DriverTable__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_DriverTable___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sdo/io/package/package.defs.h>

#include <ti/sdo/io/IDriver.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/IGateProvider.h>
#include <xdc/runtime/IModule.h>
#include <ti/sdo/utils/NameServer.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* Entry */
struct ti_sdo_io_DriverTable_Entry {
    xdc_String name;
    xdc_Ptr handle;
};


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_io_DriverTable_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__diagsEnabled ti_sdo_io_DriverTable_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_io_DriverTable_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__diagsIncluded ti_sdo_io_DriverTable_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_io_DriverTable_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__diagsMask ti_sdo_io_DriverTable_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_io_DriverTable_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__gateObj ti_sdo_io_DriverTable_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_io_DriverTable_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__gatePrms ti_sdo_io_DriverTable_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_io_DriverTable_Module__id;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__id ti_sdo_io_DriverTable_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_io_DriverTable_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerDefined ti_sdo_io_DriverTable_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_io_DriverTable_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerObj ti_sdo_io_DriverTable_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_io_DriverTable_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn0 ti_sdo_io_DriverTable_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_io_DriverTable_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn1 ti_sdo_io_DriverTable_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_io_DriverTable_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn2 ti_sdo_io_DriverTable_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_io_DriverTable_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn4 ti_sdo_io_DriverTable_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_io_DriverTable_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn8 ti_sdo_io_DriverTable_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_io_DriverTable_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Module__startupDoneFxn ti_sdo_io_DriverTable_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_io_DriverTable_Object__count;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Object__count ti_sdo_io_DriverTable_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_io_DriverTable_Object__heap;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Object__heap ti_sdo_io_DriverTable_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_io_DriverTable_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Object__sizeof ti_sdo_io_DriverTable_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_io_DriverTable_Object__table;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_Object__table ti_sdo_io_DriverTable_Object__table__C;

/* maxRuntimeEntries */
#ifdef ti_sdo_io_DriverTable_maxRuntimeEntries__D
#define ti_sdo_io_DriverTable_maxRuntimeEntries (ti_sdo_io_DriverTable_maxRuntimeEntries__D)
#else
#define ti_sdo_io_DriverTable_maxRuntimeEntries (ti_sdo_io_DriverTable_maxRuntimeEntries__C)
typedef xdc_UInt CT__ti_sdo_io_DriverTable_maxRuntimeEntries;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_maxRuntimeEntries ti_sdo_io_DriverTable_maxRuntimeEntries__C;
#endif

/* gate */
#define ti_sdo_io_DriverTable_gate (ti_sdo_io_DriverTable_gate__C)
typedef xdc_runtime_IGateProvider_Handle CT__ti_sdo_io_DriverTable_gate;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_gate ti_sdo_io_DriverTable_gate__C;

/* maxNameLen */
#ifdef ti_sdo_io_DriverTable_maxNameLen__D
#define ti_sdo_io_DriverTable_maxNameLen (ti_sdo_io_DriverTable_maxNameLen__D)
#else
#define ti_sdo_io_DriverTable_maxNameLen (ti_sdo_io_DriverTable_maxNameLen__C)
typedef xdc_UInt CT__ti_sdo_io_DriverTable_maxNameLen;
__extern __FAR__ const CT__ti_sdo_io_DriverTable_maxNameLen ti_sdo_io_DriverTable_maxNameLen__C;
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_io_DriverTable_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_io_DriverTable_Module__startupDone__S, "ti_sdo_io_DriverTable_Module__startupDone")
__extern xdc_Bool ti_sdo_io_DriverTable_Module__startupDone__S( void );

/* add__E */
#define ti_sdo_io_DriverTable_add ti_sdo_io_DriverTable_add__E
xdc__CODESECT(ti_sdo_io_DriverTable_add__E, "ti_sdo_io_DriverTable_add")
__extern xdc_Void ti_sdo_io_DriverTable_add__E( xdc_String name, ti_sdo_io_IDriver_Handle driverHandle, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_DriverTable_add__F, "ti_sdo_io_DriverTable_add")
__extern xdc_Void ti_sdo_io_DriverTable_add__F( xdc_String name, ti_sdo_io_IDriver_Handle driverHandle, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_DriverTable_add__R( xdc_String name, ti_sdo_io_IDriver_Handle driverHandle, xdc_runtime_Error_Block* eb );

/* remove__E */
#define ti_sdo_io_DriverTable_remove ti_sdo_io_DriverTable_remove__E
xdc__CODESECT(ti_sdo_io_DriverTable_remove__E, "ti_sdo_io_DriverTable_remove")
__extern xdc_Void ti_sdo_io_DriverTable_remove__E( xdc_String name, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_DriverTable_remove__F, "ti_sdo_io_DriverTable_remove")
__extern xdc_Void ti_sdo_io_DriverTable_remove__F( xdc_String name, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_DriverTable_remove__R( xdc_String name, xdc_runtime_Error_Block* eb );

/* match__E */
#define ti_sdo_io_DriverTable_match ti_sdo_io_DriverTable_match__E
xdc__CODESECT(ti_sdo_io_DriverTable_match__E, "ti_sdo_io_DriverTable_match")
__extern xdc_Int ti_sdo_io_DriverTable_match__E( xdc_String name, ti_sdo_io_IDriver_Handle* handle, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_DriverTable_match__F, "ti_sdo_io_DriverTable_match")
__extern xdc_Int ti_sdo_io_DriverTable_match__F( xdc_String name, ti_sdo_io_IDriver_Handle* handle, xdc_runtime_Error_Block* eb );
__extern xdc_Int ti_sdo_io_DriverTable_match__R( xdc_String name, ti_sdo_io_IDriver_Handle* handle, xdc_runtime_Error_Block* eb );


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_io_DriverTable_Module_startupDone() ti_sdo_io_DriverTable_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_io_DriverTable_Object_heap() ti_sdo_io_DriverTable_Object__heap__C

/* Module_heap */
#define ti_sdo_io_DriverTable_Module_heap() ti_sdo_io_DriverTable_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_io_DriverTable_Module__id ti_sdo_io_DriverTable_Module_id( void ) 
{
    return ti_sdo_io_DriverTable_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_io_DriverTable_Module_hasMask( void ) 
{
    return ti_sdo_io_DriverTable_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_io_DriverTable_Module_getMask( void ) 
{
    return ti_sdo_io_DriverTable_Module__diagsMask__C != NULL ? *ti_sdo_io_DriverTable_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_io_DriverTable_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_io_DriverTable_Module__diagsMask__C != NULL) *ti_sdo_io_DriverTable_Module__diagsMask__C = mask;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_DriverTable__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_DriverTable__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_io_DriverTable__internalaccess))

#ifndef ti_sdo_io_DriverTable__include_state
#define ti_sdo_io_DriverTable__include_state

/* Module_State */
struct ti_sdo_io_DriverTable_Module_State {
    ti_sdo_utils_NameServer_Handle drvTable;
};

/* Module__state__V */
extern struct ti_sdo_io_DriverTable_Module_State__ ti_sdo_io_DriverTable_Module__state__V;

#endif /* ti_sdo_io_DriverTable__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_DriverTable__nolocalnames)

#ifndef ti_sdo_io_DriverTable__localnames__done
#define ti_sdo_io_DriverTable__localnames__done

/* module prefix */
#define DriverTable_Entry ti_sdo_io_DriverTable_Entry
#define DriverTable_Module_State ti_sdo_io_DriverTable_Module_State
#define DriverTable_maxRuntimeEntries ti_sdo_io_DriverTable_maxRuntimeEntries
#define DriverTable_gate ti_sdo_io_DriverTable_gate
#define DriverTable_maxNameLen ti_sdo_io_DriverTable_maxNameLen
#define DriverTable_add ti_sdo_io_DriverTable_add
#define DriverTable_remove ti_sdo_io_DriverTable_remove
#define DriverTable_match ti_sdo_io_DriverTable_match
#define DriverTable_Module_name ti_sdo_io_DriverTable_Module_name
#define DriverTable_Module_id ti_sdo_io_DriverTable_Module_id
#define DriverTable_Module_startup ti_sdo_io_DriverTable_Module_startup
#define DriverTable_Module_startupDone ti_sdo_io_DriverTable_Module_startupDone
#define DriverTable_Module_hasMask ti_sdo_io_DriverTable_Module_hasMask
#define DriverTable_Module_getMask ti_sdo_io_DriverTable_Module_getMask
#define DriverTable_Module_setMask ti_sdo_io_DriverTable_Module_setMask
#define DriverTable_Object_heap ti_sdo_io_DriverTable_Object_heap
#define DriverTable_Module_heap ti_sdo_io_DriverTable_Module_heap

#endif /* ti_sdo_io_DriverTable__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

