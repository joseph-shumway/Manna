using Manna.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Manna
{
    public partial class MainPage : ContentPage
    {
        private string TestingText;

        public MainPage()
        {


            TestThing testThing = new TestThing
            {
                TextThing = "0"
            };
            BindingContext = testThing;

            InitializeComponent();
        }

        public void UpdateText()
        {

        }
    }
}
