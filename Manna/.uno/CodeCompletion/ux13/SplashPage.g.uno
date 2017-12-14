[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Text mannaLogo;
    internal global::Fuse.Controls.Video _video;
    internal global::Fuse.Controls.DockPanel DockPanel;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "mannaLogo",
        "_video",
        "DockPanel",
        "temp_eb3"
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
        mannaLogo = new global::Fuse.Controls.Text();
        _video = new global::Fuse.Controls.Video();
        DockPanel = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::Manna.Button();
        var temp4 = new global::Fuse.Controls.Text();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp);
        var temp5 = new global::Fuse.Controls.BottomFrameBackground();
        var temp6 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.7215686f, 0.3019608f, 1f));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/SplashPage.js"));
        temp2.ClipToBounds = true;
        temp2.Background = temp6;
        temp2.Children.Add(mannaLogo);
        temp2.Children.Add(_video);
        temp2.Children.Add(DockPanel);
        mannaLogo.Value = "Manna";
        mannaLogo.FontSize = 75f;
        mannaLogo.TextColor = float4(1f, 1f, 1f, 1f);
        mannaLogo.Alignment = Fuse.Elements.Alignment.Center;
        mannaLogo.Padding = float4(0f, 200f, 0f, 0f);
        mannaLogo.Name = __selector0;
        mannaLogo.Font = global::MainView.Stya;
        _video.IsLooping = true;
        _video.AutoPlay = true;
        _video.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        _video.Opacity = 0.7f;
        _video.Layer = Fuse.Layer.Background;
        _video.Name = __selector1;
        _video.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Montage30_720p.mp4"));
        DockPanel.Name = __selector2;
        DockPanel.Children.Add(temp3);
        DockPanel.Children.Add(temp5);
        temp3.MinWidth = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp3.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp3.Y = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp3.ButtonColor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp3.ButtonOpacity = 0.95f;
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb3.OnEvent);
        temp3.Children.Add(temp4);
        temp3.Bindings.Add(temp_eb3);
        temp4.Value = "Get Started";
        temp4.FontSize = 20f;
        temp4.Color = float4(0.5333334f, 0.5333334f, 0.5333334f, 1f);
        temp4.Alignment = Fuse.Elements.Alignment.Center;
        temp4.Font = global::MainView.Gotika;
        temp5.Opacity = 0.1f;
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(mannaLogo);
        __g_nametable.Objects.Add(_video);
        __g_nametable.Objects.Add(DockPanel);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "mannaLogo";
    static global::Uno.UX.Selector __selector1 = "_video";
    static global::Uno.UX.Selector __selector2 = "DockPanel";
}
