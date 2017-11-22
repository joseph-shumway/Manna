// This file was generated based on C:/Users/Shumcom/Documents/Fuse/Manna/hikr/build/Android/Preview/cache/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseContro-28cdf58b.h>
#include <_root.hikr_FuseContro-8466e751.h>
#include <_root.hikr_FuseReacti-a0d5197a.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :43
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 0);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, uString::Const("Height"));
}

static void MainView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp5_Value_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :154
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :158
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :154
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;

// public MainView() [instance] :154
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :158
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp6 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp7 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp8 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp9 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp10 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp11 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp12 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp13 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp14 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp15 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp16 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp17 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp18 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp19 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp20 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp21 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp22 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::hikr_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("hikes"));
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::hikr_FuseControlsTextControl_Value_Property::New1(temp1, MainView::__selector1_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("name"));
    ::g::Fuse::Controls::TextBox* temp2 = ::g::Fuse::Controls::TextBox::New4();
    temp2_Value_inst = ::g::hikr_FuseControlsTextInputControl_Value_Property::New1(temp2, MainView::__selector1_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("location"));
    ::g::Fuse::Controls::TextBox* temp3 = ::g::Fuse::Controls::TextBox::New4();
    temp3_Value_inst = ::g::hikr_FuseControlsTextInputControl_Value_Property::New1(temp3, MainView::__selector1_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("distance"));
    ::g::Fuse::Controls::TextBox* temp4 = ::g::Fuse::Controls::TextBox::New4();
    temp4_Value_inst = ::g::hikr_FuseControlsTextInputControl_Value_Property::New1(temp4, MainView::__selector1_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("rating"));
    ::g::Fuse::Controls::TextView* temp5 = ::g::Fuse::Controls::TextView::New3();
    temp5_Value_inst = ::g::hikr_FuseControlsTextInputControl_Value_Property::New1(temp5, MainView::__selector1_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("comments"));
    ::g::Fuse::Controls::ClientPanel* temp29 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Reactive::JavaScript* temp30 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp31 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp32 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template* temp33 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Text* temp35 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp25, 3);
    ::g::Fuse::Controls::Text* temp39 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Text* temp41 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp42 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Text* temp43 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp28, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    temp30->Code(uString::Const("\n"
        "\t\t\n"
        "\t\tvar hikes = [\n"
        "\t\t{\n"
        "\t\t\tid:0,\n"
        "\t\t\tname: \"Tricky Trails\",\n"
        "\t\t\tlocation: \"Lakebed, Utah\",\n"
        "\t\t\tdistance: 10.4,\n"
        "\t\t\trating: 4,\n"
        "\t\t\tcomments: \"This hike was a nice and hike-like. Glad I didn't bring a bike.\"\n"
        "\t\t},\n"
        "\t\t{\n"
        "\t\t\tid: 1,\n"
        "\t\t\tname: \"Mondo Mountains\",\n"
        "\t\t\tlocation: \"Black Hills, South Dakota\",\n"
        "\t\t\tdistance: 20.86,\n"
        "\t\t\trating: 3,\n"
        "\t\t\tcomments: \"Not the best, but would probably do again. Note to self: don't forget the sandwiches next time.\"\n"
        "\t\t},\n"
        "\t\t{\n"
        "\t\t\tid: 2,\n"
        "\t\t\tname: \"Pesky Peaks\",\n"
        "\t\t\tlocation: \"Bergenhagen, Norway\",\n"
        "\t\t\tdistance: 8.2,\n"
        "\t\t\trating: 5,\n"
        "\t\t\tcomments: \"Short but SO sweet!!\"\n"
        "\t\t},\n"
        "\t\t{\n"
        "\t\t\tid: 3,\n"
        "\t\t\tname: \"Rad Rivers\",\n"
        "\t\t\tlocation: \"Moriyama, Japan\",\n"
        "\t\t\tdistance: 12.3,\n"
        "\t\t\trating: 4,\n"
        "\t\t\tcomments: \"Took my time with this one. Great view!\"\n"
        "\t\t},\n"
        "\t\t{\n"
        "\t\t\tid: 4,\n"
        "\t\t\tname: \"Dangerous Dirt\",\n"
        "\t\t\tlocation: \"Cactus, Arizona\",\n"
        "\t\t\tdistance: 19.34,\n"
        "\t\t\trating: 2,\n"
        "\t\t\tcomments: \"Too long, too hot. Also that snakebite wasn't very fun.\"\n"
        "\t\t}\n"
        "\t\t]\n"
        "\n"
        "\n"
        "\t\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\t\tvar hike = Observable();\n"
        "\n"
        "\t\tvar name = hike.map(function(x) { return x.name; });\n"
        "\t\tvar location = hike.map(function(x) { return x.location; });\n"
        "\t\tvar distance = hike.map(function(x) { return x.distance; });\n"
        "\t\tvar rating = hike.map(function(x) { return x.rating; });\n"
        "\t\tvar comments = hike.map(function(x) { return x.comments; });\n"
        "\n"
        "\n"
        "\n"
        "\t\tmodule.exports = {\n"
        "\t\t\thikes: hikes,\n"
        "\n"
        "\t\t\tname: name,\n"
        "\t\t\tlocation: location,\n"
        "\t\t\tdistance: distance,\n"
        "\t\t\trating: rating,\n"
        "\t\t\tcomments: comments,\n"
        "\t\t\tchooseHike: chooseHike\n"
        "\t\t};\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\t\tfunction chooseHike(arg) {\n"
        "\t\t\thike.value = arg.data;\n"
        "\t\t}\n"
        "\n"
        "\t\t"));
    temp30->LineNumber(8);
    temp30->FileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp34);
    temp35->Value(uString::Const("Name:"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp36);
    temp37->Value(uString::Const("Location:"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp38);
    temp39->Value(uString::Const("Distance (km)"));
    temp3->InputHint(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp40);
    temp41->Value(uString::Const("Rating:"));
    temp4->InputHint(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp42);
    temp43->Value(uString::Const("Comments:"));
    temp5->TextWrapping(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp44);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
}

// public MainView New() [static] :154
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
