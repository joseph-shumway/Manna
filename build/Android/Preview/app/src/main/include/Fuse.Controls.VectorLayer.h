// This file was generated based on '../../../Local/Fusetools/Packages/Fuse.Controls.Panels/1.4.0/VectorLayer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.ISurfaceProvider.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct VectorLayer;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class VectorLayer :20
// {
struct VectorLayer_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Drawing::ISurfaceDrawable interface17;
    ::g::Fuse::Drawing::ISurfaceProvider interface18;
};

VectorLayer_type* VectorLayer_typeof();
void VectorLayer__ctor_6_fn(VectorLayer* __this);
void VectorLayer__DrawWithChildren_fn(VectorLayer* __this, ::g::Fuse::DrawContext* dc);
void VectorLayer__FuseDrawingISurfaceDrawableDraw_fn(VectorLayer* __this, ::g::Fuse::Drawing::Surface* surface);
void VectorLayer__FuseDrawingISurfaceDrawableget_ElementSize_fn(VectorLayer* __this, ::g::Uno::Float2* __retval);
void VectorLayer__FuseDrawingISurfaceDrawableget_IsPrimary_fn(VectorLayer* __this, bool* __retval);
void VectorLayer__New3_fn(VectorLayer** __retval);
void VectorLayer__OnRooted_fn(VectorLayer* __this);
void VectorLayer__OnUnrooted_fn(VectorLayer* __this);

struct VectorLayer : ::g::Fuse::Controls::LayoutControl
{
    void ctor_6();
    static VectorLayer* New3();
};
// }

}}} // ::g::Fuse::Controls