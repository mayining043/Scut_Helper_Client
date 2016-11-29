#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Threading;
	/// <summary>
	/// LoginForm 摘要
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			tb_id->Text="";
			tb_Password->Text="";
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
			extern bool logright;
		}
	private: System::Windows::Forms::Button^  Quit;
	private: System::Windows::Forms::ImageList^  il_Quit;
	private: System::Windows::Forms::ImageList^  il_Hide;
	private: System::Windows::Forms::Button^  Hide;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb_id;
	private: System::Windows::Forms::TextBox^  tb_Password;
	private: System::Windows::Forms::ImageList^  il_Register;

	private: System::Windows::Forms::Button^  Login;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  IsStudent;
	private: System::Windows::Forms::RadioButton^  IsTeacher;
	private: System::Windows::Forms::Button^  Signin;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  lb_work;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ImageList^  il_Login;
	private: System::Windows::Forms::PictureBox^  pictureBox1;










	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->Quit = (gcnew System::Windows::Forms::Button());
			this->il_Quit = (gcnew System::Windows::Forms::ImageList(this->components));
			this->il_Hide = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Hide = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_id = (gcnew System::Windows::Forms::TextBox());
			this->tb_Password = (gcnew System::Windows::Forms::TextBox());
			this->il_Register = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Login = (gcnew System::Windows::Forms::Button());
			this->il_Login = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_work = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->Signin = (gcnew System::Windows::Forms::Button());
			this->IsTeacher = (gcnew System::Windows::Forms::RadioButton());
			this->IsStudent = (gcnew System::Windows::Forms::RadioButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Quit
			// 
			this->Quit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Quit->BackColor = System::Drawing::Color::Black;
			this->Quit->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Quit->FlatAppearance->BorderSize = 0;
			this->Quit->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->Quit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->Quit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Quit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Quit->ForeColor = System::Drawing::Color::Black;
			this->Quit->ImageIndex = 0;
			this->Quit->ImageList = this->il_Quit;
			this->Quit->Location = System::Drawing::Point(579, 0);
			this->Quit->Name = L"Quit";
			this->Quit->Size = System::Drawing::Size(21, 21);
			this->Quit->TabIndex = 0;
			this->Quit->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->Quit->UseVisualStyleBackColor = false;
			this->Quit->Click += gcnew System::EventHandler(this, &LoginForm::Quit_Click);
			this->Quit->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::Quit_MouseDown);
			this->Quit->MouseEnter += gcnew System::EventHandler(this, &LoginForm::Quit_MouseEnter);
			this->Quit->MouseLeave += gcnew System::EventHandler(this, &LoginForm::Quit_MouseLeave);
			// 
			// il_Quit
			// 
			this->il_Quit->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"il_Quit.ImageStream")));
			this->il_Quit->TransparentColor = System::Drawing::Color::Transparent;
			this->il_Quit->Images->SetKeyName(0, L"close_window2.png");
			this->il_Quit->Images->SetKeyName(1, L"close_window0.png");
			this->il_Quit->Images->SetKeyName(2, L"close_window1.png");
			// 
			// il_Hide
			// 
			this->il_Hide->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"il_Hide.ImageStream")));
			this->il_Hide->TransparentColor = System::Drawing::Color::Transparent;
			this->il_Hide->Images->SetKeyName(0, L"minimize_window1.png");
			this->il_Hide->Images->SetKeyName(1, L"minimize_window2.png");
			this->il_Hide->Images->SetKeyName(2, L"minimize_window0.png");
			// 
			// Hide
			// 
			this->Hide->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Hide->BackColor = System::Drawing::Color::Black;
			this->Hide->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Hide->FlatAppearance->BorderSize = 0;
			this->Hide->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->Hide->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->Hide->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Hide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Hide->ForeColor = System::Drawing::Color::Black;
			this->Hide->ImageIndex = 0;
			this->Hide->ImageList = this->il_Hide;
			this->Hide->Location = System::Drawing::Point(552, 0);
			this->Hide->Name = L"Hide";
			this->Hide->Size = System::Drawing::Size(21, 21);
			this->Hide->TabIndex = 1;
			this->Hide->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->Hide->UseVisualStyleBackColor = false;
			this->Hide->Click += gcnew System::EventHandler(this, &LoginForm::Hide_Click);
			this->Hide->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::Hide_MouseDown);
			this->Hide->MouseEnter += gcnew System::EventHandler(this, &LoginForm::Hide_MouseEnter);
			this->Hide->MouseLeave += gcnew System::EventHandler(this, &LoginForm::Hide_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑 Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(180, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"学号:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑 Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(180, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"密码:";
			// 
			// tb_id
			// 
			this->tb_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->tb_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_id->ForeColor = System::Drawing::Color::White;
			this->tb_id->Location = System::Drawing::Point(241, 47);
			this->tb_id->Name = L"tb_id";
			this->tb_id->Size = System::Drawing::Size(180, 22);
			this->tb_id->TabIndex = 4;
			// 
			// tb_Password
			// 
			this->tb_Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->tb_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Password->Font = (gcnew System::Drawing::Font(L"宋体", 14.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Password->ForeColor = System::Drawing::Color::White;
			this->tb_Password->Location = System::Drawing::Point(241, 91);
			this->tb_Password->Name = L"tb_Password";
			this->tb_Password->PasswordChar = '·';
			this->tb_Password->Size = System::Drawing::Size(180, 23);
			this->tb_Password->TabIndex = 5;
			// 
			// il_Register
			// 
			this->il_Register->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"il_Register.ImageStream")));
			this->il_Register->TransparentColor = System::Drawing::Color::Transparent;
			this->il_Register->Images->SetKeyName(0, L"start_button.Image2.png");
			this->il_Register->Images->SetKeyName(1, L"start_button.Image01.png");
			this->il_Register->Images->SetKeyName(2, L"start_button.Image0.png");
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::Transparent;
			this->Login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Login->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), 
				static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->Login->FlatAppearance->BorderSize = 0;
			this->Login->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Login->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Login->ImageIndex = 1;
			this->Login->ImageList = this->il_Login;
			this->Login->Location = System::Drawing::Point(425, 54);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(50, 51);
			this->Login->TabIndex = 6;
			this->Login->TabStop = false;
			this->Login->UseVisualStyleBackColor = false;
			this->Login->Click += gcnew System::EventHandler(this, &LoginForm::Login_Click);
			this->Login->MouseEnter += gcnew System::EventHandler(this, &LoginForm::Login_MouseEnter);
			this->Login->MouseLeave += gcnew System::EventHandler(this, &LoginForm::Login_MouseLeave);
			// 
			// il_Login
			// 
			this->il_Login->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"il_Login.ImageStream")));
			this->il_Login->TransparentColor = System::Drawing::Color::Transparent;
			this->il_Login->Images->SetKeyName(0, L"button_0.png");
			this->il_Login->Images->SetKeyName(1, L"button_1.png");
			this->il_Login->Images->SetKeyName(2, L"button_1.png");
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->Login);
			this->groupBox1->Controls->Add(this->lb_work);
			this->groupBox1->Controls->Add(this->tb_Password);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->tb_id);
			this->groupBox1->Controls->Add(this->Signin);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->IsTeacher);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->IsStudent);
			this->groupBox1->Location = System::Drawing::Point(-5, 303);
			this->groupBox1->Margin = System::Windows::Forms::Padding(0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(613, 160);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// lb_work
			// 
			this->lb_work->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lb_work->AutoSize = true;
			this->lb_work->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lb_work->ForeColor = System::Drawing::Color::White;
			this->lb_work->Location = System::Drawing::Point(220, 18);
			this->lb_work->Name = L"lb_work";
			this->lb_work->Size = System::Drawing::Size(0, 20);
			this->lb_work->TabIndex = 4;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(3, 0);
			this->progressBar1->Margin = System::Windows::Forms::Padding(0);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(602, 10);
			this->progressBar1->TabIndex = 3;
			this->progressBar1->Visible = false;
			// 
			// Signin
			// 
			this->Signin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Signin->FlatAppearance->BorderSize = 0;
			this->Signin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Signin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Signin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Signin->ImageIndex = 0;
			this->Signin->ImageList = this->il_Register;
			this->Signin->Location = System::Drawing::Point(501, 48);
			this->Signin->Name = L"Signin";
			this->Signin->Size = System::Drawing::Size(65, 63);
			this->Signin->TabIndex = 2;
			this->Signin->UseVisualStyleBackColor = true;
			this->Signin->Click += gcnew System::EventHandler(this, &LoginForm::Signin_Click);
			this->Signin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::Signin_MouseDown);
			this->Signin->MouseEnter += gcnew System::EventHandler(this, &LoginForm::Signin_MouseEnter);
			this->Signin->MouseLeave += gcnew System::EventHandler(this, &LoginForm::Signin_MouseLeave);
			// 
			// IsTeacher
			// 
			this->IsTeacher->AutoSize = true;
			this->IsTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->IsTeacher->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->IsTeacher->ForeColor = System::Drawing::Color::Orange;
			this->IsTeacher->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"IsTeacher.Image")));
			this->IsTeacher->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->IsTeacher->Location = System::Drawing::Point(42, 80);
			this->IsTeacher->Name = L"IsTeacher";
			this->IsTeacher->Size = System::Drawing::Size(100, 48);
			this->IsTeacher->TabIndex = 1;
			this->IsTeacher->TabStop = true;
			this->IsTeacher->Text = L"        教师";
			this->IsTeacher->UseVisualStyleBackColor = true;
			// 
			// IsStudent
			// 
			this->IsStudent->AutoSize = true;
			this->IsStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->IsStudent->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->IsStudent->ForeColor = System::Drawing::Color::SkyBlue;
			this->IsStudent->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"IsStudent.Image")));
			this->IsStudent->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->IsStudent->Location = System::Drawing::Point(42, 26);
			this->IsStudent->Name = L"IsStudent";
			this->IsStudent->Size = System::Drawing::Size(100, 48);
			this->IsStudent->TabIndex = 0;
			this->IsStudent->TabStop = true;
			this->IsStudent->Text = L"        学生";
			this->IsStudent->UseVisualStyleBackColor = true;
			this->IsStudent->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::IsStudent_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 321);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pictureBox1_MouseDown_1);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pictureBox1_MouseMove_1);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(600, 450);
			this->Controls->Add(this->Hide);
			this->Controls->Add(this->Quit);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"华工帮登陆";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::LoginForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::LoginForm_MouseMove);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//全局变量声明
