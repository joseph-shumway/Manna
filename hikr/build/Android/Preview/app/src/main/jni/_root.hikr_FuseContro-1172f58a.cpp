// This file was generated based on C:/Users/Shumcom/Documents/Fuse/Manna/hikr/build/Android/Preview/cache/ux13/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseContro-1172f58a.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class hikr_FuseControlsButtonBase_Text_Property :9
// {
static void hikr_FuseControlsButtonBase_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::ButtonBase_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.ButtonBase*/], offsetof(hikr_FuseControlsButtonBase_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* hikr_FuseControlsButtonBase_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_FuseControlsButtonBase_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("hikr_FuseControlsButtonBase_Text_Property", options);
    type->fp_build_ = hikr_FuseControlsButtonBase_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))hikr_FuseControlsButtonBase_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))hikr_FuseControlsButtonBase_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))hikr_FuseControlsButtonBase_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))hikr_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public hikr_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :12
void hikr_FuseControlsButtonBase_Text_Property__ctor_3_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :14
void hikr_FuseControlsButtonBase_Text_Property__Get1_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("hikr_FuseControlsButtonBase_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public hikr_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :12
void hikr_FuseControlsButtonBase_Text_Property__New1_fn(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name, hikr_FuseControlsButtonBase_Text_Property** __retval)
{
    *__retval = hikr_FuseControlsButtonBase_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :13
void hikr_FuseControlsButtonBase_Text_Property__get_Object_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :15
void hikr_FuseControlsButtonBase_Text_Property__Set1_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("hikr_FuseControlsButtonBase_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :16
void hikr_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(hikr_FuseControlsButtonBase_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public hikr_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [instance] :12
void hikr_FuseControlsButtonBase_Text_Property::ctor_3(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public hikr_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [static] :12
hikr_FuseControlsButtonBase_Text_Property* hikr_FuseControlsButtonBase_Text_Property::New1(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    hikr_FuseControlsButtonBase_Text_Property* obj1 = (hikr_FuseControlsButtonBase_Text_Property*)uNew(hikr_FuseControlsButtonBase_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
