#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// Date_Keeper 摘要
	/// </summary>
	public ref class Date_Keeper : public System::Windows::Forms::Form
	{
	public:
		Date_Keeper(void)
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
		~Date_Keeper()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  buttonsave;
	private: System::Windows::Forms::Button^  buttonopen;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBoxdiary;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;

	private: System::Windows::Forms::Label^  labeladdtime;


	private: System::Windows::Forms::TextBox^  textBoxmemo;

	private: System::Windows::Forms::Label^  labelmemo;
	private: System::Windows::Forms::Button^  buttonaddmemo;



	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::OpenFileDialog^  ofd;
	private: System::Windows::Forms::SaveFileDialog^  sfd;
	private: System::Windows::Forms::TextBox^  textBoxshowtime;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  删除ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  清除列表ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  删除ToolStripMenuItem1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Diagnostics::EventLog^  eventLog1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btTB;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Date_Keeper::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btTB = (gcnew System::Windows::Forms::Button());
			this->textBoxmemo = (gcnew System::Windows::Forms::TextBox());
			this->labelmemo = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonaddmemo = (gcnew System::Windows::Forms::Button());
			this->labeladdtime = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->删除ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->清除列表ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonsave = (gcnew System::Windows::Forms::Button());
			this->buttonopen = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxdiary = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->剪切ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->删除ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfd = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBoxshowtime = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->eventLog1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(298, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(483, 452);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::DimGray;
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(475, 419);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"备忘录";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DodgerBlue;
			this->groupBox1->Controls->Add(this->btTB);
			this->groupBox1->Controls->Add(this->textBoxmemo);
			this->groupBox1->Controls->Add(this->labelmemo);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->buttonaddmemo);
			this->groupBox1->Controls->Add(this->labeladdtime);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(0, 214);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(479, 209);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"新建备忘";
			// 
			// btTB
			// 
			this->btTB->BackColor = System::Drawing::Color::OrangeRed;
			this->btTB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btTB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btTB->ForeColor = System::Drawing::Color::Transparent;
			this->btTB->Location = System::Drawing::Point(374, 24);
			this->btTB->Name = L"btTB";
			this->btTB->Size = System::Drawing::Size(87, 36);
			this->btTB->TabIndex = 14;
			this->btTB->Text = L"本地同步";
			this->btTB->UseVisualStyleBackColor = false;
			this->btTB->Click += gcnew System::EventHandler(this, &Date_Keeper::btTB_Click);
			// 
			// textBoxmemo
			// 
			this->textBoxmemo->BackColor = System::Drawing::Color::PowderBlue;
			this->textBoxmemo->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBoxmemo->Location = System::Drawing::Point(14, 110);
			this->textBoxmemo->Multiline = true;
			this->textBoxmemo->Name = L"textBoxmemo";
			this->textBoxmemo->Size = System::Drawing::Size(447, 89);
			this->textBoxmemo->TabIndex = 4;
			// 
			// labelmemo
			// 
			this->labelmemo->AutoSize = true;
			this->labelmemo->BackColor = System::Drawing::Color::Transparent;
			this->labelmemo->ForeColor = System::Drawing::Color::Transparent;
			this->labelmemo->Location = System::Drawing::Point(10, 87);
			this->labelmemo->Name = L"labelmemo";
			this->labelmemo->Size = System::Drawing::Size(37, 20);
			this->labelmemo->TabIndex = 3;
			this->labelmemo->Text = L"内容";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(211, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"输入备忘录时间";
			// 
			// buttonaddmemo
			// 
			this->buttonaddmemo->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonaddmemo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonaddmemo->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->buttonaddmemo->ForeColor = System::Drawing::Color::Transparent;
			this->buttonaddmemo->Location = System::Drawing::Point(374, 68);
			this->buttonaddmemo->Name = L"buttonaddmemo";
			this->buttonaddmemo->Size = System::Drawing::Size(87, 36);
			this->buttonaddmemo->TabIndex = 2;
			this->buttonaddmemo->Text = L"添加备忘";
			this->buttonaddmemo->UseVisualStyleBackColor = false;
			this->buttonaddmemo->Click += gcnew System::EventHandler(this, &Date_Keeper::buttonaddmemo_Click);
			// 
			// labeladdtime
			// 
			this->labeladdtime->AutoSize = true;
			this->labeladdtime->BackColor = System::Drawing::Color::Transparent;
			this->labeladdtime->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->labeladdtime->ForeColor = System::Drawing::Color::Transparent;
			this->labeladdtime->Location = System::Drawing::Point(10, 32);
			this->labeladdtime->Name = L"labeladdtime";
			this->labeladdtime->Size = System::Drawing::Size(107, 20);
			this->labeladdtime->TabIndex = 6;
			this->labeladdtime->Text = L"输入备忘录日期";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(14, 55);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(138, 26);
			this->dateTimePicker2->TabIndex = 12;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(238, 57);
			this->maskedTextBox1->Mask = L"  90:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(51, 26);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::PowderBlue;
			this->listView1->BackgroundImageTiled = true;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(-2, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(481, 208);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Time";
			this->columnHeader1->Width = 160;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Thing";
			this->columnHeader2->Width = 283;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->删除ToolStripMenuItem, 
				this->清除列表ToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(125, 48);
			// 
			// 删除ToolStripMenuItem
			// 
			this->删除ToolStripMenuItem->Name = L"删除ToolStripMenuItem";
			this->删除ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->删除ToolStripMenuItem->Text = L"删除";
			this->删除ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Date_Keeper::删除ToolStripMenuItem_Click);
			// 
			// 清除列表ToolStripMenuItem
			// 
			this->清除列表ToolStripMenuItem->Name = L"清除列表ToolStripMenuItem";
			this->清除列表ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->清除列表ToolStripMenuItem->Text = L"清除列表";
			this->清除列表ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Date_Keeper::清除列表ToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::PowderBlue;
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->buttonsave);
			this->tabPage2->Controls->Add(this->buttonopen);
			this->tabPage2->Controls->Add(this->dateTimePicker1);
			this->tabPage2->Controls->Add(this->textBoxdiary);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(475, 419);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"日记";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"记录你的点点滴滴~~";
			// 
			// buttonsave
			// 
			this->buttonsave->BackColor = System::Drawing::Color::Tomato;
			this->buttonsave->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->buttonsave->ForeColor = System::Drawing::Color::Transparent;
			this->buttonsave->Location = System::Drawing::Point(380, 354);
			this->buttonsave->Name = L"buttonsave";
			this->buttonsave->Size = System::Drawing::Size(75, 34);
			this->buttonsave->TabIndex = 4;
			this->buttonsave->Text = L"保存";
			this->buttonsave->UseVisualStyleBackColor = false;
			this->buttonsave->Click += gcnew System::EventHandler(this, &Date_Keeper::buttonsave_Click);
			// 
			// buttonopen
			// 
			this->buttonopen->BackColor = System::Drawing::Color::Tomato;
			this->buttonopen->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->buttonopen->ForeColor = System::Drawing::Color::Transparent;
			this->buttonopen->Location = System::Drawing::Point(15, 314);
			this->buttonopen->Name = L"buttonopen";
			this->buttonopen->Size = System::Drawing::Size(75, 34);
			this->buttonopen->TabIndex = 3;
			this->buttonopen->Text = L"打开";
			this->buttonopen->UseVisualStyleBackColor = false;
			this->buttonopen->Click += gcnew System::EventHandler(this, &Date_Keeper::buttonopen_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(317, 314);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(138, 26);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// textBoxdiary
			// 
			this->textBoxdiary->ContextMenuStrip = this->contextMenuStrip2;
			this->textBoxdiary->ForeColor = System::Drawing::Color::Green;
			this->textBoxdiary->Location = System::Drawing::Point(15, 51);
			this->textBoxdiary->Multiline = true;
			this->textBoxdiary->Name = L"textBoxdiary";
			this->textBoxdiary->Size = System::Drawing::Size(440, 244);
			this->textBoxdiary->TabIndex = 0;
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->剪切ToolStripMenuItem, 
				this->复制ToolStripMenuItem, this->粘贴ToolStripMenuItem, this->删除ToolStripMenuItem1});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(101, 92);
			// 
			// 剪切ToolStripMenuItem
			// 
			this->剪切ToolStripMenuItem->Name = L"剪切ToolStripMenuItem";
			this->剪切ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->剪切ToolStripMenuItem->Text = L"剪切";
			this->剪切ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Date_Keeper::剪切ToolStripMenuItem_Click);
			// 
			// 复制ToolStripMenuItem
			// 
			this->复制ToolStripMenuItem->Name = L"复制ToolStripMenuItem";
			this->复制ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->复制ToolStripMenuItem->Text = L"复制";
			this->复制ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Date_Keeper::复制ToolStripMenuItem_Click);
			// 
			// 粘贴ToolStripMenuItem
			// 
			this->粘贴ToolStripMenuItem->Name = L"粘贴ToolStripMenuItem";
			this->粘贴ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->粘贴ToolStripMenuItem->Text = L"粘贴";
			this->粘贴ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Date_Keeper::粘贴ToolStripMenuItem_Click);
			// 
			// 删除ToolStripMenuItem1
			// 
			this->删除ToolStripMenuItem1->Name = L"删除ToolStripMenuItem1";
			this->删除ToolStripMenuItem1->Size = System::Drawing::Size(100, 22);
			this->删除ToolStripMenuItem1->Text = L"删除";
			this->删除ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Date_Keeper::删除ToolStripMenuItem1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::White;
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->monthCalendar1->Location = System::Drawing::Point(39, 299);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Date_Keeper::monthCalendar1_DateSelected);
			// 
			// ofd
			// 
			this->ofd->FileName = L"openFileDialog1";
			// 
			// textBoxshowtime
			// 
			this->textBoxshowtime->BackColor = System::Drawing::SystemColors::Highlight;
			this->textBoxshowtime->Font = (gcnew System::Drawing::Font(L"微软雅黑", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBoxshowtime->ForeColor = System::Drawing::Color::Black;
			this->textBoxshowtime->Location = System::Drawing::Point(39, 216);
			this->textBoxshowtime->Name = L"textBoxshowtime";
			this->textBoxshowtime->ReadOnly = true;
			this->textBoxshowtime->Size = System::Drawing::Size(220, 71);
			this->textBoxshowtime->TabIndex = 9;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Date_Keeper::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Date_Keeper::timer2_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::DimGray;
			this->button1->Location = System::Drawing::Point(787, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 44);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Date_Keeper::button1_Click);
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(25, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 190);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Date_Keeper::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Date_Keeper::pictureBox1_MouseMove);
			// 
			// Date_Keeper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(829, 508);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxshowtime);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Date_Keeper";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"备忘录";
			this->Load += gcnew System::EventHandler(this, &Date_Keeper::Date_Keeper_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Date_Keeper::Date_Keeper_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Date_Keeper::Date_Keeper_MouseMove);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->eventLog1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:Point mypoint;
	private: System::Void monthCalendar1_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
				 String ^show = monthCalendar1->SelectionStart.ToString();
				 show = show->Substring( 0, show->LastIndexOf( " ")+1 );
				 dateTimePicker2->Text = show;
			 }
	private: System::Void buttonaddmemo_Click(System::Object^  sender, System::EventArgs^  e) {
				 ListViewItem ^listitem = gcnew ListViewItem ( dateTimePicker2->Text + maskedTextBox1->Text );
				 listitem->SubItems->Add( textBoxmemo->Text );
				 listView1->Items->Add( listitem );
			 }
	private: System::Void buttonopen_Click(System::Object^  sender, System::EventArgs^  e) {
				 //初始化读取
				 ofd->Filter = "文本文件 (*.txt) |*.txt| 全部文件 ( *.* ) | *.* ";
				 ofd->FileName = "";
				 ofd->Title = "选择历史日记";
				 //读取内容
				 String ^showdiary ;
				 if( ofd->ShowDialog () == System::Windows::Forms::DialogResult::OK ) {
					 String ^path = ofd->FileName ;
					 StreamReader ^sr = File::OpenText(  path );
					 showdiary = sr->ReadToEnd ();
					 sr->Close();
					 string diary;
					 diary= ( char* )( Marshal::StringToHGlobalAnsi( showdiary ).ToPointer() );
					 int len = diary.length();
					 for( int i = 0; i < len; i++ )
						 diary[i] ^= (len - i );

					 textBoxdiary->Text = gcnew String ( diary.c_str() );
				 }
			 }
	private: System::Void buttonsave_Click(System::Object^  sender, System::EventArgs^  e) {
				 //初始化输出
				 sfd->Filter = "文本文件 (*.txt) |*.txt| 全部文件 ( *.* ) | *.* ";
				 sfd->FileName = dateTimePicker1->Text ;
				 sfd->CreatePrompt = true;
				 //转码
				 String ^showdiary = textBoxdiary->Text;
				 string diary = ( char* ) ( Marshal::StringToHGlobalAnsi( showdiary ).ToPointer() );
				 int len = diary.length();
				 for( int i = 0; i < len; i++ )
					 diary[i] ^= (len - i );
				 //文件写入
				 if( sfd->ShowDialog () == System::Windows::Forms::DialogResult::OK ) {
					 String ^path = sfd->FileName ;
					 StreamWriter ^sw = File::CreateText( path );
					 sw->Write( gcnew String( diary.c_str() ) );
					 sw->Close ();
				 }

			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 DateTime moment = DateTime::Now;
				 int n = listView1->Items->Count ;
				 String ^cmp = moment.ToString() ;
				 cmp = cmp->Substring( 0, cmp->LastIndexOf( ":" ) );
				 if( n > 0 ) {
					 for( int i = 0; i < n; i++ ) {
						 String ^timee = listView1->Items[i]->SubItems[0]->Text;
						 if( cmp == listView1->Items[i]->SubItems[0]->Text ) {
							 String ^show = listView1->Items[i]->SubItems[1]->Text;
							 listView1->Items->RemoveAt( i );
							 MessageBox::Show ( show);
							 break;
						 }
					 }
				 }
			 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 DateTime moment = DateTime::Now;
				 int h = moment.Hour;
				 int m = moment.Minute;
				 int s = moment.Second;
				 textBoxshowtime->Text = h.ToString() + ":" + m.ToString() + ":" + s.ToString();
			 }
	private: System::Void Date_Keeper_Load(System::Object^  sender, System::EventArgs^  e) {
				 timer2->Start();
				 timer1->Start();
				 Boolean^ a=TBin();
				 if(a->Equals(false)){
					 int n = listView1->Items->Count ;
					 while( n > 0 )
						 listView1->Items->Remove( listView1->Items[0] ), --n;
				 }
			 }


	private: System::Void 删除ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( listView1->SelectedIndices != nullptr && listView1->SelectedIndices->Count > 0 ) {
					 listView1->Items->Remove( listView1->SelectedItems[0] );
				 }
			 }
	private: System::Void 清除列表ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n = listView1->Items->Count ;
				 while( n > 0 )
					 listView1->Items->Remove( listView1->Items[0] ), --n;
			 }
	private: System::Void 剪切ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBoxdiary->Cut();
			 }
	private: System::Void 复制ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBoxdiary->Copy();
			 }
	private: System::Void 粘贴ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBoxdiary->Paste();
			 }
	private: System::Void 删除ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBoxdiary->SelectedText="";
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
				 this->Close();
			 }
	private: System::Void btTB_Click(System::Object^  sender, System::EventArgs^  e) {
				 Boolean^ a=TBout();
				 Boolean^ b=TBin();
				 if(b->Equals(false)||a->Equals(false)){
					 MessageBox::Show("备忘录同步失败");
					 int n = listView1->Items->Count ;
					 while( n > 0 )
						 listView1->Items->Remove( listView1->Items[0] ), --n;
				 }
				 else
					 MessageBox::Show("Accepted！");
			 }
	private: Boolean^TBin(){
				 string temp="";
				 String^ Temp;
				 try{
					 fstream txt;
					 txt.open("e:\\bwl.txt",ios::in||ios::out);
					 int n = listView1->Items->Count ;
					 while( n > 0 )
						 listView1->Items->Remove( listView1->Items[0] ), --n;
					 if(txt&&!txt.eof())
						 getline(txt,temp);
					 else
						 return false;
					 Temp=gcnew String(temp.c_str());
					 while(txt&&temp!="$$"&&!txt.eof()){
						 ListViewItem ^listitem = gcnew ListViewItem (Temp);
						 if(txt&&temp!="$$"&&!txt.eof()){
							 getline(txt,temp);
							 if(temp=="$$")
								 return false;
						 }
						 else
							 return false;
						 Temp=gcnew String(temp.c_str());
						 listitem->SubItems->Add(Temp);
						 listView1->Items->Add( listitem );
						 if(txt&&temp!="$$"&&!txt.eof())
							 getline(txt,temp);
						 else
							 return false;
						 Temp=gcnew String(temp.c_str());
					 }
				 }
				 catch(Exception^e){
					 MessageBox::Show(e->ToString());
					 return false;
				 }
				 if(Temp->Equals("$$"))
					 return true;
				 else
					 return false;
			 }
	private:Boolean^TBout(){
				try{
					//打开文件
					ofstream txt;
					txt.open("e:\\bwl.txt");
					string temp="";
					String^ Temp;
					//写入
					for each (ListViewItem ^item in this->listView1->Items)
					{
						Temp=item->SubItems[0]->ToString();
						int len=Temp->Length;
						Temp=Temp->Substring(18,len-19);
						char *chars=(char*)(Marshal::StringToHGlobalAnsi(Temp)).ToPointer();
						temp=chars;
						txt<<temp<<endl;
						Temp=item->SubItems[1]->ToString();
						len=Temp->Length;
						Temp=Temp->Substring(18,len-19);
						chars=(char*)(Marshal::StringToHGlobalAnsi(Temp)).ToPointer();
						temp=chars;
						txt<<temp<<endl;
					}
					txt<<"$$"<<endl;
					txt.close();

				}
				catch(Exception^e){return false;}
				return true;
			}
	private: System::Void Date_Keeper_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mypoint.X = e->X, mypoint.Y = e->Y;

			 }
	private: System::Void Date_Keeper_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
					 Point myposition = MousePosition;
					 myposition.Offset( -mypoint.X, -mypoint.Y );
					 this->Location = myposition;
				 }
			 }
	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mypoint.X = e->X, mypoint.Y = e->Y;
			 }
	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
					 Point myposition = MousePosition;
					 myposition.Offset( -mypoint.X, -mypoint.Y );
					 this->Location = myposition;
				 }
			 }
	};
}