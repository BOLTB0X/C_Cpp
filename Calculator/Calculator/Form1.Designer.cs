
namespace Calculator
{
    partial class Calculator
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.varialbe1 = new System.Windows.Forms.TextBox();
            this.varialbe2 = new System.Windows.Forms.TextBox();
            this.Add = new System.Windows.Forms.Button();
            this.Sub = new System.Windows.Forms.Button();
            this.Mul = new System.Windows.Forms.Button();
            this.Div = new System.Windows.Forms.Button();
            this.resultLabel = new System.Windows.Forms.Label();
            this.ResultListView = new System.Windows.Forms.ListView();
            this.SuspendLayout();
            // 
            // varialbe1
            // 
            this.varialbe1.Location = new System.Drawing.Point(107, 22);
            this.varialbe1.Name = "varialbe1";
            this.varialbe1.Size = new System.Drawing.Size(588, 28);
            this.varialbe1.TabIndex = 0;
            // 
            // varialbe2
            // 
            this.varialbe2.Location = new System.Drawing.Point(107, 75);
            this.varialbe2.Name = "varialbe2";
            this.varialbe2.Size = new System.Drawing.Size(588, 28);
            this.varialbe2.TabIndex = 1;
            // 
            // Add
            // 
            this.Add.Font = new System.Drawing.Font("굴림", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Add.Location = new System.Drawing.Point(107, 145);
            this.Add.Name = "Add";
            this.Add.Size = new System.Drawing.Size(110, 49);
            this.Add.TabIndex = 2;
            this.Add.Text = "+";
            this.Add.UseVisualStyleBackColor = true;
            this.Add.Click += new System.EventHandler(this.Add_Click);
            // 
            // Sub
            // 
            this.Sub.Font = new System.Drawing.Font("굴림", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Sub.Location = new System.Drawing.Point(270, 145);
            this.Sub.Name = "Sub";
            this.Sub.Size = new System.Drawing.Size(110, 49);
            this.Sub.TabIndex = 3;
            this.Sub.Text = "-";
            this.Sub.UseVisualStyleBackColor = true;
            this.Sub.Click += new System.EventHandler(this.Sub_Click);
            // 
            // Mul
            // 
            this.Mul.Font = new System.Drawing.Font("굴림", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Mul.Location = new System.Drawing.Point(428, 145);
            this.Mul.Name = "Mul";
            this.Mul.Size = new System.Drawing.Size(110, 49);
            this.Mul.TabIndex = 4;
            this.Mul.Text = "*";
            this.Mul.UseVisualStyleBackColor = true;
            this.Mul.Click += new System.EventHandler(this.Mul_Click);
            // 
            // Div
            // 
            this.Div.Font = new System.Drawing.Font("굴림", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Div.Location = new System.Drawing.Point(585, 145);
            this.Div.Name = "Div";
            this.Div.Size = new System.Drawing.Size(110, 49);
            this.Div.TabIndex = 5;
            this.Div.Text = "/";
            this.Div.UseVisualStyleBackColor = true;
            this.Div.Click += new System.EventHandler(this.Div_Click);
            // 
            // resultLabel
            // 
            this.resultLabel.Location = new System.Drawing.Point(246, 234);
            this.resultLabel.Name = "resultLabel";
            this.resultLabel.Size = new System.Drawing.Size(314, 42);
            this.resultLabel.TabIndex = 6;
            this.resultLabel.Text = "결과";
            this.resultLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // ResultListView
            // 
            this.ResultListView.HideSelection = false;
            this.ResultListView.Location = new System.Drawing.Point(107, 286);
            this.ResultListView.Name = "ResultListView";
            this.ResultListView.Size = new System.Drawing.Size(588, 133);
            this.ResultListView.TabIndex = 7;
            this.ResultListView.UseCompatibleStateImageBehavior = false;
            // 
            // Calculator
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.ResultListView);
            this.Controls.Add(this.resultLabel);
            this.Controls.Add(this.Div);
            this.Controls.Add(this.Mul);
            this.Controls.Add(this.Sub);
            this.Controls.Add(this.Add);
            this.Controls.Add(this.varialbe2);
            this.Controls.Add(this.varialbe1);
            this.Name = "Calculator";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox varialbe1;
        private System.Windows.Forms.TextBox varialbe2;
        private System.Windows.Forms.Button Add;
        private System.Windows.Forms.Button Sub;
        private System.Windows.Forms.Button Mul;
        private System.Windows.Forms.Button Div;
        private System.Windows.Forms.Label resultLabel;
        private System.Windows.Forms.ListView ResultListView;
    }
}

