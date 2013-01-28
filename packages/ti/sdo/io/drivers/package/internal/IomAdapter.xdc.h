/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#ifndef ti_sdo_io_drivers_IomAdapter__INTERNAL__
#define ti_sdo_io_drivers_IomAdapter__INTERNAL__

#ifndef ti_sdo_io_drivers_IomAdapter__internalaccess
#define ti_sdo_io_drivers_IomAdapter__internalaccess
#endif

#include <ti/sdo/io/drivers/IomAdapter.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* open */
#undef ti_sdo_io_drivers_IomAdapter_open
#define ti_sdo_io_drivers_IomAdapter_open ti_sdo_io_drivers_IomAdapter_open__F

/* close */
#undef ti_sdo_io_drivers_IomAdapter_close
#define ti_sdo_io_drivers_IomAdapter_close ti_sdo_io_drivers_IomAdapter_close__F

/* submit */
#undef ti_sdo_io_drivers_IomAdapter_submit
#define ti_sdo_io_drivers_IomAdapter_submit ti_sdo_io_drivers_IomAdapter_submit__F

/* control */
#undef ti_sdo_io_drivers_IomAdapter_control
#define ti_sdo_io_drivers_IomAdapter_control ti_sdo_io_drivers_IomAdapter_control__F

/* driverCallback */
#define IomAdapter_driverCallback ti_sdo_io_drivers_IomAdapter_driverCallback__I

/* postInit */
#define IomAdapter_postInit ti_sdo_io_drivers_IomAdapter_postInit__I

/* mapStatus */
#define IomAdapter_mapStatus ti_sdo_io_drivers_IomAdapter_mapStatus__I

/* Module_startup */
#undef ti_sdo_io_drivers_IomAdapter_Module_startup
#define ti_sdo_io_drivers_IomAdapter_Module_startup ti_sdo_io_drivers_IomAdapter_Module_startup__F

/* Instance_init */
#undef ti_sdo_io_drivers_IomAdapter_Instance_init
#define ti_sdo_io_drivers_IomAdapter_Instance_init ti_sdo_io_drivers_IomAdapter_Instance_init__F

/* Instance_finalize */
#undef ti_sdo_io_drivers_IomAdapter_Instance_finalize
#define ti_sdo_io_drivers_IomAdapter_Instance_finalize ti_sdo_io_drivers_IomAdapter_Instance_finalize__F

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_io_drivers_IomAdapter_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_io_drivers_IomAdapter_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_io_drivers_IomAdapter_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_io_drivers_IomAdapter_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_io_drivers_IomAdapter_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_io_drivers_IomAdapter_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_io_drivers_IomAdapter_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_io_drivers_IomAdapter_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_io_drivers_IomAdapter_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_io_drivers_IomAdapter_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_io_drivers_IomAdapter_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_io_drivers_IomAdapter_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sdo.io.drivers.IomAdapter"
typedef char ti_sdo_io_drivers_IomAdapter_Object__sizingError[sizeof(ti_sdo_io_drivers_IomAdapter_Object) > sizeof(ti_sdo_io_drivers_IomAdapter_Struct) ? -1 : 1];


#endif /* ti_sdo_io_drivers_IomAdapter__INTERNAL____ */
