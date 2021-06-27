using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Calculator : Form
    {
        public Calculator()
        {
            InitializeComponent();
            ResultListView.View = View.Details;
            ResultListView.Columns.Add("기록", 240);
        }

        private void Add_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(varialbe1.Text) + Convert.ToInt32(varialbe2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(varialbe1.Text + " + " + varialbe2.Text + " = " + result);
                ResultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력값이 잘못 되었습니다.\n";
            }
        }

        private void Sub_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(varialbe1.Text) - Convert.ToInt32(varialbe2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(varialbe1.Text + " - " + varialbe2.Text + " = " + result);
                ResultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력값이 잘못 되었습니다.\n";
            }
        }

        private void Mul_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(varialbe1.Text) * Convert.ToInt32(varialbe2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(varialbe1.Text + " * " + varialbe2.Text + " = " + result);
                ResultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력값이 잘못 되었습니다.\n";
            }
        }

        private void Div_Click(object sender, EventArgs e)
        {
            try
            {
                int result1 = Convert.ToInt32(varialbe1.Text) / Convert.ToInt32(varialbe2.Text);
                int result2 = Convert.ToInt32(varialbe1.Text) % Convert.ToInt32(varialbe2.Text);
                resultLabel.Text = Convert.ToString(result1);
                resultLabel.Text = Convert.ToString(result2);
                ListViewItem item = new ListViewItem(varialbe1.Text + " / " + varialbe2.Text + " = " + result1 + " , "+varialbe1.Text + " % " + varialbe2.Text + " = " + result2);
                ResultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력값이 잘못 되었습니다.\n";
            }
        }
    }
}
