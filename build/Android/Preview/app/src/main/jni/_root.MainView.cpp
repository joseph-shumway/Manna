// This file was generated based on '../../../../Documents/Fuse/Manna/build/Android/Preview/cache/ux13/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
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
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
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
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[87];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :4
static void MainView__cctor_1_fn(uType* __type)
{
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
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, ::STRINGS[0/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, ::STRINGS[1/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, ::STRINGS[2/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, ::STRINGS[3/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, ::STRINGS[4/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, ::STRINGS[5/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, ::STRINGS[6/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, ::STRINGS[7/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, ::STRINGS[8/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, ::STRINGS[9/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, ::STRINGS[10/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, ::STRINGS[11/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, ::STRINGS[12/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, ::STRINGS[13/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, ::STRINGS[14/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, ::STRINGS[15/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, ::STRINGS[16/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, ::STRINGS[17/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, ::STRINGS[18/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, ::STRINGS[19/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, ::STRINGS[20/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, ::STRINGS[21/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, ::STRINGS[22/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, ::STRINGS[23/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, ::STRINGS[24/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, ::STRINGS[25/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, ::STRINGS[26/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, ::STRINGS[27/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, ::STRINGS[28/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, ::STRINGS[29/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, ::STRINGS[30/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), ::STRINGS[31/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, ::STRINGS[31/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), ::STRINGS[32/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, ::STRINGS[32/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), ::STRINGS[33/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, ::STRINGS[33/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), ::STRINGS[34/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, ::STRINGS[34/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), ::STRINGS[35/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, ::STRINGS[35/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), ::STRINGS[36/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, ::STRINGS[36/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), ::STRINGS[37/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, ::STRINGS[37/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), ::STRINGS[38/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, ::STRINGS[38/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), ::STRINGS[39/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, ::STRINGS[39/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), ::STRINGS[40/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, ::STRINGS[40/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), ::STRINGS[41/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, ::STRINGS[41/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), ::STRINGS[42/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, ::STRINGS[42/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), ::STRINGS[43/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, ::STRINGS[43/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), ::STRINGS[44/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, ::STRINGS[44/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), ::STRINGS[45/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, ::STRINGS[45/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), ::STRINGS[46/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, ::STRINGS[46/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), ::STRINGS[47/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, ::STRINGS[47/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, ::STRINGS[48/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, ::STRINGS[49/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, ::STRINGS[50/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, ::STRINGS[51/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, ::STRINGS[52/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, ::STRINGS[53/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, ::STRINGS[54/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, ::STRINGS[55/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, ::STRINGS[56/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, ::STRINGS[56/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, ::STRINGS[57/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, ::STRINGS[58/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, ::STRINGS[59/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, ::STRINGS[59/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, ::STRINGS[60/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, ::STRINGS[61/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, ::STRINGS[62/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, ::STRINGS[62/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, ::STRINGS[63/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, ::STRINGS[64/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, ::STRINGS[65/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, ::STRINGS[66/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, ::STRINGS[67/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, ::STRINGS[68/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, ::STRINGS[69/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, ::STRINGS[70/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, ::STRINGS[71/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, ::STRINGS[72/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, ::STRINGS[73/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, ::STRINGS[74/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, ::STRINGS[75/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, ::STRINGS[76/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, ::STRINGS[77/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, ::STRINGS[78/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, ::STRINGS[79/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, ::STRINGS[80/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[81/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, ::STRINGS[82/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, ::STRINGS[83/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, ::STRINGS[84/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, ::STRINGS[85/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, ::STRINGS[86/*"Height"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Linear");
    ::STRINGS[1] = uString::Const("QuadraticIn");
    ::STRINGS[2] = uString::Const("QuadraticOut");
    ::STRINGS[3] = uString::Const("QuadraticInOut");
    ::STRINGS[4] = uString::Const("CubicIn");
    ::STRINGS[5] = uString::Const("CubicOut");
    ::STRINGS[6] = uString::Const("CubicInOut");
    ::STRINGS[7] = uString::Const("QuarticIn");
    ::STRINGS[8] = uString::Const("QuarticOut");
    ::STRINGS[9] = uString::Const("QuarticInOut");
    ::STRINGS[10] = uString::Const("QuinticIn");
    ::STRINGS[11] = uString::Const("QuinticOut");
    ::STRINGS[12] = uString::Const("QuinticInOut");
    ::STRINGS[13] = uString::Const("SinusoidalIn");
    ::STRINGS[14] = uString::Const("SinusoidalOut");
    ::STRINGS[15] = uString::Const("SinusoidalInOut");
    ::STRINGS[16] = uString::Const("ExponentialIn");
    ::STRINGS[17] = uString::Const("ExponentialOut");
    ::STRINGS[18] = uString::Const("ExponentialInOut");
    ::STRINGS[19] = uString::Const("CircularIn");
    ::STRINGS[20] = uString::Const("CircularOut");
    ::STRINGS[21] = uString::Const("CircularInOut");
    ::STRINGS[22] = uString::Const("ElasticIn");
    ::STRINGS[23] = uString::Const("ElasticOut");
    ::STRINGS[24] = uString::Const("ElasticInOut");
    ::STRINGS[25] = uString::Const("BackIn");
    ::STRINGS[26] = uString::Const("BackOut");
    ::STRINGS[27] = uString::Const("BackInOut");
    ::STRINGS[28] = uString::Const("BounceIn");
    ::STRINGS[29] = uString::Const("BounceOut");
    ::STRINGS[30] = uString::Const("BounceInOut");
    ::STRINGS[31] = uString::Const("Transparent");
    ::STRINGS[32] = uString::Const("Black");
    ::STRINGS[33] = uString::Const("Silver");
    ::STRINGS[34] = uString::Const("Gray");
    ::STRINGS[35] = uString::Const("White");
    ::STRINGS[36] = uString::Const("Maroon");
    ::STRINGS[37] = uString::Const("Red");
    ::STRINGS[38] = uString::Const("Purple");
    ::STRINGS[39] = uString::Const("Fuchsia");
    ::STRINGS[40] = uString::Const("Green");
    ::STRINGS[41] = uString::Const("Lime");
    ::STRINGS[42] = uString::Const("Olive");
    ::STRINGS[43] = uString::Const("Yellow");
    ::STRINGS[44] = uString::Const("Navy");
    ::STRINGS[45] = uString::Const("Blue");
    ::STRINGS[46] = uString::Const("Teal");
    ::STRINGS[47] = uString::Const("Aqua");
    ::STRINGS[48] = uString::Const("TopLeft");
    ::STRINGS[49] = uString::Const("Center");
    ::STRINGS[50] = uString::Const("Anchor");
    ::STRINGS[51] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[52] = uString::Const("VerticalBoxCenter");
    ::STRINGS[53] = uString::Const("TransformOriginOffset");
    ::STRINGS[54] = uString::Const("PositionOffset");
    ::STRINGS[55] = uString::Const("SizeFactor");
    ::STRINGS[56] = uString::Const("Size");
    ::STRINGS[57] = uString::Const("GiveFocus");
    ::STRINGS[58] = uString::Const("Keyboard");
    ::STRINGS[59] = uString::Const("LayoutChange");
    ::STRINGS[60] = uString::Const("WorldPositionChange");
    ::STRINGS[61] = uString::Const("PositionChange");
    ::STRINGS[62] = uString::Const("SizeChange");
    ::STRINGS[63] = uString::Const("Points");
    ::STRINGS[64] = uString::Const("Pixels");
    ::STRINGS[65] = uString::Const("ContentSize");
    ::STRINGS[66] = uString::Const("ScrollViewSize");
    ::STRINGS[67] = uString::Const("PreloadRetain");
    ::STRINGS[68] = uString::Const("UnloadUnused");
    ::STRINGS[69] = uString::Const("QuickUnload");
    ::STRINGS[70] = uString::Const("UnloadInBackground");
    ::STRINGS[71] = uString::Const("Thin");
    ::STRINGS[72] = uString::Const("Light");
    ::STRINGS[73] = uString::Const("Regular");
    ::STRINGS[74] = uString::Const("Medium");
    ::STRINGS[75] = uString::Const("Bold");
    ::STRINGS[76] = uString::Const("ThinItalic");
    ::STRINGS[77] = uString::Const("LightItalic");
    ::STRINGS[78] = uString::Const("Italic");
    ::STRINGS[79] = uString::Const("MediumItalic");
    ::STRINGS[80] = uString::Const("BoldItalic");
    ::STRINGS[81] = uString::Const("PlatformDefault");
    ::STRINGS[82] = uString::Const("Identity");
    ::STRINGS[83] = uString::Const("Local");
    ::STRINGS[84] = uString::Const("ParentSize");
    ::STRINGS[85] = uString::Const("Width");
    ::STRINGS[86] = uString::Const("Height");
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 9;
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

// public MainView() :115
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :119
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :115
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :115
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :119
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp1 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp2 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp3 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp4 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp5 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp6 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp7 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp8 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp9 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp10 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp11 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp12 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp13 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp14 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp15 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp16 = ::g::FuseJS::UserEvents::New2();
}

// public MainView New() [static] :115
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
