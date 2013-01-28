/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#ifndef ti_sdo_io_Stream__INTERNAL__
#define ti_sdo_io_Stream__INTERNAL__

#ifndef ti_sdo_io_Stream__internalaccess
#define ti_sdo_io_Stream__internalaccess
#endif

#include <ti/sdo/io/Stream.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* add */
#undef ti_sdo_io_Stream_add
#define ti_sdo_io_Stream_add ti_sdo_io_Stream_add__F

/* remove */
#undef ti_sdo_io_Stream_remove
#define ti_sdo_io_Stream_remove ti_sdo_io_Stream_remove__F

/* match */
#undef ti_sdo_io_Stream_match
#define ti_sdo_io_Stream_match ti_sdo_io_Stream_match__F

/* completedLog */
#undef ti_sdo_io_Stream_completedLog
#define ti_sdo_io_Stream_completedLog ti_sdo_io_Stream_completedLog__F

/* issue */
#undef ti_sdo_io_Stream_issue
#define ti_sdo_io_Stream_issue ti_sdo_io_Stream_issue__F

/* reclaim */
#undef ti_sdo_io_Stream_reclaim
#define ti_sdo_io_Stream_reclaim ti_sdo_io_Stream_reclaim__F

/* read */
#undef ti_sdo_io_Stream_read
#define ti_sdo_io_Stream_read ti_sdo_io_Stream_read__F

/* write */
#undef ti_sdo_io_Stream_write
#define ti_sdo_io_Stream_write ti_sdo_io_Stream_write__F

/* submit */
#undef ti_sdo_io_Stream_submit
#define ti_sdo_io_Stream_submit ti_sdo_io_Stream_submit__F

/* control */
#undef ti_sdo_io_Stream_control
#define ti_sdo_io_Stream_control ti_sdo_io_Stream_control__F

/* abort */
#undef ti_sdo_io_Stream_abort
#define ti_sdo_io_Stream_abort ti_sdo_io_Stream_abort__F

/* prime */
#undef ti_sdo_io_Stream_prime
#define ti_sdo_io_Stream_prime ti_sdo_io_Stream_prime__F

/* internalCallback */
#define Stream_internalCallback ti_sdo_io_Stream_internalCallback__I

/* postInit */
#define Stream_postInit ti_sdo_io_Stream_postInit__I

/* issueX */
#define Stream_issueX ti_sdo_io_Stream_issueX__I

/* Module_startup */
#undef ti_sdo_io_Stream_Module_startup
#define ti_sdo_io_Stream_Module_startup ti_sdo_io_Stream_Module_startup__F

/* Instance_init */
#undef ti_sdo_io_Stream_Instance_init
#define ti_sdo_io_Stream_Instance_init ti_sdo_io_Stream_Instance_init__F

/* Instance_finalize */
#undef ti_sdo_io_Stream_Instance_finalize
#define ti_sdo_io_Stream_Instance_finalize ti_sdo_io_Stream_Instance_finalize__F

/* module */
#define Stream_module ((ti_sdo_io_Stream_Module_State *)(xdc__MODOBJADDR__(ti_sdo_io_Stream_Module__state__V)))
#if !defined(__cplusplus) || !defined(ti_sdo_io_Stream__cplusplus)
#define module ((ti_sdo_io_Stream_Module_State *)(xdc__MODOBJADDR__(ti_sdo_io_Stream_Module__state__V)))
#endif
/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_io_Stream_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_io_Stream_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_io_Stream_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_io_Stream_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_io_Stream_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_io_Stream_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_io_Stream_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_io_Stream_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_io_Stream_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_io_Stream_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_io_Stream_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_io_Stream_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_io_Stream_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_io_Stream_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_io_Stream_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_io_Stream_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_io_Stream_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_io_Stream_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sdo.io.Stream"
typedef char ti_sdo_io_Stream_Object__sizingError[sizeof(ti_sdo_io_Stream_Object) > sizeof(ti_sdo_io_Stream_Struct) ? -1 : 1];


#endif /* ti_sdo_io_Stream__INTERNAL____ */
