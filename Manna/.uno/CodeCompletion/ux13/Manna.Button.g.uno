namespace Manna
{
    [Uno.Compiler.UxGenerated]
    public partial class Button: Fuse.Controls.Panel
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        float _field_FontSize;
        [global::Uno.UX.UXOriginSetter("SetFontSize")]
        public float FontSize
        {
            get { return _field_FontSize; }
            set { SetFontSize(value, null); }
        }
        public void SetFontSize(float value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_FontSize)
            {
                _field_FontSize = value;
                OnPropertyChanged("FontSize", origin);
            }
        }
        string _field_Color;
        [global::Uno.UX.UXOriginSetter("SetColor")]
        public string Color
        {
            get { return _field_Color; }
            set { SetColor(value, null); }
        }
        public void SetColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Color)
            {
                _field_Color = value;
                OnPropertyChanged("Color", origin);
            }
        }
        global::Uno.UX.Property<float> temp_Opacity_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<float> temp1_FontSize_inst;
        static Button()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Button()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp2 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Controls.Rectangle();
            temp_Opacity_inst = new Manna_FuseElementsElement_Opacity_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Property(temp2, Manna_accessor_Fuse_Elements_Element_Opacity.Singleton);
            var temp4 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new Manna_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp5 = new global::Fuse.Reactive.Property(temp4, Manna_accessor_Manna_Button_Text.Singleton);
            var temp6 = new global::Fuse.Reactive.Constant(this);
            temp1_FontSize_inst = new Manna_FuseControlsTextControl_FontSize_Property(temp1, __selector2);
            var temp7 = new global::Fuse.Reactive.Property(temp6, Manna_accessor_Manna_Button_FontSize.Singleton);
            var temp8 = new global::Fuse.Effects.DropShadow();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_Opacity_inst, temp3, Fuse.Reactive.BindingMode.Read);
            var temp10 = new global::Fuse.Effects.DropShadow();
            var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Read);
            var temp12 = new global::Fuse.Reactive.DataBinding(temp1_FontSize_inst, temp7, Fuse.Reactive.BindingMode.Read);
            var temp13 = new global::Fuse.Gestures.WhilePressed();
            var temp14 = new global::Fuse.Animations.Scale();
            this.Margin = float4(10f, 10f, 10f, 10f);
            this.Padding = float4(10f, 10f, 10f, 10f);
            this.Opacity = 1f;
            this.FontSize = 16f;
            temp.CornerRadius = float4(4f, 4f, 4f, 4f);
            temp.Color = Fuse.Drawing.Colors.White;
            temp.Layer = Fuse.Layer.Background;
            temp.Children.Add(temp8);
            temp.Bindings.Add(temp9);
            temp8.Angle = 135f;
            temp1.TextColor = Fuse.Drawing.Colors.White;
            temp1.Alignment = Fuse.Elements.Alignment.Center;
            temp1.Children.Add(temp10);
            temp1.Bindings.Add(temp11);
            temp1.Bindings.Add(temp12);
            temp10.Angle = 135f;
            temp10.Distance = 3f;
            temp10.Color = float4(0.3333333f, 0.3333333f, 0.3333333f, 1f);
            temp13.Animators.Add(temp14);
            temp14.Factor = 0.98f;
            temp14.Duration = 0.08;
            temp14.Easing = Fuse.Animations.Easing.QuadraticOut;
            this.Children.Add(temp);
            this.Children.Add(temp1);
            this.Children.Add(temp13);
        }
        static global::Uno.UX.Selector __selector0 = "Opacity";
        static global::Uno.UX.Selector __selector1 = "Value";
        static global::Uno.UX.Selector __selector2 = "FontSize";
    }
}
