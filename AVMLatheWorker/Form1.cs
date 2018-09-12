using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AVMLatheWorker
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void addToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void panel3_Paint(object sender, PaintEventArgs e)
        {
            var g = e.Graphics;
            Pen myp = new Pen(System.Drawing.Color.Red, 4);
            Font fy = new Font("Helvetica", 10, FontStyle.Bold);
            Brush br = new SolidBrush(System.Drawing.Color.Red);
            g.DrawString("Hello", fy, br, 0, 0);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            panel3.Paint += new PaintEventHandler(panel3_Paint);
            panel3.Refresh();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }
    }
}
