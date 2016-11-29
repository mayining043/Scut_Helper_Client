#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace User;
	using namespace Scut_helper_Scoket;
	using namespace std;
	/// <summary>
	/// PersonalInfo 摘要
	/// </summary>
	public ref class PersonalInfo : public System::Windows::Forms::Form
	{
	public:
		PersonalInfo(void)
		{

			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~PersonalInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  mini_button;
	private: System::Windows::Forms::Button^  main_exit_button;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  tb_id;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_Name;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tb_classinfo;

	private: System::Windows::Forms::Button^  btn_Confirm;
	private: System::Windows::Forms::Button^  btn_Reset;
	private: System::Windows::Forms::Label^  label12;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lb_BD;

	private: System::Windows::Forms::Label^  lb_RT;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tp1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  cb_Grade;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tb_Phonenum;
	private: System::Windows::Forms::TextBox^  tb_sign;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tb_QQnum;
	private: System::Windows::Forms::TabPage^  tp2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tb_NewPWcon;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tb_OldPW;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tb_NewPW;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label17;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonalInfo::typeid));
			this->mini_button = (gcnew System::Windows::Forms::Button());
			this->main_exit_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tb_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_Name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_classinfo = (gcnew System::Windows::Forms::TextBox());
			this->btn_Confirm = (gcnew System::Windows::Forms::Button());
			this->btn_Reset = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lb_BD = (gcnew System::Windows::Forms::Label());
			this->lb_RT = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->cb_Grade = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_Phonenum = (gcnew System::Windows::Forms::TextBox());
			this->tb_sign = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_QQnum = (gcnew System::Windows::Forms::TextBox());
			this->tp2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_NewPWcon = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tb_OldPW = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tb_NewPW = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tp1->SuspendLayout();
			this->tp2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			this->mini_button->Location = System::Drawing::Point(411, 9);
			this->mini_button->Name = L"mini_button";
			this->mini_button->Size = System::Drawing::Size(47, 45);
			this->mini_button->TabIndex = 27;
			this->mini_button->UseVisualStyleBackColor = false;
			this->mini_button->Click += gcnew System::EventHandler(this, &PersonalInfo::mini_button_Click);
			// 
			// main_exit_button
			// 
			this->main_exit_button->BackColor = System::Drawing::Color::Transparent;
			this->main_exit_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"main_exit_button.BackgroundImage")));
			this->main_exit_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->main_exit_button->FlatAppearance->BorderSize = 0;
			this->main_exit_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->main_exit_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->main_exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->main_exit_button->Location = System::Drawing::Point(464, 9);
			this->main_exit_button->Name = L"main_exit_button";
			this->main_exit_button->Size = System::Drawing::Size(47, 45);
			this->main_exit_button->TabIndex = 26;
			this->main_exit_button->UseVisualStyleBackColor = false;
			this->main_exit_button->Click += gcnew System::EventHandler(this, &PersonalInfo::main_exit_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 91);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(167, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// tb_id
			// 
			this->tb_id->BackColor = System::Drawing::Color::LightBlue;
			this->tb_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_id->Cursor = System::Windows::Forms::Cursors::Default;
			this->tb_id->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_id->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_id->Location = System::Drawing::Point(331, 89);
			this->tb_id->Margin = System::Windows::Forms::Padding(0);
			this->tb_id->Name = L"tb_id";
			this->tb_id->ReadOnly = true;
			this->tb_id->Size = System::Drawing::Size(180, 26);
			this->tb_id->TabIndex = 29;
			this->tb_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 46);
			this->label1->TabIndex = 30;
			this->label1->Text = L"个人信息";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(232, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 27);
			this->label2->TabIndex = 32;
			this->label2->Text = L"学  号";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(232, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 27);
			this->label3->TabIndex = 34;
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
			this->tb_Name->Location = System::Drawing::Point(331, 137);
			this->tb_Name->Name = L"tb_Name";
			this->tb_Name->ReadOnly = true;
			this->tb_Name->Size = System::Drawing::Size(180, 26);
			this->tb_Name->TabIndex = 33;
			this->tb_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(55, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 27);
			this->label4->TabIndex = 36;
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
			this->tb_classinfo->Location = System::Drawing::Point(171, 273);
			this->tb_classinfo->Name = L"tb_classinfo";
			this->tb_classinfo->ReadOnly = true;
			this->tb_classinfo->Size = System::Drawing::Size(340, 26);
			this->tb_classinfo->TabIndex = 35;
			this->tb_classinfo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_Confirm
			// 
			this->btn_Confirm->AutoSize = true;
			this->btn_Confirm->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_Confirm->FlatAppearance->BorderSize = 0;
			this->btn_Confirm->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Confirm->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_Confirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Confirm->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_Confirm->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->btn_Confirm->Location = System::Drawing::Point(413, 332);
			this->btn_Confirm->Name = L"btn_Confirm";
			this->btn_Confirm->Size = System::Drawing::Size(98, 36);
			this->btn_Confirm->TabIndex = 50;
			this->btn_Confirm->Text = L"确认修改";
			this->btn_Confirm->UseVisualStyleBackColor = false;
			this->btn_Confirm->Click += gcnew System::EventHandler(this, &PersonalInfo::btn_Confirm_Click);
			// 
			// btn_Reset
			// 
			this->btn_Reset->AutoSize = true;
			this->btn_Reset->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn_Reset->FlatAppearance->BorderSize = 0;
			this->btn_Reset->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Reset->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_Reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Reset->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_Reset->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->btn_Reset->Location = System::Drawing::Point(309, 332);
			this->btn_Reset->Name = L"btn_Reset";
			this->btn_Reset->Size = System::Drawing::Size(98, 36);
			this->btn_Reset->TabIndex = 51;
			this->btn_Reset->Text = L"重  置";
			this->btn_Reset->UseVisualStyleBackColor = false;
			this->btn_Reset->Click += gcnew System::EventHandler(this, &PersonalInfo::btn_Reset_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(237, 207);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 27);
			this->label12->TabIndex = 53;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(233, 225);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 27);
			this->label14->TabIndex = 56;
			this->label14->Text = L"生  日";
			// 
			// lb_BD
			// 
			this->lb_BD->AutoSize = true;
			this->lb_BD->BackColor = System::Drawing::Color::Transparent;
			this->lb_BD->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lb_BD->ForeColor = System::Drawing::Color::OrangeRed;
			this->lb_BD->Location = System::Drawing::Point(326, 225);
			this->lb_BD->Name = L"lb_BD";
			this->lb_BD->Size = System::Drawing::Size(0, 27);
			this->lb_BD->TabIndex = 57;
			// 
			// lb_RT
			// 
			this->lb_RT->AutoSize = true;
			this->lb_RT->BackColor = System::Drawing::Color::Transparent;
			this->lb_RT->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lb_RT->ForeColor = System::Drawing::Color::OrangeRed;
			this->lb_RT->Location = System::Drawing::Point(326, 185);
			this->lb_RT->Name = L"lb_RT";
			this->lb_RT->Size = System::Drawing::Size(0, 27);
			this->lb_RT->TabIndex = 60;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(210, 185);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(110, 27);
			this->label16->TabIndex = 59;
			this->label16->Text = L"注 册 时 间";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tp1);
			this->tabControl1->Controls->Add(this->tp2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tabControl1->Location = System::Drawing::Point(20, 371);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(491, 338);
			this->tabControl1->TabIndex = 62;
			// 
			// tp1
			// 
			this->tp1->BackColor = System::Drawing::Color::White;
			this->tp1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tp1->Controls->Add(this->label15);
			this->tp1->Controls->Add(this->cb_Grade);
			this->tp1->Controls->Add(this->label13);
			this->tp1->Controls->Add(this->tb_Phonenum);
			this->tp1->Controls->Add(this->tb_sign);
			this->tp1->Controls->Add(this->label11);
			this->tp1->Controls->Add(this->label10);
			this->tp1->Controls->Add(this->tb_QQnum);
			this->tp1->Location = System::Drawing::Point(4, 31);
			this->tp1->Name = L"tp1";
			this->tp1->Padding = System::Windows::Forms::Padding(3);
			this->tp1->Size = System::Drawing::Size(483, 303);
			this->tp1->TabIndex = 0;
			this->tp1->Text = L"基本信息修改";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(21, 18);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 27);
			this->label15->TabIndex = 69;
			this->label15->Text = L"年  级";
			// 
			// cb_Grade
			// 
			this->cb_Grade->BackColor = System::Drawing::Color::LightBlue;
			this->cb_Grade->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->cb_Grade->ForeColor = System::Drawing::SystemColors::Highlight;
			this->cb_Grade->FormattingEnabled = true;
			this->cb_Grade->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"大一", L"大二", L"大三", L"大四"});
			this->cb_Grade->Location = System::Drawing::Point(128, 19);
			this->cb_Grade->Name = L"cb_Grade";
			this->cb_Grade->Size = System::Drawing::Size(109, 29);
			this->cb_Grade->TabIndex = 68;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(21, 90);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 27);
			this->label13->TabIndex = 67;
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
			this->tb_Phonenum->Location = System::Drawing::Point(128, 90);
			this->tb_Phonenum->Name = L"tb_Phonenum";
			this->tb_Phonenum->Size = System::Drawing::Size(196, 29);
			this->tb_Phonenum->TabIndex = 66;
			// 
			// tb_sign
			// 
			this->tb_sign->BackColor = System::Drawing::Color::LightBlue;
			this->tb_sign->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_sign->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_sign->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_sign->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_sign->Location = System::Drawing::Point(26, 174);
			this->tb_sign->Multiline = true;
			this->tb_sign->Name = L"tb_sign";
			this->tb_sign->Size = System::Drawing::Size(427, 111);
			this->tb_sign->TabIndex = 65;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(6, 134);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 27);
			this->label11->TabIndex = 64;
			this->label11->Text = L"个性签名";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(31, 54);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 27);
			this->label10->TabIndex = 63;
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
			this->tb_QQnum->Location = System::Drawing::Point(128, 54);
			this->tb_QQnum->Name = L"tb_QQnum";
			this->tb_QQnum->Size = System::Drawing::Size(196, 29);
			this->tb_QQnum->TabIndex = 62;
			// 
			// tp2
			// 
			this->tp2->Controls->Add(this->groupBox1);
			this->tp2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tp2->Location = System::Drawing::Point(4, 31);
			this->tp2->Name = L"tp2";
			this->tp2->Padding = System::Windows::Forms::Padding(3);
			this->tp2->Size = System::Drawing::Size(483, 303);
			this->tp2->TabIndex = 1;
			this->tp2->Text = L"登录密码修改";
			this->tp2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->tb_NewPWcon);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->tb_OldPW);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->tb_NewPW);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(90, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(306, 213);
			this->groupBox1->TabIndex = 46;
			this->groupBox1->TabStop = false;
			// 
			// tb_NewPWcon
			// 
			this->tb_NewPWcon->BackColor = System::Drawing::Color::LightBlue;
			this->tb_NewPWcon->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_NewPWcon->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_NewPWcon->Font = (gcnew System::Drawing::Font(L"黑体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_NewPWcon->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_NewPWcon->Location = System::Drawing::Point(120, 128);
			this->tb_NewPWcon->Name = L"tb_NewPWcon";
			this->tb_NewPWcon->PasswordChar = '*';
			this->tb_NewPWcon->Size = System::Drawing::Size(167, 29);
			this->tb_NewPWcon->TabIndex = 42;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(62, 170);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 25);
			this->label9->TabIndex = 44;
			this->label9->Text = L"（无需修改可不填）";
			// 
			// tb_OldPW
			// 
			this->tb_OldPW->BackColor = System::Drawing::Color::LightBlue;
			this->tb_OldPW->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_OldPW->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_OldPW->Font = (gcnew System::Drawing::Font(L"黑体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_OldPW->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_OldPW->Location = System::Drawing::Point(120, 30);
			this->tb_OldPW->Name = L"tb_OldPW";
			this->tb_OldPW->PasswordChar = '*';
			this->tb_OldPW->Size = System::Drawing::Size(167, 29);
			this->tb_OldPW->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(11, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 27);
			this->label8->TabIndex = 43;
			this->label8->Text = L"密码确认";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(26, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 27);
			this->label5->TabIndex = 38;
			this->label5->Text = L"旧密码";
			// 
			// tb_NewPW
			// 
			this->tb_NewPW->BackColor = System::Drawing::Color::LightBlue;
			this->tb_NewPW->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_NewPW->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tb_NewPW->Font = (gcnew System::Drawing::Font(L"黑体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_NewPW->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_NewPW->Location = System::Drawing::Point(120, 80);
			this->tb_NewPW->Name = L"tb_NewPW";
			this->tb_NewPW->PasswordChar = '*';
			this->tb_NewPW->Size = System::Drawing::Size(167, 29);
			this->tb_NewPW->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(26, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 27);
			this->label7->TabIndex = 41;
			this->label7->Text = L"新密码";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(12, 322);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(160, 46);
			this->label17->TabIndex = 63;
			this->label17->Text = L"信息修改";
			// 
			// PersonalInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(530, 721);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->lb_RT);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->lb_BD);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_Reset);
			this->Controls->Add(this->btn_Confirm);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tb_classinfo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tb_Name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_id);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->mini_button);
			this->Controls->Add(this->main_exit_button);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"PersonalInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"个人信息";
			this->Load += gcnew System::EventHandler(this, &PersonalInfo::PersonalInfo_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PersonalInfo::PersonalInfo_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PersonalInfo::PersonalInfo_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			this->tp2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Point mypoint;
	private:_student_do ^stu;
	private: System::Void PersonalInfo_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern string ID;
				 extern string PW;
				 stu=gcnew _student_do;
				 //处理
				 String ^IDstr=gcnew String(ID.c_str());
				 stu->Set_SchoolId(IDstr);
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
				 tb_id->Text=stu->get_SchoolId();
				 tb_Name->Text=stu->get_Name();
				 tb_classinfo->Text=stu->get_Academy()+" "+stu->get_Major()+" "+stu->get_Class();
				 tb_QQnum->Text=stu->get_QQnum();
				 tb_sign->Text=stu->get_Signature();
				 tb_Phonenum->Text=stu->get_Phonenum();
				 lb_BD->Text=stu->get_BirthDate();
				 lb_RT->Text=stu->get_RegistDate();
				 cb_Grade->Text=stu->get_Grade();
			 }
	private: System::Void mini_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
			 }
	private: System::Void main_exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void btn_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_OldPW->Text="";
				 tb_NewPW->Text="";
				 tb_NewPWcon->Text="";
				 tb_QQnum->Text=stu->get_QQnum();
				 tb_sign->Text=stu->get_Signature();
				 tb_Phonenum->Text=stu->get_Phonenum();
				 lb_BD->Text=stu->get_BirthDate();
				 lb_RT->Text=stu->get_RegistDate();
				 cb_Grade->Text=stu->get_Grade();
			 }
	private: System::Void btn_Confirm_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^temp=gcnew String(tb_OldPW->Text);
				 if(temp->Equals("")){
					 stu->Set_Grade(cb_Grade->Text);
					 stu->Set_QQnum(tb_QQnum->Text);
					 stu->Set_Phonenum(tb_Phonenum->Text);
					 stu->Set_Signature(tb_sign->Text);
					 //发送
					 ClientDo ^Sent=gcnew ClientDo;
					 Sent->op_Setport(4873);
					 Sent->op_Connect_Server();
					 Sent->op_Send(stu->code());
					 String^Response=Sent->op_Receive();
					 if(Response->Contains("N")){
						 MessageBox::Show("修改失败，请重试");
					 }
					 else{
						 MessageBox::Show("修改成功");
					 }
				 }
				 else{
					 String ^temp1=gcnew String(tb_NewPW->Text);
					 String ^temp2=gcnew String(tb_NewPWcon->Text);
					 if(temp1->Equals(temp2)){
						 bool right=0;
						 String ^temp3=gcnew String(tb_OldPW->Text);
						 if(stu->get_Password()->Equals(temp3)) right=1;
						 if (temp1->Equals("")||temp2->Equals(""))
						 {
							 MessageBox::Show("密码不能为空");
							 return;
						 }
						 if(right){
							 stu->Set_Grade(cb_Grade->Text);
							 stu->Set_QQnum(tb_QQnum->Text);
							 stu->Set_Phonenum(tb_Phonenum->Text);
							 stu->Set_Signature(tb_sign->Text);
							 stu->Set_Password(temp2);
							 //发送
							 ClientDo ^Sent=gcnew ClientDo;
							 Sent->op_Setport(4873);
							 Sent->op_Connect_Server();
							 Sent->op_Send(stu->code());
							 String^Response=Sent->op_Receive();
							 if(Response->Contains("N")){
								 MessageBox::Show("修改失败，请重试");
							 }
							 else{
								 MessageBox::Show("修改成功");
								 PersonalInfo_Load(sender,e);
							 }
						 }
						 else{
							 MessageBox::Show("旧密码错误");
						 }
					 }
					 else
						 MessageBox::Show("两次密码不一致");
				 }
			 }
	private: System::Void PersonalInfo_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mypoint.X = e->X, mypoint.Y = e->Y;
			 }
private: System::Void PersonalInfo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }
		 }
};
}