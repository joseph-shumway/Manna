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
        string _field_ButtonColor;
        [global::Uno.UX.UXOriginSetter("SetButtonColor")]
        public string ButtonColor
        {
            get { return _field_ButtonColor; }
            set { SetButtonColor(value, null); }
        }
        public void SetButtonColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_ButtonColor)
            {
                _field_ButtonColor = value;
                OnPropertyChanged("ButtonColor", origin);
            }
        }
        string _field_TextColor;
        [global::Uno.UX.UXOriginSetter("SetTextColor")]
        public string TextColor
        {
            get { return _field_TextColor; }
            set { SetTextColor(value, null); }
        }
        public void SetTextColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_TextColor)
            {
                _field_TextColor = value;
                OnPropertyChanged("TextColor", origin);
            }
        }
        float _field_ButtonOpacity;
        [global::Uno.UX.UXOriginSetter("SetButtonOpacity")]
        public float ButtonOpacity
        {
            get { return _field_ButtonOpacity; }
            set { SetButtonOpacity(value, null); }
        }
        public void SetButtonOpacity(float value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_ButtonOpacity)
            {
                _field_ButtonOpacity = value;
                OnPropertyChanged("ButtonOpacity", origin);
            }
        }
        float _field_TextOpacity;
        [global::Uno.UX.UXOriginSetter("SetTextOpacity")]
        public float TextOpacity
        {
            get { return _field_TextOpacity; }
            set { SetTextOpacity(value, null); }
        }
        public void SetTextOpacity(float value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_TextOpacity)
            {
                _field_TextOpacity = value;
                OnPropertyChanged("TextOpacity", origin);
            }
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float> temp_Opacity_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<float4> temp1_TextColor_inst;
        global::Uno.UX.Property<float> temp1_FontSize_inst;
        global::Uno.UX.Property<float> temp1_Opacity_inst;
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
            temp_Color_inst = new Manna_FuseControlsShape_Color_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Property(temp2, Manna_accessor_Manna_Button_ButtonColor.Singleton);
            var temp4 = new global::Fuse.Reactive.Constant(this);
            temp_Opacity_inst = new Manna_FuseElementsElement_Opacity_Property(temp, __selector1);
            var temp5 = new global::Fuse.Reactive.Property(temp4, Manna_accessor_Manna_Button_ButtonOpacity.Singleton);
            var temp6 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new Manna_FuseControlsTextControl_Value_Property(temp1, __selector2);
            var temp7 = new global::Fuse.Reactive.Property(temp6, Manna_accessor_Manna_Button_Text.Singleton);
            var temp8 = new global::Fuse.Reactive.Constant(this);
            temp1_TextColor_inst = new Manna_FuseControlsTextControl_TextColor_Property(temp1, __selector3);
            var temp9 = new global::Fuse.Reactive.Property(temp8, Manna_accessor_Manna_Button_TextColor.Singleton);
            var temp10 = new global::Fuse.Reactive.Constant(this);
            temp1_FontSize_inst = new Manna_FuseControlsTextControl_FontSize_Property(temp1, __selector4);
            var temp11 = new global::Fuse.Reactive.Property(temp10, Manna_accessor_Manna_Button_FontSize.Singleton);
            var temp12 = new global::Fuse.Reactive.Constant(this);
            temp1_Opacity_inst = new Manna_FuseElementsElement_Opacity_Property(temp1, __selector1);
            var temp13 = new global::Fuse.Reactive.Property(temp12, Manna_accessor_Manna_Button_TextOpacity.Singleton);
            var temp14 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp3, Fuse.Reactive.BindingMode.Read);
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Opacity_inst, temp5, Fuse.Reactive.BindingMode.Read);
            var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
            var temp17 = new global::Fuse.Reactive.DataBinding(temp1_TextColor_inst, temp9, Fuse.Reactive.BindingMode.Read);
            var temp18 = new global::Fuse.Reactive.DataBinding(temp1_FontSize_inst, temp11, Fuse.Reactive.BindingMode.Read);
            var temp19 = new global::Fuse.Reactive.DataBinding(temp1_Opacity_inst, temp13, Fuse.Reactive.BindingMode.Read);
            var temp20 = new global::Fuse.Gestures.WhilePressed();
            var temp21 = new global::Fuse.Animations.Scale();
            this.Margin = float4(10f, 10f, 10f, 10f);
            this.Padding = float4(10f, 10f, 10f, 10f);
            this.FontSize = 16f;
            this.ButtonOpacity = 1f;
            temp.CornerRadius = float4(50f, 50f, 50f, 50f);
            temp.Layer = Fuse.Layer.Background;
            temp.Bindings.Add(temp14);
            temp.Bindings.Add(temp15);
            temp1.Alignment = Fuse.Elements.Alignment.Center;
            temp1.Bindings.Add(temp16);
            temp1.Bindings.Add(temp17);
            temp1.Bindings.Add(temp18);
            temp1.Bindings.Add(temp19);
            temp20.Animators.Add(temp21);
            temp21.Factor = 0.98f;
            temp21.Duration = 0.08;
            temp21.Easing = Fuse.Animations.Easing.QuadraticOut;
            this.Children.Add(temp);
            this.Children.Add(temp1);
            this.Children.Add(temp20);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Opacity";
        static global::Uno.UX.Selector __selector2 = "Value";
        static global::Uno.UX.Selector __selector3 = "TextColor";
        static global::Uno.UX.Selector __selector4 = "FontSize";
    }
}
