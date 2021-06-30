
namespace Windows_Forms_Event_Handing
{
    partial class ParentForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.openChildForm = new System.Windows.Forms.Button();
            this.dataLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // openChildForm
            // 
            this.openChildForm.Location = new System.Drawing.Point(266, 60);
            this.openChildForm.Name = "openChildForm";
            this.openChildForm.Size = new System.Drawing.Size(222, 69);
            this.openChildForm.TabIndex = 0;
            this.openChildForm.Text = "자식 폼 열기";
            this.openChildForm.UseVisualStyleBackColor = true;
            this.openChildForm.Click += new System.EventHandler(this.openChildForm_Click);
            this.openChildForm.MouseLeave += new System.EventHandler(this.openChildForm_MouseLeave);
            this.openChildForm.MouseHover += new System.EventHandler(this.openChildForm_MouseHover);
            // 
            // dataLabel
            // 
            this.dataLabel.AutoSize = true;
            this.dataLabel.Location = new System.Drawing.Point(351, 164);
            this.dataLabel.Name = "dataLabel";
            this.dataLabel.Size = new System.Drawing.Size(62, 18);
            this.dataLabel.TabIndex = 1;
            this.dataLabel.Text = "데이터";
            // 
            // ParentForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.dataLabel);
            this.Controls.Add(this.openChildForm);
            this.Name = "ParentForm";
            this.Text = "ParentForm";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button openChildForm;
        private System.Windows.Forms.Label dataLabel;
    }
}