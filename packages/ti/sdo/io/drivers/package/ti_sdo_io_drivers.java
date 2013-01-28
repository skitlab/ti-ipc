/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */
import java.util.*;
import org.mozilla.javascript.*;
import xdc.services.intern.xsr.*;
import xdc.services.spec.Session;

public class ti_sdo_io_drivers
{
    static final String VERS = "@(#) xdc-y35\n";

    static final Proto.Elm $$T_Bool = Proto.Elm.newBool();
    static final Proto.Elm $$T_Num = Proto.Elm.newNum();
    static final Proto.Elm $$T_Str = Proto.Elm.newStr();
    static final Proto.Elm $$T_Obj = Proto.Elm.newObj();

    static final Proto.Fxn $$T_Met = new Proto.Fxn(null, null, 0, -1, false);
    static final Proto.Map $$T_Map = new Proto.Map($$T_Obj);
    static final Proto.Arr $$T_Vec = new Proto.Arr($$T_Obj);

    static final XScriptO $$DEFAULT = Value.DEFAULT;
    static final Object $$UNDEF = Undefined.instance;

    static final Proto.Obj $$Package = (Proto.Obj)Global.get("$$Package");
    static final Proto.Obj $$Module = (Proto.Obj)Global.get("$$Module");
    static final Proto.Obj $$Instance = (Proto.Obj)Global.get("$$Instance");
    static final Proto.Obj $$Params = (Proto.Obj)Global.get("$$Params");

    static final Object $$objFldGet = Global.get("$$objFldGet");
    static final Object $$objFldSet = Global.get("$$objFldSet");
    static final Object $$proxyGet = Global.get("$$proxyGet");
    static final Object $$proxySet = Global.get("$$proxySet");
    static final Object $$delegGet = Global.get("$$delegGet");
    static final Object $$delegSet = Global.get("$$delegSet");

    Scriptable xdcO;
    Session ses;
    Value.Obj om;

    boolean isROV;
    boolean isCFG;

    Proto.Obj pkgP;
    Value.Obj pkgV;

    ArrayList<Object> imports = new ArrayList<Object>();
    ArrayList<Object> loggables = new ArrayList<Object>();
    ArrayList<Object> mcfgs = new ArrayList<Object>();
    ArrayList<Object> icfgs = new ArrayList<Object>();
    ArrayList<String> inherits = new ArrayList<String>();
    ArrayList<Object> proxies = new ArrayList<Object>();
    ArrayList<Object> sizes = new ArrayList<Object>();
    ArrayList<Object> tdefs = new ArrayList<Object>();

