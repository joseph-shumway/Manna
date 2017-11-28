[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
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
        var temp = new global::Fuse.Reactive.Data("goToHomePage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::Fuse.Controls.Text();
        var temp4 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../Assets/Stya.ttf")));
        var temp5 = new global::Fuse.Controls.Video();
        var temp6 = new global::Fuse.Effects.Blur();
        var temp7 = new global::Fuse.Controls.DockPanel();
        var temp8 = new global::Fuse.Controls.Grid();
        var temp9 = new global::Manna.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp);
        var temp10 = new global::Manna.Border();
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.7215686f, 0.3019608f, 1f));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/SplashPage.js"));
        temp2.ClipToBounds = true;
        temp2.Background = temp11;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp7);
        temp3.Value = "Manna";
        temp3.FontSize = 75f;
        temp3.TextColor = Fuse.Drawing.Colors.White;
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp3.Padding = float4(0f, 200f, 0f, 0f);
        temp3.Font = temp4;
        temp5.IsLooping = true;
        temp5.AutoPlay = true;
        temp5.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp5.Opacity = 0.7f;
        temp5.Layer = Fuse.Layer.Background;
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Montage.mp4"));
        temp5.Children.Add(temp6);
        temp6.Radius = 1.5f;
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp10);
        temp8.Children.Add(temp9);
        temp9.MinWidth = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp9.MinHeight = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp9.Alignment = Fuse.Elements.Alignment.Center;
        temp9.Y = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp9.Opacity = 0.75f;
        temp9.Text = "Menu";
        temp9.FontSize = 20f;
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb0.OnEvent);
        temp9.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