private:String ^idtemp;
private:String ^Login_Send;
private:Thread ^loginThread;	
private:Socket ^socketAtClient;
private:Thread ^flash;
private:Point mypoint;

//控件反应
private: System::Void Quit_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Quit_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 this->Quit->ImageIndex = 1;
		 }
private: System::Void Quit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->Quit->ImageIndex = 0;
		 }
private: System::Void Quit_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 this->Quit->ImageIndex = 2;
		 }
private: System::Void Hide_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
		 }
private: System::Void Hide_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide->ImageIndex = 1;
		 }
private: System::Void Hide_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide->ImageIndex = 0;
		 }
private: System::Void Hide_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 this->Hide->ImageIndex = 2;
		 }
private: System::Void Signin_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 this->Signin->ImageIndex =1;
		 }
private: System::Void Signin_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 this->Signin->ImageIndex =2;
		 }
private: System::Void Signin_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->Signin->ImageIndex =0;
		 }
private: System::Void Login_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 this->Login->ImageIndex=0;
		 }
private: System::Void Login_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->Login->ImageIndex=1;
		 }
private: System::Void LoginForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void LoginForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void IsStudent_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
//控件功能
private: System::Void Login_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e);
private: System::Void Signin_Click(System::Object^  sender, System::EventArgs^  e);
private: void sendmessage_s();
private: void sendmessage_t();
private: void slow_show();
private: void slow_close();


private: System::Void pictureBox1_MouseDown_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mypoint.X = e->X, mypoint.Y = e->Y;
		 }
private: System::Void pictureBox1_MouseMove_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
		     }
		 }
    };
}
