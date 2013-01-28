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

public class ti_sdo_io_converters
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
        Global.callFxn("loadPackage", xdcO, "ti.sdo.io");
        Global.callFxn("loadPackage", xdcO, "xdc.rov");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.utils");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.io.converters.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.io.converters", new Value.Obj("ti.sdo.io.converters", pkgP));
    }

    void Transformer$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.converters.Transformer.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.converters.Transformer", new Value.Obj("ti.sdo.io.converters.Transformer", po));
        pkgV.bind("Transformer", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.converters.Transformer$$BasicView", new Proto.Obj());
        om.bind("ti.sdo.io.converters.Transformer.BasicView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.converters.Transformer$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.converters.Transformer.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.io.converters.Transformer.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.converters.Transformer$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.converters.Transformer.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.converters.Transformer$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.converters.Transformer.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.io.converters.Transformer.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.converters.Transformer.Object", om.findStrict("ti.sdo.io.converters.Transformer.Instance_State", "ti.sdo.io.converters"));
        }//isROV
    }

    void DriverAdapter$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.converters.DriverAdapter.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.converters.DriverAdapter", new Value.Obj("ti.sdo.io.converters.DriverAdapter", po));
        pkgV.bind("DriverAdapter", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.converters.DriverAdapter$$BasicView", new Proto.Obj());
        om.bind("ti.sdo.io.converters.DriverAdapter.BasicView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.converters.DriverAdapter$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.converters.DriverAdapter.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.io.converters.DriverAdapter.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.converters.DriverAdapter$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.converters.DriverAdapter.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.converters.DriverAdapter$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.converters.DriverAdapter.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.io.converters.DriverAdapter.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.converters.DriverAdapter.Object", om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance_State", "ti.sdo.io.converters"));
        }//isROV
    }

    void NullConverter$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.converters.NullConverter.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.converters.NullConverter", new Value.Obj("ti.sdo.io.converters.NullConverter", po));
        pkgV.bind("NullConverter", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.converters.NullConverter$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.converters.NullConverter.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.io.converters.NullConverter.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.converters.NullConverter$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.converters.NullConverter.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.converters.NullConverter$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.converters.NullConverter.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.io.converters.NullConverter.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.converters.NullConverter.Object", om.findStrict("ti.sdo.io.converters.NullConverter.Instance_State", "ti.sdo.io.converters"));
        }//isROV
    }

    void Transformer$$CONSTS()
    {
        // module Transformer
        om.bind("ti.sdo.io.converters.Transformer.multiply", new Extern("ti_sdo_io_converters_Transformer_multiply__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", true, false));
        om.bind("ti.sdo.io.converters.Transformer.fix2flt", new Extern("ti_sdo_io_converters_Transformer_fix2flt__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", true, false));
        om.bind("ti.sdo.io.converters.Transformer.flt2fix", new Extern("ti_sdo_io_converters_Transformer_flt2fix__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", true, false));
        om.bind("ti.sdo.io.converters.Transformer.callback", new Extern("ti_sdo_io_converters_Transformer_callback__I", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void DriverAdapter$$CONSTS()
    {
        // module DriverAdapter
        om.bind("ti.sdo.io.converters.DriverAdapter.callback", new Extern("ti_sdo_io_converters_DriverAdapter_callback__E", "xdc_Void(*)(xdc_UArg,ti_sdo_io_DriverTypes_Packet*)", true, false));
        om.bind("ti.sdo.io.converters.DriverAdapter.postInit", new Extern("ti_sdo_io_converters_DriverAdapter_postInit__I", "xdc_Int(*)(ti_sdo_io_converters_DriverAdapter_Object*,xdc_String,xdc_runtime_Error_Block*)", true, false));
    }

    void NullConverter$$CONSTS()
    {
        // module NullConverter
    }

    void Transformer$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$Transformer$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.io.converters.Transformer.create() called before xdc.useModule('ti.sdo.io.converters.Transformer')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.converters.Transformer$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.converters.Transformer.Module", "ti.sdo.io.converters"), om.findStrict("ti.sdo.io.converters.Transformer.Instance", "ti.sdo.io.converters"), 1, 0, false));
                        fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.io.converters.Transformer.Params", "ti.sdo.io.converters"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$Transformer$$create = function( __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.converters.Transformer'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.io.converters.Transformer.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io.converters']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.io.converters.Transformer'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.converters.Transformer'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.converters.Transformer$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.converters.Transformer.Module", "ti.sdo.io.converters"), null, 2, 0, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.converters.Transformer$$Object", "ti.sdo.io.converters"), null);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.io.converters.Transformer.Params", "ti.sdo.io.converters"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$Transformer$$construct = function( __obj, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.converters.Transformer'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.io.converters.Transformer'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.converters.Transformer'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void DriverAdapter$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$DriverAdapter$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.io.converters.DriverAdapter.create() called before xdc.useModule('ti.sdo.io.converters.DriverAdapter')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.converters.DriverAdapter$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.converters.DriverAdapter.Module", "ti.sdo.io.converters"), om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance", "ti.sdo.io.converters"), 1, 0, false));
                        fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.io.converters.DriverAdapter.Params", "ti.sdo.io.converters"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$DriverAdapter$$create = function( __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.converters.DriverAdapter'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.io.converters.DriverAdapter.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io.converters']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.io.converters.DriverAdapter'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.converters.DriverAdapter'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.converters.DriverAdapter$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.converters.DriverAdapter.Module", "ti.sdo.io.converters"), null, 2, 0, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.converters.DriverAdapter$$Object", "ti.sdo.io.converters"), null);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.io.converters.DriverAdapter.Params", "ti.sdo.io.converters"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$DriverAdapter$$construct = function( __obj, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.converters.DriverAdapter'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.io.converters.DriverAdapter'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.converters.DriverAdapter'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void NullConverter$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$NullConverter$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.io.converters.NullConverter.create() called before xdc.useModule('ti.sdo.io.converters.NullConverter')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.converters.NullConverter$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.converters.NullConverter.Module", "ti.sdo.io.converters"), om.findStrict("ti.sdo.io.converters.NullConverter.Instance", "ti.sdo.io.converters"), 1, 0, false));
                        fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.io.converters.NullConverter.Params", "ti.sdo.io.converters"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$NullConverter$$create = function( __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.converters.NullConverter'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.io.converters.NullConverter.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io.converters']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.io.converters.NullConverter'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.converters.NullConverter'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.converters.NullConverter$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.converters.NullConverter.Module", "ti.sdo.io.converters"), null, 2, 0, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.converters.NullConverter$$Object", "ti.sdo.io.converters"), null);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.io.converters.NullConverter.Params", "ti.sdo.io.converters"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$converters$NullConverter$$construct = function( __obj, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.converters.NullConverter'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.io.converters.NullConverter'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.converters.NullConverter'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void Transformer$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void DriverAdapter$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void NullConverter$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Transformer$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.converters.Transformer.Instance_State", "ti.sdo.io.converters");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("convHandle", "UPtr"));
        sizes.add(Global.newArray("drvAdapHdl", "UShort"));
        sizes.add(Global.newArray("mode", "UInt"));
        sizes.add(Global.newArray("cbFxn", "UFxn"));
        sizes.add(Global.newArray("cbArg", "UIArg"));
        sizes.add(Global.newArray("fxn", "UFxn"));
        sizes.add(Global.newArray("arg", "UIArg"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.converters.Transformer.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.converters.Transformer.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.converters.Transformer.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void DriverAdapter$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance_State", "ti.sdo.io.converters");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("name", "UPtr"));
        sizes.add(Global.newArray("driverHandle", "UPtr"));
        sizes.add(Global.newArray("chan", "UPtr"));
        sizes.add(Global.newArray("chanParams", "UIArg"));
        sizes.add(Global.newArray("mode", "UInt"));
        sizes.add(Global.newArray("cbFxn", "UFxn"));
        sizes.add(Global.newArray("cbArg", "UIArg"));
        sizes.add(Global.newArray("fromDriver", "Sti.sdo.utils.List;Instance_State"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.converters.DriverAdapter.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.converters.DriverAdapter.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.converters.DriverAdapter.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void NullConverter$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.converters.NullConverter.Instance_State", "ti.sdo.io.converters");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("mode", "UInt"));
        sizes.add(Global.newArray("cbFxn", "UFxn"));
        sizes.add(Global.newArray("cbArg", "UIArg"));
        sizes.add(Global.newArray("packetList", "Sti.sdo.utils.List;Instance_State"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.converters.NullConverter.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.converters.NullConverter.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.converters.NullConverter.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void Transformer$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/converters/Transformer.xs");
        om.bind("ti.sdo.io.converters.Transformer$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer.Module", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.Transformer.Module", om.findStrict("ti.sdo.io.IConverter.Module", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.io.converters"), $$UNDEF, "wh");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.converters.Transformer$$create", "ti.sdo.io.converters"), Global.get("ti$sdo$io$converters$Transformer$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.converters.Transformer$$construct", "ti.sdo.io.converters"), Global.get("ti$sdo$io$converters$Transformer$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.converters.Transformer$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.Transformer$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.Transformer$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.Transformer$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.converters.Transformer$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.Transformer$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer.Instance", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.Transformer.Instance", om.findStrict("ti.sdo.io.IConverter.Instance", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
            po.addFld("fxn", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"), null, "w");
            po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.converters"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer$$Params", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.Transformer.Params", om.findStrict("ti.sdo.io.IConverter$$Params", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
            po.addFld("fxn", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"), null, "w");
            po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.converters"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer$$Object", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.Transformer.Object", om.findStrict("ti.sdo.io.converters.Transformer.Instance", "ti.sdo.io.converters"));
        // typedef Transformer.TransFunc
        om.bind("ti.sdo.io.converters.Transformer.TransFunc", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"));
        // struct Transformer.BasicView
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer$$BasicView", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.Transformer.BasicView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("label", $$T_Str, $$UNDEF, "w");
                po.addFld("lowerConverter", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("mode", $$T_Str, $$UNDEF, "w");
                po.addFld("callbackFxn", new Proto.Arr($$T_Str, false), $$DEFAULT, "w");
                po.addFld("callbackArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("transformFxn", new Proto.Arr($$T_Str, false), $$DEFAULT, "w");
                po.addFld("transformArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // struct Transformer.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer$$Instance_State", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.Transformer.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("convHandle", (Proto)om.findStrict("ti.sdo.io.IConverter.Handle", "ti.sdo.io.converters"), $$UNDEF, "w");
                po.addFld("drvAdapHdl", $$T_Bool, $$UNDEF, "w");
                po.addFld("mode", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("cbFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF, "w");
                po.addFld("cbArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("fxn", new Proto.Adr("xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg)", "PFv"), $$UNDEF, "w");
                po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
    }

    void DriverAdapter$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/converters/DriverAdapter.xs");
        om.bind("ti.sdo.io.converters.DriverAdapter$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter.Module", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.DriverAdapter.Module", om.findStrict("ti.sdo.io.IConverter.Module", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
            po.addFld("E_openFail", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io.converters"), Global.newObject("msg", "E_openFail: Driver failed to open channel"), "w");
            po.addFld("A_noReadyPacket", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.io.converters"), Global.newObject("msg", "A_noReadyPacket:  No packet ready for reclaim"), "w");
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.io.converters"), $$UNDEF, "wh");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.converters.DriverAdapter$$create", "ti.sdo.io.converters"), Global.get("ti$sdo$io$converters$DriverAdapter$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.converters.DriverAdapter$$construct", "ti.sdo.io.converters"), Global.get("ti$sdo$io$converters$DriverAdapter$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.converters.DriverAdapter$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.DriverAdapter$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.DriverAdapter$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.DriverAdapter$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.converters.DriverAdapter$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.DriverAdapter$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.DriverAdapter.Instance", om.findStrict("ti.sdo.io.IConverter.Instance", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
            po.addFld("driverHandle", new Proto.Adr("xdc_Ptr", "Pv"), 0L, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.converters"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter$$Params", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.DriverAdapter.Params", om.findStrict("ti.sdo.io.IConverter$$Params", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
            po.addFld("driverHandle", new Proto.Adr("xdc_Ptr", "Pv"), 0L, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.converters"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter$$Object", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.DriverAdapter.Object", om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance", "ti.sdo.io.converters"));
        // struct DriverAdapter.BasicView
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter$$BasicView", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.DriverAdapter.BasicView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("label", $$T_Str, $$UNDEF, "w");
                po.addFld("driverName", $$T_Str, $$UNDEF, "w");
                po.addFld("driverHandle", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("channelHandle", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("channelParams", $$T_Str, $$UNDEF, "w");
                po.addFld("mode", $$T_Str, $$UNDEF, "w");
                po.addFld("callbackFxn", new Proto.Arr($$T_Str, false), $$DEFAULT, "w");
                po.addFld("callbackArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("readyForReclaim", new Proto.Arr($$T_Str, false), $$DEFAULT, "w");
        // struct DriverAdapter.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter$$Instance_State", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.DriverAdapter.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("name", $$T_Str, $$UNDEF, "w");
                po.addFld("driverHandle", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("chan", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("chanParams", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("mode", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("cbFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF, "w");
                po.addFld("cbArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFldV("fromDriver", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io.converters"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_fromDriver", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io.converters"), $$DEFAULT, "w");
    }

    void NullConverter$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/converters/NullConverter.xs");
        om.bind("ti.sdo.io.converters.NullConverter$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter.Module", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.NullConverter.Module", om.findStrict("ti.sdo.io.IConverter.Module", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.converters.NullConverter$$create", "ti.sdo.io.converters"), Global.get("ti$sdo$io$converters$NullConverter$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.converters.NullConverter$$construct", "ti.sdo.io.converters"), Global.get("ti$sdo$io$converters$NullConverter$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.converters.NullConverter$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.NullConverter$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.NullConverter$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.NullConverter$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.converters.NullConverter$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.io.converters.NullConverter$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter.Instance", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.NullConverter.Instance", om.findStrict("ti.sdo.io.IConverter.Instance", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.converters"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter$$Params", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.NullConverter.Params", om.findStrict("ti.sdo.io.IConverter$$Params", "ti.sdo.io.converters"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io.converters"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter$$Object", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.NullConverter.Object", om.findStrict("ti.sdo.io.converters.NullConverter.Instance", "ti.sdo.io.converters"));
        // struct NullConverter.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter$$Instance_State", "ti.sdo.io.converters");
        po.init("ti.sdo.io.converters.NullConverter.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("mode", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("cbFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF, "w");
                po.addFld("cbArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFldV("packetList", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io.converters"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_packetList", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io.converters"), $$DEFAULT, "w");
    }

    void Transformer$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.Transformer", "ti.sdo.io.converters");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer$$Instance_State", "ti.sdo.io.converters");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.io.converters.Transformer.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer$$Instance_State", "ti.sdo.io.converters");
    }

    void DriverAdapter$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter", "ti.sdo.io.converters");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter$$Instance_State", "ti.sdo.io.converters");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.io.converters.DriverAdapter.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter$$Instance_State", "ti.sdo.io.converters");
    }

    void NullConverter$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.NullConverter", "ti.sdo.io.converters");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter$$Instance_State", "ti.sdo.io.converters");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.io.converters.NullConverter.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter$$Instance_State", "ti.sdo.io.converters");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.io.converters.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.io.converters"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/converters/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sdo.io.converters"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sdo.io.converters"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sdo.io.converters"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sdo.io.converters"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sdo.io.converters"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sdo.io.converters"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sdo.io.converters", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.io.converters");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.io.converters.");
        pkgV.bind("$vers", Global.newArray("1, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.io.converters'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.a28L',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.a28FP',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.a64P',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.a64Pe',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.a674',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae64P',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae64Pe',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae674',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae64T',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae66',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae66e',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.ae9',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aea8f',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aea8fnv',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aem3',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aem4',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aem4f',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aearp32',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aearp32F',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aer4te',\n");
            sb.append("'lib/io/debug/ti.sdo.io.converters.aer4fte',\n");
            sb.append("'lib/smpio/debug/ti.sdo.io.converters.aem3',\n");
            sb.append("'lib/smpio/debug/ti.sdo.io.converters.aem4',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.a28L', {target: 'ti.targets.C28_large', suffix: '28L'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.a64P', {target: 'ti.targets.C64P', suffix: '64P'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.a64Pe', {target: 'ti.targets.C64P_big_endian', suffix: '64Pe'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.a674', {target: 'ti.targets.C674', suffix: '674'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae64P', {target: 'ti.targets.elf.C64P', suffix: 'e64P'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae64Pe', {target: 'ti.targets.elf.C64P_big_endian', suffix: 'e64Pe'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae64T', {target: 'ti.targets.elf.C64T', suffix: 'e64T'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aearp32F', {target: 'ti.targets.arp32.elf.ARP32_far', suffix: 'earp32F'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aer4te', {target: 'ti.targets.arm.elf.R4t_big_endian', suffix: 'er4te'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.converters.aer4fte', {target: 'ti.targets.arm.elf.R4Ft_big_endian', suffix: 'er4fte'}],\n");
            sb.append("['lib/smpio/debug/ti.sdo.io.converters.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/smpio/debug/ti.sdo.io.converters.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void Transformer$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.Transformer", "ti.sdo.io.converters");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.Transformer.Module", "ti.sdo.io.converters");
        vo.init2(po, "ti.sdo.io.converters.Transformer", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.converters.Transformer$$capsule", "ti.sdo.io.converters"));
        vo.bind("Instance", om.findStrict("ti.sdo.io.converters.Transformer.Instance", "ti.sdo.io.converters"));
        vo.bind("Params", om.findStrict("ti.sdo.io.converters.Transformer.Params", "ti.sdo.io.converters"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.converters.Transformer.Params", "ti.sdo.io.converters")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.converters.Transformer.Handle", "ti.sdo.io.converters"));
        vo.bind("$package", om.findStrict("ti.sdo.io.converters", "ti.sdo.io.converters"));
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
        vo.bind("DoneFxn", om.findStrict("ti.sdo.io.IConverter.DoneFxn", "ti.sdo.io.converters"));
        vo.bind("TransFunc", om.findStrict("ti.sdo.io.converters.Transformer.TransFunc", "ti.sdo.io.converters"));
        vo.bind("BasicView", om.findStrict("ti.sdo.io.converters.Transformer.BasicView", "ti.sdo.io.converters"));
        tdefs.add(om.findStrict("ti.sdo.io.converters.Transformer.BasicView", "ti.sdo.io.converters"));
        vo.bind("Instance_State", om.findStrict("ti.sdo.io.converters.Transformer.Instance_State", "ti.sdo.io.converters"));
        tdefs.add(om.findStrict("ti.sdo.io.converters.Transformer.Instance_State", "ti.sdo.io.converters"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.io");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io.converters")).add(vo);
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
            vo.bind("$$meta_iobj", om.has("ti.sdo.io.converters.Transformer$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$io$converters$Transformer$$__initObject"));
        }//isCFG
        vo.bind("multiply", om.findStrict("ti.sdo.io.converters.Transformer.multiply", "ti.sdo.io.converters"));
        vo.bind("fix2flt", om.findStrict("ti.sdo.io.converters.Transformer.fix2flt", "ti.sdo.io.converters"));
        vo.bind("flt2fix", om.findStrict("ti.sdo.io.converters.Transformer.flt2fix", "ti.sdo.io.converters"));
        vo.bind("callback", om.findStrict("ti.sdo.io.converters.Transformer.callback", "ti.sdo.io.converters"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_converters_Transformer_Handle__label__E", "ti_sdo_io_converters_Transformer_Module__startupDone__E", "ti_sdo_io_converters_Transformer_Object__create__E", "ti_sdo_io_converters_Transformer_Object__delete__E", "ti_sdo_io_converters_Transformer_Object__destruct__E", "ti_sdo_io_converters_Transformer_Object__get__E", "ti_sdo_io_converters_Transformer_Object__first__E", "ti_sdo_io_converters_Transformer_Object__next__E", "ti_sdo_io_converters_Transformer_Params__init__E", "ti_sdo_io_converters_Transformer_open__E", "ti_sdo_io_converters_Transformer_close__E", "ti_sdo_io_converters_Transformer_issue__E", "ti_sdo_io_converters_Transformer_reclaim__E", "ti_sdo_io_converters_Transformer_control__E", "ti_sdo_io_converters_Transformer_query__E", "ti_sdo_io_converters_Transformer_multiply__E", "ti_sdo_io_converters_Transformer_fix2flt__E", "ti_sdo_io_converters_Transformer_flt2fix__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.converters.Transformer.Object", "ti.sdo.io.converters"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "open", "entry", "%p, \"%s\", 0x%x, %p, %p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "close", "entry", "%p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "issue", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "reclaim", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "control", "entry", "%p", "exit", ""));
        loggables.add(Global.newObject("name", "query", "entry", "%p, %d", "exit", "%d"));
        loggables.add(Global.newObject("name", "multiply", "entry", "%p, 0x%x, %p", "exit", ""));
        loggables.add(Global.newObject("name", "fix2flt", "entry", "%p, 0x%x, %p", "exit", ""));
        loggables.add(Global.newObject("name", "flt2fix", "entry", "%p, 0x%x, %p", "exit", ""));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Transformer", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Transformer");
    }

    void DriverAdapter$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter", "ti.sdo.io.converters");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter.Module", "ti.sdo.io.converters");
        vo.init2(po, "ti.sdo.io.converters.DriverAdapter", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.converters.DriverAdapter$$capsule", "ti.sdo.io.converters"));
        vo.bind("Instance", om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance", "ti.sdo.io.converters"));
        vo.bind("Params", om.findStrict("ti.sdo.io.converters.DriverAdapter.Params", "ti.sdo.io.converters"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.converters.DriverAdapter.Params", "ti.sdo.io.converters")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.converters.DriverAdapter.Handle", "ti.sdo.io.converters"));
        vo.bind("$package", om.findStrict("ti.sdo.io.converters", "ti.sdo.io.converters"));
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
        vo.bind("DoneFxn", om.findStrict("ti.sdo.io.IConverter.DoneFxn", "ti.sdo.io.converters"));
        mcfgs.add("E_openFail");
        mcfgs.add("A_noReadyPacket");
        vo.bind("BasicView", om.findStrict("ti.sdo.io.converters.DriverAdapter.BasicView", "ti.sdo.io.converters"));
        tdefs.add(om.findStrict("ti.sdo.io.converters.DriverAdapter.BasicView", "ti.sdo.io.converters"));
        vo.bind("Instance_State", om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance_State", "ti.sdo.io.converters"));
        tdefs.add(om.findStrict("ti.sdo.io.converters.DriverAdapter.Instance_State", "ti.sdo.io.converters"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.io");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io.converters")).add(vo);
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
            vo.bind("$$meta_iobj", om.has("ti.sdo.io.converters.DriverAdapter$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$io$converters$DriverAdapter$$__initObject"));
        }//isCFG
        vo.bind("callback", om.findStrict("ti.sdo.io.converters.DriverAdapter.callback", "ti.sdo.io.converters"));
        vo.bind("postInit", om.findStrict("ti.sdo.io.converters.DriverAdapter.postInit", "ti.sdo.io.converters"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_converters_DriverAdapter_Handle__label__E", "ti_sdo_io_converters_DriverAdapter_Module__startupDone__E", "ti_sdo_io_converters_DriverAdapter_Object__create__E", "ti_sdo_io_converters_DriverAdapter_Object__delete__E", "ti_sdo_io_converters_DriverAdapter_Object__destruct__E", "ti_sdo_io_converters_DriverAdapter_Object__get__E", "ti_sdo_io_converters_DriverAdapter_Object__first__E", "ti_sdo_io_converters_DriverAdapter_Object__next__E", "ti_sdo_io_converters_DriverAdapter_Params__init__E", "ti_sdo_io_converters_DriverAdapter_open__E", "ti_sdo_io_converters_DriverAdapter_close__E", "ti_sdo_io_converters_DriverAdapter_issue__E", "ti_sdo_io_converters_DriverAdapter_reclaim__E", "ti_sdo_io_converters_DriverAdapter_control__E", "ti_sdo_io_converters_DriverAdapter_query__E", "ti_sdo_io_converters_DriverAdapter_callback__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray("E_openFail"));
        vo.bind("$$assertDescCfgs", Global.newArray("A_noReadyPacket"));
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.converters.DriverAdapter.Object", "ti.sdo.io.converters"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "open", "entry", "%p, \"%s\", 0x%x, %p, %p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "close", "entry", "%p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "issue", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "reclaim", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "control", "entry", "%p", "exit", ""));
        loggables.add(Global.newObject("name", "query", "entry", "%p, %d", "exit", "%d"));
        loggables.add(Global.newObject("name", "callback", "entry", "%p, %p", "exit", ""));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("DriverAdapter", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("DriverAdapter");
    }

    void NullConverter$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.NullConverter", "ti.sdo.io.converters");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.converters.NullConverter.Module", "ti.sdo.io.converters");
        vo.init2(po, "ti.sdo.io.converters.NullConverter", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.converters.NullConverter$$capsule", "ti.sdo.io.converters"));
        vo.bind("Instance", om.findStrict("ti.sdo.io.converters.NullConverter.Instance", "ti.sdo.io.converters"));
        vo.bind("Params", om.findStrict("ti.sdo.io.converters.NullConverter.Params", "ti.sdo.io.converters"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.converters.NullConverter.Params", "ti.sdo.io.converters")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.converters.NullConverter.Handle", "ti.sdo.io.converters"));
        vo.bind("$package", om.findStrict("ti.sdo.io.converters", "ti.sdo.io.converters"));
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
        vo.bind("DoneFxn", om.findStrict("ti.sdo.io.IConverter.DoneFxn", "ti.sdo.io.converters"));
        vo.bind("Instance_State", om.findStrict("ti.sdo.io.converters.NullConverter.Instance_State", "ti.sdo.io.converters"));
        tdefs.add(om.findStrict("ti.sdo.io.converters.NullConverter.Instance_State", "ti.sdo.io.converters"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.io");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io.converters")).add(vo);
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
            vo.bind("$$meta_iobj", om.has("ti.sdo.io.converters.NullConverter$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$io$converters$NullConverter$$__initObject"));
        }//isCFG
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_converters_NullConverter_Handle__label__E", "ti_sdo_io_converters_NullConverter_Module__startupDone__E", "ti_sdo_io_converters_NullConverter_Object__create__E", "ti_sdo_io_converters_NullConverter_Object__delete__E", "ti_sdo_io_converters_NullConverter_Object__destruct__E", "ti_sdo_io_converters_NullConverter_Object__get__E", "ti_sdo_io_converters_NullConverter_Object__first__E", "ti_sdo_io_converters_NullConverter_Object__next__E", "ti_sdo_io_converters_NullConverter_Params__init__E", "ti_sdo_io_converters_NullConverter_open__E", "ti_sdo_io_converters_NullConverter_close__E", "ti_sdo_io_converters_NullConverter_issue__E", "ti_sdo_io_converters_NullConverter_reclaim__E", "ti_sdo_io_converters_NullConverter_control__E", "ti_sdo_io_converters_NullConverter_query__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.converters.NullConverter.Object", "ti.sdo.io.converters"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "open", "entry", "%p, \"%s\", 0x%x, %p, %p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "close", "entry", "%p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "issue", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "reclaim", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "control", "entry", "%p", "exit", ""));
        loggables.add(Global.newObject("name", "query", "entry", "%p, %d", "exit", "%d"));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("NullConverter", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("NullConverter");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
            Object srcP = ((XScriptO)om.findStrict("xdc.runtime.IInstance", "ti.sdo.io.converters")).findStrict("PARAMS", "ti.sdo.io.converters");
            Scriptable dstP;

            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.io.converters.Transformer", "ti.sdo.io.converters")).findStrict("PARAMS", "ti.sdo.io.converters");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.io.converters.DriverAdapter", "ti.sdo.io.converters")).findStrict("PARAMS", "ti.sdo.io.converters");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.io.converters.NullConverter", "ti.sdo.io.converters")).findStrict("PARAMS", "ti.sdo.io.converters");
            Global.put(dstP, "instance", srcP);
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.converters.Transformer", "ti.sdo.io.converters"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.converters.DriverAdapter", "ti.sdo.io.converters"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.converters.NullConverter", "ti.sdo.io.converters"));
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.Transformer", "ti.sdo.io.converters");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"Basic", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE"), "viewInitFxn", "viewInitBasic", "structName", "BasicView")})}))));
        }//isCFG
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.io.converters.DriverAdapter", "ti.sdo.io.converters");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"Basic", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE"), "viewInitFxn", "viewInitBasic", "structName", "BasicView")})}))));
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.io.converters.Transformer")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.converters.DriverAdapter")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.converters.NullConverter")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.io.converters")).add(pkgV);
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
        Transformer$$OBJECTS();
        DriverAdapter$$OBJECTS();
        NullConverter$$OBJECTS();
        Transformer$$CONSTS();
        DriverAdapter$$CONSTS();
        NullConverter$$CONSTS();
        Transformer$$CREATES();
        DriverAdapter$$CREATES();
        NullConverter$$CREATES();
        Transformer$$FUNCTIONS();
        DriverAdapter$$FUNCTIONS();
        NullConverter$$FUNCTIONS();
        Transformer$$SIZES();
        DriverAdapter$$SIZES();
        NullConverter$$SIZES();
        Transformer$$TYPES();
        DriverAdapter$$TYPES();
        NullConverter$$TYPES();
        if (isROV) {
            Transformer$$ROV();
            DriverAdapter$$ROV();
            NullConverter$$ROV();
        }//isROV
        $$SINGLETONS();
        Transformer$$SINGLETONS();
        DriverAdapter$$SINGLETONS();
        NullConverter$$SINGLETONS();
        $$INITIALIZATION();
    }
}
