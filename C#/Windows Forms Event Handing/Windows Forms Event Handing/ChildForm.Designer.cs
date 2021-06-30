
namespace Windows_Forms_Event_Handing
{
    partial class ChildForm
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
            this.dataTextBox = new System.Windows.Forms.TextBox();
            this.statusLabel = new System.Windows.Forms.Label();
            this.transferButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // dataTextBox
            // 
            this.dataTextBox.Location = new System.Drawing.Point(103, 41);
            this.dataTextBox.Name = "dataTextBox";
            this.dataTextBox.Size = new System.Drawing.Size(508, 28);
            this.dataTextBox.TabIndex = 0;
            this.dataTextBox.TextChanged += new System.EventHandler(this.dataTextBox_TextChanged);
            // 
            // statusLabel
            // 
            this.statusLabel.Location = new System.Drawing.Point(247, 90);
            this.statusLabel.Name = "statusLabel";
            this.statusLabel.Size = new System.Drawing.Size(210, 46);
            this.statusLabel.TabIndex = 1;
            this.statusLabel.Text = "상태";
            this.statusLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // transferButton
            // 
            this.transferButton.Location = new System.Drawing.Point(281, 149);
            this.transferButton.Name = "transferButton";
            this.transferButton.Size = new System.Drawing.Size(160, 58);
            this.transferButton.TabIndex = 2;
            this.transferButton.Text = "데이터 전송";
            this.transferButton.UseVisualStyleBackColor = true;
            this.transferButton.Click += new System.EventHandler(this.transferButton_Click);
            // 
            // ChildForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.transferButton);
            this.Controls.Add(this.statusLabel);
            this.Controls.Add(this.dataTextBox);
            this.Name = "ChildForm";
            this.Text = "ChildForm";
            this.Load += new System.EventHandler(this.ChildForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox dataTextBox;
        private System.Windows.Forms.Label statusLabel;
        private System.Windows.Forms.Button transferButton;
    }
}