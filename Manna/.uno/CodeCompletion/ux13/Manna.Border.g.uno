namespace Manna
{
    [Uno.Compiler.UxGenerated]
    public partial class Border: Fuse.Controls.Panel
    {
        static Border()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Border()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Rectangle();
            var temp1 = new global::Fuse.Controls.Rectangle();
            var temp2 = new global::Fuse.Controls.Rectangle();
            var temp3 = new global::Fuse.Controls.Rectangle();
            temp.Color = Fuse.Drawing.Colors.White;
            temp.MaxWidth = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
            temp.MaxHeight = new Uno.UX.Size(1800f, Uno.UX.Unit.Unspecified);
            temp.Alignment = Fuse.Elements.Alignment.Left;
            temp.Margin = float4(10f, 0f, 0f, 0f);
            temp.Padding = float4(10f, 0f, 0f, 0f);
            temp.Layer = Fuse.Layer.Background;
            temp1.Color = Fuse.Drawing.Colors.White;
            temp1.MaxWidth = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
            temp1.MaxHeight = new Uno.UX.Size(1800f, Uno.UX.Unit.Unspecified);
            temp1.Alignment = Fuse.Elements.Alignment.Right;
            temp1.Margin = float4(0f, 0f, 10f, 0f);
            temp1.Padding = float4(0f, 0f, 10f, 0f);
            temp1.Layer = Fuse.Layer.Background;
            temp2.Color = Fuse.Drawing.Colors.White;
            temp2.MaxWidth = new Uno.UX.Size(1800f, Uno.UX.Unit.Unspecified);
            temp2.MaxHeight = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
            temp2.Alignment = Fuse.Elements.Alignment.Top;
            temp2.Margin = float4(0f, 8f, 0f, 0f);
            temp2.Padding = float4(0f, 8f, 0f, 0f);
            temp2.Layer = Fuse.Layer.Background;
            temp3.Color = Fuse.Drawing.Colors.White;
            temp3.MaxWidth = new Uno.UX.Size(1800f, Uno.UX.Unit.Unspecified);
            temp3.MaxHeight = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
            temp3.Alignment = Fuse.Elements.Alignment.Bottom;
            temp3.Margin = float4(0f, 0f, 0f, 8f);
            temp3.Padding = float4(0f, 0f, 0f, 8f);
            temp3.Layer = Fuse.Layer.Background;
            this.Children.Add(temp);
            this.Children.Add(temp1);
            this.Children.Add(temp2);
            this.Children.Add(temp3);
        }
    }
}
