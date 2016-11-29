#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// UserInfo 摘要
	/// </summary>
	public ref class UserInfo : public System::Windows::Forms::Form
	{
	public:
		UserInfo(String ^IDtemp)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			ID=gcnew String(IDtemp);
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~UserInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exit_button;
	protected: 
	private: System::Windows::Forms::Label^  lb_RT;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  lb_BD;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tb_classinfo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_Name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_id;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  mini_button;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tb_Phonenum;
	private: System::Windows::Forms::TextBox^  tb_sign;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tb_QQnum;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserInfo::typeid));
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->lb_RT = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lb_BD = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_classinfo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_id = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->mini_button = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_Phonenum = (gcnew System::Windows::Forms::TextBox());
			this->tb_sign = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_QQnum = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::Color::Transparent;
			this->exit_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exit_button.BackgroundImage")));
			this->exit_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->exit_button->FlatAppearance->BorderSize = 0;
			this->exit_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exit_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_button->Location = System::Drawing::Point(495, 3);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(45, 48);
			this->exit_button->TabIndex = 28;
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &UserInfo::exit_button_Click);
			// 
			// lb_RT
			// 
			this->lb_RT->AutoSize = true;
			this->lb_RT->BackColor = System::Drawing::Color::Transparent;
			this->lb_RT->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lb_RT->ForeColor = System::Drawing::Color::OrangeRed;
			this->lb_RT->Location = System::Drawing::Point(334, 188);
			this->lb_RT->Name = L"lb_RT";
			this->lb_RT->Size = System::Drawing::Size(0, 27);
			this->lb_RT->TabIndex = 73;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(218, 188);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(110, 27);
			this->label16->TabIndex = 72;
			this->label16->Text = L"注 册 时 间";
			// 
			// lb_BD
			// 
			this->lb_BD->AutoSize = true;
			this->lb_BD->BackColor = System::Drawing::Color::Transparent;
			this->lb_BD->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lb_BD->ForeColor = System::Drawing::Color::OrangeRed;
			this->lb_BD->Location = System::Drawing::Point(334, 228);
			this->lb_BD->Name = L"lb_BD";
			this->lb_BD->Size = System::Drawing::Size(0, 27);
			this->lb_BD->TabIndex = 71;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(242, 228);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 27);
			this->label14->TabIndex = 70;
			this->label14->Text = L"生  日";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(34, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 27);
			this->label4->TabIndex = 69;
			this->label4->Text = L"班 级 信 息";
			// 
			// tb_classinfo
			// 
			this->tb_classinfo->BackColor = System::Drawing::Color::LightBlue;
			this->tb_classinfo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_classinfo->Cursor = System::Windows::Forms::Cursors::Default;
			this->tb_classinfo->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_classinfo->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_classinfo->Location = System::Drawing::Point(151, 266);
			this->tb_classinfo->Name = L"tb_classinfo";
			this->tb_classinfo->ReadOnly = true;
			this->tb_classinfo->Size = System::Drawing::Size(340, 26);
			this->tb_classinfo->TabIndex = 68;
			this->tb_classinfo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(240, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 27);
			this->label3->TabIndex = 67;
			this->label3->Text = L"姓  名";
			// 
			// tb_Name
			// 
			this->tb_Name->BackColor = System::Drawing::Color::LightBlue;
			this->tb_Name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_Name->Cursor = System::Windows::Forms::Cursors::Default;
			this->tb_Name->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Name->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_Name->Location = System::Drawing::Point(339, 140);
			this->tb_Name->Name = L"tb_Name";
			this->tb_Name->ReadOnly = true;
			this->tb_Name->Size = System::Drawing::Size(180, 26);
			this->tb_Name->TabIndex = 66;
			this->tb_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(240, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 27);
			this->label2->TabIndex = 65;
			this->label2->Text = L"学  号";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(20, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 46);
			this->label1->TabIndex = 64;
			this->label1->Text = L"用户信息";
			// 
			// tb_id
			// 
			this->tb_id->BackColor = System::Drawing::Color::LightBlue;
			this->tb_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_id->Cursor = System::Windows::Forms::Cursors::Default;
			this->tb_id->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_id->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_id->Location = System::Drawing::Point(339, 92);
			this->tb_id->Margin = System::Windows::Forms::Padding(0);
			this->tb_id->Name = L"tb_id";
			this->tb_id->ReadOnly = true;
			this->tb_id->Size = System::Drawing::Size(180, 26);
			this->tb_id->TabIndex = 63;
			this->tb_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(28, 74);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(167, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 62;
			this->pictureBox1->TabStop = false;
			// 
			// mini_button
			// 
			this->mini_button->BackColor = System::Drawing::Color::Transparent;
			this->mini_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mini_button.BackgroundImage")));
			this->mini_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mini_button->FlatAppearance->BorderSize = 0;
			this->mini_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mini_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mini_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mini_button->Location = System::Drawing::Point(446, 5);
			this->mini_button->Name = L"mini_button";
			this->mini_button->Size = System::Drawing::Size(45, 48);
			this->mini_button->TabIndex = 61;
			this->mini_button->UseVisualStyleBackColor = false;
			this->mini_button->Click += gcnew System::EventHandler(this, &UserInfo::mini_button_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(52, 353);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 27);
			this->label13->TabIndex = 79;
			this->label13->Text = L"手  机";
			// 
			// tb_Phonenum
			// 
			this->tb_Phonenum->BackColor = System::Drawing::Color::LightBlue;
			this->tb_Phonenum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_Phonenum->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_Phonenum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_Phonenum->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_Phonenum->Location = System::Drawing::Point(151, 353);
			this->tb_Phonenum->Name = L"tb_Phonenum";
			this->tb_Phonenum->ReadOnly = true;
			this->tb_Phonenum->Size = System::Drawing::Size(196, 29);
			this->tb_Phonenum->TabIndex = 78;
			// 
			// tb_sign
			// 
			this->tb_sign->BackColor = System::Drawing::Color::LightBlue;
			this->tb_sign->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_sign->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_sign->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_sign->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_sign->Location = System::Drawing::Point(151, 398);
			this->tb_sign->Multiline = true;
			this->tb_sign->Name = L"tb_sign";
			this->tb_sign->ReadOnly = true;
			this->tb_sign->Size = System::Drawing::Size(361, 111);
			this->tb_sign->TabIndex = 77;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(42, 398);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 27);
			this->label11->TabIndex = 76;
			this->label11->Text = L"个性签名";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(62, 309);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 27);
			this->label10->TabIndex = 75;
			this->label10->Text = L"QQ";
			// 
			// tb_QQnum
			// 
			this->tb_QQnum->BackColor = System::Drawing::Color::LightBlue;
			this->tb_QQnum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_QQnum->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_QQnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_QQnum->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_QQnum->Location = System::Drawing::Point(151, 309);
			this->tb_QQnum->Name = L"tb_QQnum";
			this->tb_QQnum->ReadOnly = true;
			this->tb_QQnum->Size = System::Drawing::Size(196, 29);
			this->tb_QQnum->TabIndex = 74;
			// 
			// UserInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 526);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Phonenum);
			this->Controls->Add(this->tb_sign);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tb_QQnum);
			this->Controls->Add(this->lb_RT);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->lb_BD);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tb_classinfo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tb_Name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_id);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->mini_button);
			this->Controls->Add(this->exit_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"用户信息";
			this->Load += gcnew System::EventHandler(this, &UserInfo::UserInfo_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &UserInfo::UserInfo_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UserInfo::UserInfo_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Point mypoint;
    private:String^ID;
	private: System::Void UserInfo_Load(System::Object^  sender, System::EventArgs^  e) {
				 _student_do ^stu=gcnew _student_do;
				 stu->Set_SchoolId(ID);
				 //发送
				 ClientDo ^Sent=gcnew ClientDo;
				 Sent->op_Setport(4873);
				 Sent->op_Connect_Server();
				 Sent->op_Send(stu->get_SchoolId());
				 String^Response=Sent->op_Receive();
				 if(Response->Contains("N")){
					 MessageBox::Show("信息加载失败，请重试！");
					 Close();
				 }
				 else{
					 stu->decode(Response);
				 }
				 Sent->op_Shutdown_Server();
				 //显示到界面
				 tb_id->Text=stu->get_SchoolId();
				 tb_Name->Text=stu->get_Name();
				 tb_classinfo->Text=stu->get_Academy()+" "+stu->get_Major()+" "+stu->get_Class();
				 tb_QQnum->Text=stu->get_QQnum();
				 tb_sign->Text=stu->get_Signature();
				 tb_Phonenum->Text=stu->get_Phonenum();
				 lb_BD->Text=stu->get_BirthDate();
				 lb_RT->Text=stu->get_RegistDate();
			 }
	private: System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }

    private: System::Void mini_button_Click(System::Object^  sender, System::EventArgs^  e) {
	    		 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
		     }
private: System::Void UserInfo_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mypoint.X = e->X, mypoint.Y = e->Y;
		 }
private: System::Void UserInfo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }

		 }
};
}
