#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Threading;
	using namespace User;

	/// <summary>
	/// Form2 摘要
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			this->rb_Isman->Checked=true;
			this->Opacity = 0;

			//
			//TODO: 在此处添加构造函数代码
			//

		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_Password;
	protected: 
	protected: 
	protected: 


	private: System::Windows::Forms::TextBox^  tb_StudentID;



	private: System::Windows::Forms::TextBox^  tb_Username;


	private: System::Windows::Forms::Button^  comfirm;
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::TextBox^  tb_Passwordcon;

	private: System::Windows::Forms::ComboBox^  cb_Academy;


	private: System::Windows::Forms::ComboBox^  cb_Grade;
	private: System::Windows::Forms::TextBox^  tb_Telephone;


	private: System::Windows::Forms::RadioButton^  rb_Isman;
	private: System::Windows::Forms::RadioButton^  rb_Isfeman;
	private: System::Windows::Forms::ComboBox^  cb_Major;




	private: System::Windows::Forms::TextBox^  tb_Signture;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::DateTimePicker^  Birthday_Select;
	private: System::Windows::Forms::TextBox^  tb_QQ;
	private: System::Windows::Forms::Button^  bt_Hide;

	private: System::ComponentModel::IContainer^  components;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->tb_Password = (gcnew System::Windows::Forms::TextBox());
			this->tb_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->tb_Username = (gcnew System::Windows::Forms::TextBox());
			this->comfirm = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->tb_Passwordcon = (gcnew System::Windows::Forms::TextBox());
			this->cb_Academy = (gcnew System::Windows::Forms::ComboBox());
			this->cb_Grade = (gcnew System::Windows::Forms::ComboBox());
			this->tb_Telephone = (gcnew System::Windows::Forms::TextBox());
			this->rb_Isman = (gcnew System::Windows::Forms::RadioButton());
			this->rb_Isfeman = (gcnew System::Windows::Forms::RadioButton());
			this->cb_Major = (gcnew System::Windows::Forms::ComboBox());
			this->tb_Signture = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->Birthday_Select = (gcnew System::Windows::Forms::DateTimePicker());
			this->tb_QQ = (gcnew System::Windows::Forms::TextBox());
			this->bt_Hide = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// tb_Password
			// 
			this->tb_Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Password->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Password->ForeColor = System::Drawing::Color::White;
			this->tb_Password->Location = System::Drawing::Point(117, 191);
			this->tb_Password->Name = L"tb_Password";
			this->tb_Password->Size = System::Drawing::Size(203, 22);
			this->tb_Password->TabIndex = 2;
			this->tb_Password->Enter += gcnew System::EventHandler(this, &RegisterForm::tb_Password_Enter);
			this->tb_Password->Leave += gcnew System::EventHandler(this, &RegisterForm::tb_Password_Leave);
			// 
			// tb_StudentID
			// 
			this->tb_StudentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_StudentID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_StudentID->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_StudentID->ForeColor = System::Drawing::Color::White;
			this->tb_StudentID->Location = System::Drawing::Point(117, 130);
			this->tb_StudentID->Name = L"tb_StudentID";
			this->tb_StudentID->Size = System::Drawing::Size(203, 22);
			this->tb_StudentID->TabIndex = 1;
			this->tb_StudentID->Enter += gcnew System::EventHandler(this, &RegisterForm::tb_StudentID_Enter);
			this->tb_StudentID->Leave += gcnew System::EventHandler(this, &RegisterForm::tb_StudentID_Leave);
			// 
			// tb_Username
			// 
			this->tb_Username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Username->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Username->ForeColor = System::Drawing::Color::White;
			this->tb_Username->Location = System::Drawing::Point(638, 136);
			this->tb_Username->Name = L"tb_Username";
			this->tb_Username->Size = System::Drawing::Size(84, 22);
			this->tb_Username->TabIndex = 4;
			// 
			// comfirm
			// 
			this->comfirm->AutoSize = true;
			this->comfirm->BackColor = System::Drawing::Color::Transparent;
			this->comfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comfirm->FlatAppearance->BorderSize = 0;
			this->comfirm->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->comfirm->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->comfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comfirm->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->comfirm->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->comfirm->Location = System::Drawing::Point(843, 489);
			this->comfirm->Name = L"comfirm";
			this->comfirm->Size = System::Drawing::Size(88, 55);
			this->comfirm->TabIndex = 22;
			this->comfirm->UseVisualStyleBackColor = false;
			this->comfirm->Click += gcnew System::EventHandler(this, &RegisterForm::comfirm_Click);
			// 
			// cancel
			// 
			this->cancel->AutoSize = true;
			this->cancel->BackColor = System::Drawing::Color::Transparent;
			this->cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel->FlatAppearance->BorderSize = 0;
			this->cancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->cancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->cancel->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->cancel->Location = System::Drawing::Point(902, 22);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(46, 41);
			this->cancel->TabIndex = 23;
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &RegisterForm::cancel_Click);
			// 
			// tb_Passwordcon
			// 
			this->tb_Passwordcon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_Passwordcon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Passwordcon->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Passwordcon->ForeColor = System::Drawing::Color::White;
			this->tb_Passwordcon->Location = System::Drawing::Point(152, 260);
			this->tb_Passwordcon->Name = L"tb_Passwordcon";
			this->tb_Passwordcon->Size = System::Drawing::Size(203, 22);
			this->tb_Passwordcon->TabIndex = 3;
			this->tb_Passwordcon->Enter += gcnew System::EventHandler(this, &RegisterForm::tb_Passwordcon_Enter);
			this->tb_Passwordcon->Leave += gcnew System::EventHandler(this, &RegisterForm::tb_Passwordcon_Leave);
			// 
			// cb_Academy
			// 
			this->cb_Academy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->cb_Academy->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->cb_Academy->ForeColor = System::Drawing::Color::White;
			this->cb_Academy->FormattingEnabled = true;
			this->cb_Academy->Items->AddRange(gcnew cli::array< System::Object^  >(28) {L"计算机科学与工程学院", L"机械与汽车工程学院", L"建筑学院", L"土木与交通学院", 
				L"电子与信息学院", L"材料科学与工程学院", L"化学与化工学院", L"轻工科学与工程学院", L"食品科学与工程学院", L"数学学院 ", L"物理与光电学院", L"经济与贸易学院", L"自动化科学与工程学院", L"电力学院", L"生物科学与工程学院", 
				L"环境与能源学院", L"软件学院", L"工商管理学院（创业教育学院）", L"公共管理学院", L"马克思主义学院", L"外国语学院", L"法学院（知识产权学院）", L"新闻与传播学院", L"艺术学院", L"体育学院", L"设计学院", 
				L"医学院", L"国际教育学院"});
			this->cb_Academy->Location = System::Drawing::Point(638, 318);
			this->cb_Academy->Name = L"cb_Academy";
			this->cb_Academy->Size = System::Drawing::Size(225, 29);
			this->cb_Academy->TabIndex = 5;
			this->cb_Academy->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterForm::cb_Academy_SelectedIndexChanged);
			// 
			// cb_Grade
			// 
			this->cb_Grade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->cb_Grade->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->cb_Grade->ForeColor = System::Drawing::Color::White;
			this->cb_Grade->FormattingEnabled = true;
			this->cb_Grade->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"大一", L"大二", L"大三", L"大四"});
			this->cb_Grade->Location = System::Drawing::Point(638, 378);
			this->cb_Grade->Name = L"cb_Grade";
			this->cb_Grade->Size = System::Drawing::Size(151, 29);
			this->cb_Grade->TabIndex = 6;
			// 
			// tb_Telephone
			// 
			this->tb_Telephone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_Telephone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Telephone->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Telephone->ForeColor = System::Drawing::Color::White;
			this->tb_Telephone->Location = System::Drawing::Point(662, 251);
			this->tb_Telephone->Name = L"tb_Telephone";
			this->tb_Telephone->Size = System::Drawing::Size(213, 22);
			this->tb_Telephone->TabIndex = 8;
			this->tb_Telephone->Leave += gcnew System::EventHandler(this, &RegisterForm::tb_Telephone_Leave);
			// 
			// rb_Isman
			// 
			this->rb_Isman->AutoSize = true;
			this->rb_Isman->BackColor = System::Drawing::Color::Transparent;
			this->rb_Isman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rb_Isman->FlatAppearance->BorderSize = 0;
			this->rb_Isman->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->rb_Isman->ForeColor = System::Drawing::Color::White;
			this->rb_Isman->Location = System::Drawing::Point(819, 136);
			this->rb_Isman->Name = L"rb_Isman";
			this->rb_Isman->Size = System::Drawing::Size(44, 25);
			this->rb_Isman->TabIndex = 34;
			this->rb_Isman->TabStop = true;
			this->rb_Isman->Text = L"男";
			this->rb_Isman->UseVisualStyleBackColor = false;
			this->rb_Isman->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::rb_Isman_CheckedChanged);
			// 
			// rb_Isfeman
			// 
			this->rb_Isfeman->AutoSize = true;
			this->rb_Isfeman->BackColor = System::Drawing::Color::Transparent;
			this->rb_Isfeman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rb_Isfeman->FlatAppearance->BorderSize = 0;
			this->rb_Isfeman->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->rb_Isfeman->ForeColor = System::Drawing::Color::White;
			this->rb_Isfeman->Location = System::Drawing::Point(863, 136);
			this->rb_Isfeman->Name = L"rb_Isfeman";
			this->rb_Isfeman->Size = System::Drawing::Size(44, 25);
			this->rb_Isfeman->TabIndex = 35;
			this->rb_Isfeman->TabStop = true;
			this->rb_Isfeman->Text = L"女";
			this->rb_Isfeman->UseVisualStyleBackColor = false;
			this->rb_Isfeman->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::rb_Isfeman_CheckedChanged);
			// 
			// cb_Major
			// 
			this->cb_Major->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->cb_Major->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->cb_Major->ForeColor = System::Drawing::Color::White;
			this->cb_Major->FormattingEnabled = true;
			this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"建筑学", L"城乡规划学", L"风景园林学"});
			this->cb_Major->Location = System::Drawing::Point(638, 433);
			this->cb_Major->Name = L"cb_Major";
			this->cb_Major->Size = System::Drawing::Size(151, 29);
			this->cb_Major->TabIndex = 7;
			// 
			// tb_Signture
			// 
			this->tb_Signture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_Signture->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Signture->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Signture->ForeColor = System::Drawing::Color::White;
			this->tb_Signture->Location = System::Drawing::Point(117, 477);
			this->tb_Signture->Multiline = true;
			this->tb_Signture->Name = L"tb_Signture";
			this->tb_Signture->Size = System::Drawing::Size(279, 67);
			this->tb_Signture->TabIndex = 0;
			// 
			// toolTip1
			// 
			this->toolTip1->IsBalloon = true;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Birthday_Select
			// 
			this->Birthday_Select->CalendarFont = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->Birthday_Select->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Birthday_Select->Location = System::Drawing::Point(662, 203);
			this->Birthday_Select->Name = L"Birthday_Select";
			this->Birthday_Select->Size = System::Drawing::Size(185, 21);
			this->Birthday_Select->TabIndex = 39;
			this->Birthday_Select->Value = System::DateTime(1996, 1, 1, 0, 0, 0, 0);
			// 
			// tb_QQ
			// 
			this->tb_QQ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(102)), 
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->tb_QQ->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_QQ->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_QQ->ForeColor = System::Drawing::Color::White;
			this->tb_QQ->Location = System::Drawing::Point(91, 378);
			this->tb_QQ->Name = L"tb_QQ";
			this->tb_QQ->Size = System::Drawing::Size(191, 22);
			this->tb_QQ->TabIndex = 40;
			// 
			// bt_Hide
			// 
			this->bt_Hide->AutoSize = true;
			this->bt_Hide->BackColor = System::Drawing::Color::Transparent;
			this->bt_Hide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_Hide->FlatAppearance->BorderSize = 0;
			this->bt_Hide->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bt_Hide->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bt_Hide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_Hide->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->bt_Hide->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->bt_Hide->Location = System::Drawing::Point(843, 22);
			this->bt_Hide->Name = L"bt_Hide";
			this->bt_Hide->Size = System::Drawing::Size(53, 41);
			this->bt_Hide->TabIndex = 41;
			this->bt_Hide->UseVisualStyleBackColor = false;
			this->bt_Hide->Click += gcnew System::EventHandler(this, &RegisterForm::bt_Hide_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 640);
			this->ControlBox = false;
			this->Controls->Add(this->bt_Hide);
			this->Controls->Add(this->tb_QQ);
			this->Controls->Add(this->Birthday_Select);
			this->Controls->Add(this->tb_Signture);
			this->Controls->Add(this->cb_Major);
			this->Controls->Add(this->rb_Isfeman);
			this->Controls->Add(this->rb_Isman);
			this->Controls->Add(this->tb_Telephone);
			this->Controls->Add(this->cb_Academy);
			this->Controls->Add(this->tb_Passwordcon);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->comfirm);
			this->Controls->Add(this->cb_Grade);
			this->Controls->Add(this->tb_Username);
			this->Controls->Add(this->tb_Password);
			this->Controls->Add(this->tb_StudentID);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"注册";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RegisterForm::RegisterForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &RegisterForm::RegisterForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//-------------------------------
		//全局变量声明
	private: static String ^Usersex=gcnew String("未选");
	private: Thread^flash;
	public: _student_do ^Newman;
	private: Point mypoint;
			//--------------------------------
			//屏幕效果
	private:void slow_show();			
	private:void slow_close();
			//--------------------------------
			//控件事件
	private: System::Void comfirm_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bt_Hide_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_StudentID_Enter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_Password_Enter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_Passwordcon_Enter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_StudentID_Leave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_Password_Leave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_Passwordcon_Leave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_Telephone_Leave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rb_Isman_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rb_Isfeman_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cb_Academy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
			 //--------------------------------
			 //变量初始化
	private: System::Void RegisterForm_Load(System::Object^  sender, System::EventArgs^  e);
			 //--------------------------------
			 //附加函数
	private:bool isnotInteger(String ^value);
	private:bool Check();
			//--------------------------------

	
private: System::Void RegisterForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mypoint.X = e->X, mypoint.Y = e->Y;
		 }
private: System::Void RegisterForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }
		 }
};
}
