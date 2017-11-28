[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Video _video;
    internal global::Fuse.Controls.DockPanel DockPanel;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "_video",
        "DockPanel",
        "temp_eb0"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goToMenuPage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::Fuse.Controls.Text();
        var temp4 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../Assets/Fonts/Stya.ttf")));
        _video = new global::Fuse.Controls.Video();
        DockPanel = new global::Fuse.Controls.DockPanel();
        var temp5 = new global::Manna.Button();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../Assets/Fonts/GotikaCaps.otf")));
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp);
        var temp8 = new global::Fuse.Controls.BottomFrameBackground();
        var temp9 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.7215686f, 0.3019608f, 1f));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/SplashPage.js"));
        temp2.ClipToBounds = true;
        temp2.Background = temp9;
        temp2.Children.Add(temp3);
        temp2.Children.Add(_video);
        temp2.Children.Add(DockPanel);
        temp3.Value = "Manna";
        temp3.FontSize = 75f;
        temp3.TextColor = float4(1f, 1f, 1f, 1f);
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp3.Padding = float4(0f, 200f, 0f, 0f);
        temp3.Font = temp4;
        _video.IsLooping = true;
        _video.AutoPlay = true;
        _video.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        _video.Opacity = 0.7f;
        _video.Layer = Fuse.Layer.Background;
        _video.Name = __selector0;
        _video.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Montage.mp4"));
        DockPanel.Name = __selector1;
        DockPanel.Children.Add(temp5);
        DockPanel.Children.Add(temp8);
        temp5.MinWidth = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp5.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp5.Alignment = Fuse.Elements.Alignment.Center;
        temp5.Y = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp5.ButtonColor = "#eeeeee";
        temp5.ButtonOpacity = 0.95f;
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb0.OnEvent);
        temp5.Children.Add(temp6);
        temp5.Bindings.Add(temp_eb0);
        temp6.Value = "Get Started";
        temp6.FontSize = 20f;
        temp6.Color = float4(0.5333334f, 0.5333334f, 0.5333334f, 1f);
        temp6.Alignment = Fuse.Elements.Alignment.Center;
        temp6.Font = temp7;
        temp8.Opacity = 0.1f;
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(_video);
        __g_nametable.Objects.Add(DockPanel);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "_video";
    static global::Uno.UX.Selector __selector1 = "DockPanel";
}