    void $$IMPORTS()
    {
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime");
        Global.callFxn("loadPackage", xdcO, "xdc.rov");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.io");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.utils");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.io.drivers.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.io.drivers", new Value.Obj("ti.sdo.io.drivers", pkgP));
    }

    void Generator$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.drivers.Generator", new Value.Obj("ti.sdo.io.drivers.Generator", po));
        pkgV.bind("Generator", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$ChanParams", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.ChanParams", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$BasicView", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.BasicView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$GeneratorView", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.GeneratorView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$ChanObj", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.ChanObj", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.Instance_State", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$Module_State", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.Module_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.io.drivers.Generator.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.drivers.Generator.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.drivers.Generator$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.Generator.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.io.drivers.Generator.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.drivers.Generator.Object", om.findStrict("ti.sdo.io.drivers.Generator.Instance_State", "ti.sdo.io.drivers"));
        }//isROV
    }

    void IomAdapter$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.drivers.IomAdapter.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.drivers.IomAdapter", new Value.Obj("ti.sdo.io.drivers.IomAdapter", po));
        pkgV.bind("IomAdapter", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.IomAdapter$$ChanObj", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.IomAdapter.ChanObj", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.drivers.IomAdapter$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.IomAdapter.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.io.drivers.IomAdapter.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.drivers.IomAdapter$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.drivers.IomAdapter.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.drivers.IomAdapter$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.drivers.IomAdapter.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.io.drivers.IomAdapter.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.drivers.IomAdapter.Object", om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance_State", "ti.sdo.io.drivers"));
        }//isROV
    }

    void Generator$$CONSTS()
    {
        // module Generator
        om.bind("ti.sdo.io.drivers.Generator.NUMCHANS", 2L);
        om.bind("ti.sdo.io.drivers.Generator.simulateIsr", new Extern("ti_sdo_io_drivers_Generator_simulateIsr__E", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void IomAdapter$$CONSTS()
    {
        // module IomAdapter
        om.bind("ti.sdo.io.drivers.IomAdapter.driverCallback", new Extern("ti_sdo_io_drivers_IomAdapter_driverCallback__I", "xdc_Void(*)(xdc_Ptr,ti_sdo_io_DriverTypes_Packet*)", true, false));
        om.bind("ti.sdo.io.drivers.IomAdapter.postInit", new Extern("ti_sdo_io_drivers_IomAdapter_postInit__I", "xdc_Void(*)(ti_sdo_io_drivers_IomAdapter_Object*)", true, false));
        om.bind("ti.sdo.io.drivers.IomAdapter.mapStatus", new Extern("ti_sdo_io_drivers_IomAdapter_mapStatus__I", "xdc_runtime_Error_Id(*)(xdc_Int)", true, false));
    }

    void Generator$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$io$drivers$Generator$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.io.drivers.Generator.create() called before xdc.useModule('ti.sdo.io.drivers.Generator')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.drivers.Generator$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.drivers.Generator.Module", "ti.sdo.io.drivers"), om.findStrict("ti.sdo.io.drivers.Generator.Instance", "ti.sdo.io.drivers"), 1, 0, false));
                        fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.io.drivers.Generator.Params", "ti.sdo.io.drivers"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$drivers$Generator$$create = function( __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.drivers.Generator'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.io.drivers.Generator.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io.drivers']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.io.drivers.Generator'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.drivers.Generator'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.drivers.Generator$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.drivers.Generator.Module", "ti.sdo.io.drivers"), null, 2, 0, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.drivers.Generator$$Object", "ti.sdo.io.drivers"), null);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.io.drivers.Generator.Params", "ti.sdo.io.drivers"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$drivers$Generator$$construct = function( __obj, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.drivers.Generator'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.io.drivers.Generator'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.drivers.Generator'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void IomAdapter$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$io$drivers$IomAdapter$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.io.drivers.IomAdapter.create() called before xdc.useModule('ti.sdo.io.drivers.IomAdapter')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.drivers.IomAdapter$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.drivers.IomAdapter.Module", "ti.sdo.io.drivers"), om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance", "ti.sdo.io.drivers"), 1, 0, false));
                        fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.io.drivers.IomAdapter.Params", "ti.sdo.io.drivers"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$drivers$IomAdapter$$create = function( __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.drivers.IomAdapter'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.io.drivers.IomAdapter.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io.drivers']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.io.drivers.IomAdapter'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.drivers.IomAdapter'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.drivers.IomAdapter$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.drivers.IomAdapter.Module", "ti.sdo.io.drivers"), null, 2, 0, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.drivers.IomAdapter$$Object", "ti.sdo.io.drivers"), null);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.io.drivers.IomAdapter.Params", "ti.sdo.io.drivers"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$drivers$IomAdapter$$construct = function( __obj, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.drivers.IomAdapter'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.io.drivers.IomAdapter'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.drivers.IomAdapter'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void Generator$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void IomAdapter$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Generator$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.drivers.Generator.ChanParams", "ti.sdo.io.drivers");
        sizes.clear();
        sizes.add(Global.newArray("userFxn", "UFxn"));
        sizes.add(Global.newArray("userArg", "UIArg"));
        sizes.add(Global.newArray("returnPending", "UShort"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.drivers.Generator.ChanParams']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.drivers.Generator.ChanParams']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.drivers.Generator.ChanParams'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.drivers.Generator.ChanObj", "ti.sdo.io.drivers");
        sizes.clear();
        sizes.add(Global.newArray("elem", "Sti.sdo.utils.List;Elem"));
        sizes.add(Global.newArray("inUse", "UShort"));
        sizes.add(Global.newArray("returnPending", "UShort"));
        sizes.add(Global.newArray("pendList", "UPtr"));
        sizes.add(Global.newArray("cbFxn", "UFxn"));
        sizes.add(Global.newArray("cbArg", "UIArg"));
        sizes.add(Global.newArray("userFxn", "UFxn"));
        sizes.add(Global.newArray("userArg", "UIArg"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.drivers.Generator.ChanObj']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.drivers.Generator.ChanObj']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.drivers.Generator.ChanObj'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.drivers.Generator.Instance_State", "ti.sdo.io.drivers");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("chans", "A2;Sti.sdo.io.drivers.Generator;ChanObj"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.drivers.Generator.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.drivers.Generator.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.drivers.Generator.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.drivers.Generator.Module_State", "ti.sdo.io.drivers");
        sizes.clear();
        sizes.add(Global.newArray("chanList", "Sti.sdo.utils.List;Instance_State"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.drivers.Generator.Module_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.drivers.Generator.Module_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.drivers.Generator.Module_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void IomAdapter$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.drivers.IomAdapter.ChanObj", "ti.sdo.io.drivers");
        sizes.clear();
        sizes.add(Global.newArray("iomChanHdl", "UPtr"));
        sizes.add(Global.newArray("cbFxn", "UFxn"));
        sizes.add(Global.newArray("cbArg", "UIArg"));
        sizes.add(Global.newArray("abortPkt", "Sti.sdo.io.DriverTypes;Packet"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.drivers.IomAdapter.ChanObj']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.drivers.IomAdapter.ChanObj']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.drivers.IomAdapter.ChanObj'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance_State", "ti.sdo.io.drivers");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("deviceId", "TInt"));
        sizes.add(Global.newArray("deviceParams", "UPtr"));
        sizes.add(Global.newArray("deviceHandle", "UPtr"));
        sizes.add(Global.newArray("iomFxns", "UPtr"));
        sizes.add(Global.newArray("initFxn", "UFxn"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.drivers.IomAdapter.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.drivers.IomAdapter.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.drivers.IomAdapter.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void Generator$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/drivers/Generator.xs");
        om.bind("ti.sdo.io.drivers.Generator$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator.Module", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.Module", om.findStrict("ti.sdo.io.IDriver.Module", "ti.sdo.io.drivers"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("NUMCHANS", Proto.Elm.newCNum("(xdc_Int)"), 2L, "rh");
        if (isCFG) {
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.io.drivers"), $$UNDEF, "wh");
            po.addFld("E_nullParams", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io.drivers"), Global.newObject("msg", "E_nullParams: chanParams is null."), "w");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.drivers.Generator$$create", "ti.sdo.io.drivers"), Global.get("ti$sdo$io$drivers$Generator$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.drivers.Generator$$construct", "ti.sdo.io.drivers"), Global.get("ti$sdo$io$drivers$Generator$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.drivers.Generator$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.Generator$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.Generator$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.Generator$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.drivers.Generator$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.Generator$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator.Instance", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.Instance", om.findStrict("ti.sdo.io.IDriver.Instance", "ti.sdo.io.drivers"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("NUMCHANS", Proto.Elm.newCNum("(xdc_Int)"), 2L, "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.drivers"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Params", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.Params", om.findStrict("ti.sdo.io.IDriver$$Params", "ti.sdo.io.drivers"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("NUMCHANS", Proto.Elm.newCNum("(xdc_Int)"), 2L, "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.drivers"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Object", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.Object", om.findStrict("ti.sdo.io.drivers.Generator.Instance", "ti.sdo.io.drivers"));
        // typedef Generator.GenFunc
        om.bind("ti.sdo.io.drivers.Generator.GenFunc", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"));
        // struct Generator.ChanParams
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$ChanParams", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.ChanParams", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("userFxn", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"), $$UNDEF, "w");
                po.addFld("userArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("returnPending", $$T_Bool, $$UNDEF, "w");
        // struct Generator.BasicView
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$BasicView", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.BasicView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("label", $$T_Str, $$UNDEF, "w");
        // struct Generator.GeneratorView
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$GeneratorView", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.GeneratorView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("mode", $$T_Str, $$UNDEF, "w");
                po.addFld("inUse", $$T_Bool, $$UNDEF, "w");
                po.addFld("returnPending", $$T_Bool, $$UNDEF, "w");
                po.addFld("callbackFxn", new Proto.Arr($$T_Str, false), $$DEFAULT, "w");
                po.addFld("callbackArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("userFxn", new Proto.Arr($$T_Str, false), $$DEFAULT, "w");
                po.addFld("userArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // struct Generator.ChanObj
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$ChanObj", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.ChanObj", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("elem", (Proto)om.findStrict("ti.sdo.utils.List.Elem", "ti.sdo.io.drivers"), $$DEFAULT, "w");
                po.addFld("inUse", $$T_Bool, $$UNDEF, "w");
                po.addFld("returnPending", $$T_Bool, $$UNDEF, "w");
                po.addFld("pendList", (Proto)om.findStrict("ti.sdo.utils.List.Handle", "ti.sdo.io.drivers"), $$UNDEF, "w");
                po.addFld("cbFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg,ti_sdo_io_DriverTypes_Packet*)", "PFv"), $$UNDEF, "w");
                po.addFld("cbArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("userFxn", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"), $$UNDEF, "w");
                po.addFld("userArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // struct Generator.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Instance_State", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("chans", new Proto.Arr((Proto)om.findStrict("ti.sdo.io.drivers.Generator.ChanObj", "ti.sdo.io.drivers"), false, xdc.services.intern.xsr.Enum.intValue(2L)), $$DEFAULT, "w");
        // struct Generator.Module_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Module_State", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.Generator.Module_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFldV("chanList", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io.drivers"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_chanList", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io.drivers"), $$DEFAULT, "w");
    }

    void IomAdapter$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/drivers/IomAdapter.xs");
        om.bind("ti.sdo.io.drivers.IomAdapter$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter.Module", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.IomAdapter.Module", om.findStrict("ti.sdo.io.IDriver.Module", "ti.sdo.io.drivers"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.drivers.IomAdapter$$create", "ti.sdo.io.drivers"), Global.get("ti$sdo$io$drivers$IomAdapter$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.drivers.IomAdapter$$construct", "ti.sdo.io.drivers"), Global.get("ti$sdo$io$drivers$IomAdapter$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.drivers.IomAdapter$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.IomAdapter$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.IomAdapter$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.IomAdapter$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.drivers.IomAdapter$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.io.drivers.IomAdapter$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.IomAdapter.Instance", om.findStrict("ti.sdo.io.IDriver.Instance", "ti.sdo.io.drivers"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("iomFxns", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("initFxn", new Proto.Adr("xdc_Void(*)(xdc_Void)", "PFv"), null, "w");
            po.addFld("deviceParams", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("deviceId", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.drivers"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$Params", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.IomAdapter.Params", om.findStrict("ti.sdo.io.IDriver$$Params", "ti.sdo.io.drivers"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("iomFxns", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("initFxn", new Proto.Adr("xdc_Void(*)(xdc_Void)", "PFv"), null, "w");
            po.addFld("deviceParams", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("deviceId", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.drivers"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$Object", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.IomAdapter.Object", om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance", "ti.sdo.io.drivers"));
        // typedef IomAdapter.InitFunc
        om.bind("ti.sdo.io.drivers.IomAdapter.InitFunc", new Proto.Adr("xdc_Void(*)(xdc_Void)", "PFv"));
        // struct IomAdapter.ChanObj
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$ChanObj", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.IomAdapter.ChanObj", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("iomChanHdl", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("cbFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg,ti_sdo_io_DriverTypes_Packet*)", "PFv"), $$UNDEF, "w");
                po.addFld("cbArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("abortPkt", (Proto)om.findStrict("ti.sdo.io.DriverTypes.Packet", "ti.sdo.io.drivers"), $$DEFAULT, "w");
        // struct IomAdapter.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$Instance_State", "ti.sdo.io.drivers");
        po.init("ti.sdo.io.drivers.IomAdapter.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("deviceId", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF, "w");
                po.addFld("deviceParams", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("deviceHandle", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("iomFxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("initFxn", new Proto.Adr("xdc_Void(*)(xdc_Void)", "PFv"), $$UNDEF, "w");
    }

    void Generator$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.drivers.Generator", "ti.sdo.io.drivers");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Instance_State", "ti.sdo.io.drivers");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("ChanParams$fetchDesc", Global.newObject("type", "ti.sdo.io.drivers.Generator.ChanParams", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$ChanParams", "ti.sdo.io.drivers");
        vo.bind("ChanObj$fetchDesc", Global.newObject("type", "ti.sdo.io.drivers.Generator.ChanObj", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$ChanObj", "ti.sdo.io.drivers");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.io.drivers.Generator.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Instance_State", "ti.sdo.io.drivers");
        vo.bind("Module_State$fetchDesc", Global.newObject("type", "ti.sdo.io.drivers.Generator.Module_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator$$Module_State", "ti.sdo.io.drivers");
    }

    void IomAdapter$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter", "ti.sdo.io.drivers");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$Instance_State", "ti.sdo.io.drivers");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("ChanObj$fetchDesc", Global.newObject("type", "ti.sdo.io.drivers.IomAdapter.ChanObj", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$ChanObj", "ti.sdo.io.drivers");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.io.drivers.IomAdapter.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter$$Instance_State", "ti.sdo.io.drivers");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.io.drivers.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.io.drivers"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/drivers/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sdo.io.drivers"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sdo.io.drivers"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sdo.io.drivers"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sdo.io.drivers"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sdo.io.drivers"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sdo.io.drivers"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sdo.io.drivers", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.io.drivers");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.io.drivers.");
        pkgV.bind("$vers", Global.newArray("1, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.io.drivers'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.a28L',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.a28FP',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.a64P',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.a64Pe',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.a674',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae64P',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae64Pe',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae674',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae64T',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae66',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae66e',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.ae9',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aea8f',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aea8fnv',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aem3',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aem4',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aem4f',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aearp32',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aearp32F',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aer4te',\n");
            sb.append("'lib/io/debug/ti.sdo.io.drivers.aer4fte',\n");
            sb.append("'lib/smpio/debug/ti.sdo.io.drivers.aem3',\n");
            sb.append("'lib/smpio/debug/ti.sdo.io.drivers.aem4',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.a28L', {target: 'ti.targets.C28_large', suffix: '28L'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.a64P', {target: 'ti.targets.C64P', suffix: '64P'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.a64Pe', {target: 'ti.targets.C64P_big_endian', suffix: '64Pe'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.a674', {target: 'ti.targets.C674', suffix: '674'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae64P', {target: 'ti.targets.elf.C64P', suffix: 'e64P'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae64Pe', {target: 'ti.targets.elf.C64P_big_endian', suffix: 'e64Pe'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae64T', {target: 'ti.targets.elf.C64T', suffix: 'e64T'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aearp32F', {target: 'ti.targets.arp32.elf.ARP32_far', suffix: 'earp32F'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aer4te', {target: 'ti.targets.arm.elf.R4t_big_endian', suffix: 'er4te'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.drivers.aer4fte', {target: 'ti.targets.arm.elf.R4Ft_big_endian', suffix: 'er4fte'}],\n");
            sb.append("['lib/smpio/debug/ti.sdo.io.drivers.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/smpio/debug/ti.sdo.io.drivers.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void Generator$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.drivers.Generator", "ti.sdo.io.drivers");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.Generator.Module", "ti.sdo.io.drivers");
        vo.init2(po, "ti.sdo.io.drivers.Generator", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.drivers.Generator$$capsule", "ti.sdo.io.drivers"));
        vo.bind("Instance", om.findStrict("ti.sdo.io.drivers.Generator.Instance", "ti.sdo.io.drivers"));
        vo.bind("Params", om.findStrict("ti.sdo.io.drivers.Generator.Params", "ti.sdo.io.drivers"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.drivers.Generator.Params", "ti.sdo.io.drivers")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.drivers.Generator.Handle", "ti.sdo.io.drivers"));
        vo.bind("$package", om.findStrict("ti.sdo.io.drivers", "ti.sdo.io.drivers"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("GenFunc", om.findStrict("ti.sdo.io.drivers.Generator.GenFunc", "ti.sdo.io.drivers"));
        vo.bind("ChanParams", om.findStrict("ti.sdo.io.drivers.Generator.ChanParams", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.Generator.ChanParams", "ti.sdo.io.drivers"));
        vo.bind("BasicView", om.findStrict("ti.sdo.io.drivers.Generator.BasicView", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.Generator.BasicView", "ti.sdo.io.drivers"));
        vo.bind("GeneratorView", om.findStrict("ti.sdo.io.drivers.Generator.GeneratorView", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.Generator.GeneratorView", "ti.sdo.io.drivers"));
        mcfgs.add("E_nullParams");
        vo.bind("ChanObj", om.findStrict("ti.sdo.io.drivers.Generator.ChanObj", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.Generator.ChanObj", "ti.sdo.io.drivers"));
        vo.bind("Instance_State", om.findStrict("ti.sdo.io.drivers.Generator.Instance_State", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.Generator.Instance_State", "ti.sdo.io.drivers"));
        vo.bind("Module_State", om.findStrict("ti.sdo.io.drivers.Generator.Module_State", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.Generator.Module_State", "ti.sdo.io.drivers"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.io");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io.drivers")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sdo.io.drivers.Generator$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$io$drivers$Generator$$__initObject"));
        }//isCFG
        vo.bind("simulateIsr", om.findStrict("ti.sdo.io.drivers.Generator.simulateIsr", "ti.sdo.io.drivers"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_drivers_Generator_Handle__label__E", "ti_sdo_io_drivers_Generator_Module__startupDone__E", "ti_sdo_io_drivers_Generator_Object__create__E", "ti_sdo_io_drivers_Generator_Object__delete__E", "ti_sdo_io_drivers_Generator_Object__destruct__E", "ti_sdo_io_drivers_Generator_Object__get__E", "ti_sdo_io_drivers_Generator_Object__first__E", "ti_sdo_io_drivers_Generator_Object__next__E", "ti_sdo_io_drivers_Generator_Params__init__E", "ti_sdo_io_drivers_Generator_open__E", "ti_sdo_io_drivers_Generator_close__E", "ti_sdo_io_drivers_Generator_submit__E", "ti_sdo_io_drivers_Generator_control__E", "ti_sdo_io_drivers_Generator_simulateIsr__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray("E_nullParams"));
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.drivers.Generator.Object", "ti.sdo.io.drivers"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "open", "entry", "%p, \"%s\", 0x%x, %p, %p, %p, %p", "exit", "%p"));
        loggables.add(Global.newObject("name", "close", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "submit", "entry", "%p, %p, %p, %p", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "control", "entry", "%p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "simulateIsr", "entry", "%p", "exit", ""));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Generator", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Generator");
    }

    void IomAdapter$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter", "ti.sdo.io.drivers");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.drivers.IomAdapter.Module", "ti.sdo.io.drivers");
        vo.init2(po, "ti.sdo.io.drivers.IomAdapter", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.drivers.IomAdapter$$capsule", "ti.sdo.io.drivers"));
        vo.bind("Instance", om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance", "ti.sdo.io.drivers"));
        vo.bind("Params", om.findStrict("ti.sdo.io.drivers.IomAdapter.Params", "ti.sdo.io.drivers"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.drivers.IomAdapter.Params", "ti.sdo.io.drivers")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.drivers.IomAdapter.Handle", "ti.sdo.io.drivers"));
        vo.bind("$package", om.findStrict("ti.sdo.io.drivers", "ti.sdo.io.drivers"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("InitFunc", om.findStrict("ti.sdo.io.drivers.IomAdapter.InitFunc", "ti.sdo.io.drivers"));
        vo.bind("ChanObj", om.findStrict("ti.sdo.io.drivers.IomAdapter.ChanObj", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.IomAdapter.ChanObj", "ti.sdo.io.drivers"));
        vo.bind("Instance_State", om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance_State", "ti.sdo.io.drivers"));
        tdefs.add(om.findStrict("ti.sdo.io.drivers.IomAdapter.Instance_State", "ti.sdo.io.drivers"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.io");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io.drivers")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sdo.io.drivers.IomAdapter$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$io$drivers$IomAdapter$$__initObject"));
        }//isCFG
        vo.bind("driverCallback", om.findStrict("ti.sdo.io.drivers.IomAdapter.driverCallback", "ti.sdo.io.drivers"));
        vo.bind("postInit", om.findStrict("ti.sdo.io.drivers.IomAdapter.postInit", "ti.sdo.io.drivers"));
        vo.bind("mapStatus", om.findStrict("ti.sdo.io.drivers.IomAdapter.mapStatus", "ti.sdo.io.drivers"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_drivers_IomAdapter_Handle__label__E", "ti_sdo_io_drivers_IomAdapter_Module__startupDone__E", "ti_sdo_io_drivers_IomAdapter_Object__create__E", "ti_sdo_io_drivers_IomAdapter_Object__delete__E", "ti_sdo_io_drivers_IomAdapter_Object__destruct__E", "ti_sdo_io_drivers_IomAdapter_Object__get__E", "ti_sdo_io_drivers_IomAdapter_Object__first__E", "ti_sdo_io_drivers_IomAdapter_Object__next__E", "ti_sdo_io_drivers_IomAdapter_Params__init__E", "ti_sdo_io_drivers_IomAdapter_open__E", "ti_sdo_io_drivers_IomAdapter_close__E", "ti_sdo_io_drivers_IomAdapter_submit__E", "ti_sdo_io_drivers_IomAdapter_control__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.drivers.IomAdapter.Object", "ti.sdo.io.drivers"));
        vo.bind("MODULE_STARTUP$", 1);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "open", "entry", "%p, \"%s\", 0x%x, %p, %p, %p, %p", "exit", "%p"));
        loggables.add(Global.newObject("name", "close", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "submit", "entry", "%p, %p, %p, %p", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "control", "entry", "%p, %p", "exit", ""));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("IomAdapter", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("IomAdapter");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
            Object srcP = ((XScriptO)om.findStrict("xdc.runtime.IInstance", "ti.sdo.io.drivers")).findStrict("PARAMS", "ti.sdo.io.drivers");
            Scriptable dstP;

            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.io.drivers.Generator", "ti.sdo.io.drivers")).findStrict("PARAMS", "ti.sdo.io.drivers");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.io.drivers.IomAdapter", "ti.sdo.io.drivers")).findStrict("PARAMS", "ti.sdo.io.drivers");
            Global.put(dstP, "instance", srcP);
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.drivers.Generator", "ti.sdo.io.drivers"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.drivers.IomAdapter", "ti.sdo.io.drivers"));
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.io.drivers.Generator", "ti.sdo.io.drivers");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"Basic", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE"), "viewInitFxn", "viewInitBasic", "structName", "BasicView")}), Global.newArray(new Object[]{"Data", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE_DATA"), "viewInitFxn", "viewInitData", "structName", "GeneratorView")})}))));
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.io.drivers.Generator")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.drivers.IomAdapter")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.io.drivers")).add(pkgV);
    }

    public void exec( Scriptable xdcO, Session ses )
    {
        this.xdcO = xdcO;
        this.ses = ses;
        om = (Value.Obj)xdcO.get("om", null);

        Object o = om.geto("$name");
        String s = o instanceof String ? (String)o : null;
        isCFG = s != null && s.equals("cfg");
        isROV = s != null && s.equals("rov");

        $$IMPORTS();
        $$OBJECTS();
        Generator$$OBJECTS();
        IomAdapter$$OBJECTS();
        Generator$$CONSTS();
        IomAdapter$$CONSTS();
        Generator$$CREATES();
        IomAdapter$$CREATES();
        Generator$$FUNCTIONS();
        IomAdapter$$FUNCTIONS();
        Generator$$SIZES();
        IomAdapter$$SIZES();
        Generator$$TYPES();
        IomAdapter$$TYPES();
        if (isROV) {
            Generator$$ROV();
            IomAdapter$$ROV();
        }//isROV
        $$SINGLETONS();
        Generator$$SINGLETONS();
        IomAdapter$$SINGLETONS();
        $$INITIALIZATION();
    }
}
