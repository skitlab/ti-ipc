/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#ifndef ti_sdo_ipc_SharedRegion__INTERNAL__
#define ti_sdo_ipc_SharedRegion__INTERNAL__

#ifndef ti_sdo_ipc_SharedRegion__internalaccess
#define ti_sdo_ipc_SharedRegion__internalaccess
#endif

#include <ti/sdo/ipc/SharedRegion.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* attach */
#undef ti_sdo_ipc_SharedRegion_attach
#define ti_sdo_ipc_SharedRegion_attach ti_sdo_ipc_SharedRegion_attach__F

/* clearReservedMemory */
#undef ti_sdo_ipc_SharedRegion_clearReservedMemory
#define ti_sdo_ipc_SharedRegion_clearReservedMemory ti_sdo_ipc_SharedRegion_clearReservedMemory__F

/* detach */
#undef ti_sdo_ipc_SharedRegion_detach
#define ti_sdo_ipc_SharedRegion_detach ti_sdo_ipc_SharedRegion_detach__F

/* reserveMemory */
#undef ti_sdo_ipc_SharedRegion_reserveMemory
#define ti_sdo_ipc_SharedRegion_reserveMemory ti_sdo_ipc_SharedRegion_reserveMemory__F

/* resetInternalFields */
#undef ti_sdo_ipc_SharedRegion_resetInternalFields
#define ti_sdo_ipc_SharedRegion_resetInternalFields ti_sdo_ipc_SharedRegion_resetInternalFields__F

/* start */
#undef ti_sdo_ipc_SharedRegion_start
#define ti_sdo_ipc_SharedRegion_start ti_sdo_ipc_SharedRegion_start__F

/* stop */
#undef ti_sdo_ipc_SharedRegion_stop
#define ti_sdo_ipc_SharedRegion_stop ti_sdo_ipc_SharedRegion_stop__F

/* checkOverlap */
#define SharedRegion_checkOverlap ti_sdo_ipc_SharedRegion_checkOverlap__I

/* Module_startup */
#undef ti_sdo_ipc_SharedRegion_Module_startup
#define ti_sdo_ipc_SharedRegion_Module_startup ti_sdo_ipc_SharedRegion_Module_startup__F

/* Instance_init */
#undef ti_sdo_ipc_SharedRegion_Instance_init
#define ti_sdo_ipc_SharedRegion_Instance_init ti_sdo_ipc_SharedRegion_Instance_init__F

/* Instance_finalize */
#undef ti_sdo_ipc_SharedRegion_Instance_finalize
#define ti_sdo_ipc_SharedRegion_Instance_finalize ti_sdo_ipc_SharedRegion_Instance_finalize__F

/* module */
#define SharedRegion_module ((ti_sdo_ipc_SharedRegion_Module_State *)(xdc__MODOBJADDR__(ti_sdo_ipc_SharedRegion_Module__state__V)))
#if !defined(__cplusplus) || !defined(ti_sdo_ipc_SharedRegion__cplusplus)
#define module ((ti_sdo_ipc_SharedRegion_Module_State *)(xdc__MODOBJADDR__(ti_sdo_ipc_SharedRegion_Module__state__V)))
#endif
/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_ipc_SharedRegion_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_ipc_SharedRegion_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_ipc_SharedRegion_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_ipc_SharedRegion_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_ipc_SharedRegion_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_ipc_SharedRegion_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_ipc_SharedRegion_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_ipc_SharedRegion_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_ipc_SharedRegion_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_ipc_SharedRegion_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_ipc_SharedRegion_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_ipc_SharedRegion_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_ipc_SharedRegion_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_ipc_SharedRegion_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_ipc_SharedRegion_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_ipc_SharedRegion_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_ipc_SharedRegion_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_ipc_SharedRegion_Module_GateProxy_query


#endif /* ti_sdo_ipc_SharedRegion__INTERNAL____ */
