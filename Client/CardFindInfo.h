#pragma once
#include "UserInfo.h"
namespace Client {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Scut_helper_Scoket;
	using namespace Card;
	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class CardFindInfo : public System::Windows::Forms::Form
	{
	public:
		CardFindInfo(void)
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
		~CardFindInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  拾卡人信息;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tb_Phonenum;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tb_QQnum;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_Name;
	private: System::Windows::Forms::Button^  exit_button;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  stu_master;
	private: System::Windows::Forms::ColumnHeader^  stu_finder;
	private: System::Windows::Forms::ColumnHeader^  curdate;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btn_Loser;
	private: System::Windows::Forms::Button^  btn_Finder;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btn_SendFinder;
	private: System::Windows::Forms::TextBox^  tb_FindCard;

	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CardFindInfo::typeid));
			this->拾卡人信息 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_Phonenum = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_QQnum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_Name = (gcnew System::Windows::Forms::TextBox());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->stu_master = (gcnew System::Windows::Forms::ColumnHeader());
			this->stu_finder = (gcnew System::Windows::Forms::ColumnHeader());
			this->curdate = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Loser = (gcnew System::Windows::Forms::Button());
			this->btn_Finder = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_SendFinder = (gcnew System::Windows::Forms::Button());
			this->tb_FindCard = (gcnew System::Windows::Forms::TextBox());
			this->拾卡人信息->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// 拾卡人信息
			// 
			this->拾卡人信息->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"拾卡人信息.BackgroundImage")));
			this->拾卡人信息->Controls->Add(this->label13);
			this->拾卡人信息->Controls->Add(this->tb_Phonenum);
			this->拾卡人信息->Controls->Add(this->label10);
			this->拾卡人信息->Controls->Add(this->tb_QQnum);
			this->拾卡人信息->Controls->Add(this->label3);
			this->拾卡人信息->Controls->Add(this->tb_Name);
			this->拾卡人信息->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->拾卡人信息->Location = System::Drawing::Point(247, 258);
			this->拾卡人信息->Name = L"拾卡人信息";
			this->拾卡人信息->Size = System::Drawing::Size(301, 180);
			this->拾卡人信息->TabIndex = 0;
			this->拾卡人信息->TabStop = false;
			this->拾卡人信息->Text = L"拾卡人信息";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(24, 119);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 27);
			this->label13->TabIndex = 71;
			this->label13->Text = L"手  机";
			// 
			// tb_Phonenum
			// 
			this->tb_Phonenum->BackColor = System::Drawing::Color::LightBlue;
			this->tb_Phonenum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_Phonenum->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tb_Phonenum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Phonenum->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_Phonenum->Location = System::Drawing::Point(104, 119);
			this->tb_Phonenum->Name = L"tb_Phonenum";
			this->tb_Phonenum->ReadOnly = true;
			this->tb_Phonenum->Size = System::Drawing::Size(180, 29);
			this->tb_Phonenum->TabIndex = 70;
			this->tb_Phonenum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(34, 83);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 27);
			this->label10->TabIndex = 69;
			this->label10->Text = L"QQ";
			// 
			// tb_QQnum
			// 
			this->tb_QQnum->BackColor = System::Drawing::Color::LightBlue;
			this->tb_QQnum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_QQnum->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tb_QQnum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_QQnum->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_QQnum->Location = System::Drawing::Point(104, 83);
			this->tb_QQnum->Name = L"tb_QQnum";
			this->tb_QQnum->ReadOnly = true;
			this->tb_QQnum->Size = System::Drawing::Size(180, 29);
			this->tb_QQnum->TabIndex = 68;
			this->tb_QQnum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(23, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 27);
			this->label3->TabIndex = 38;
			this->label3->Text = L"姓  名";
			// 
			// tb_Name
			// 
			this->tb_Name->BackColor = System::Drawing::Color::LightBlue;
			this->tb_Name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_Name->Cursor = System::Windows::Forms::Cursors::Default;
			this->tb_Name->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_Name->ForeColor = System::Drawing::SystemColors::Highlight;
			this->tb_Name->Location = System::Drawing::Point(104, 43);
			this->tb_Name->Name = L"tb_Name";
			this->tb_Name->ReadOnly = true;
			this->tb_Name->Size = System::Drawing::Size(180, 29);
			this->tb_Name->TabIndex = 37;
			this->tb_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->exit_button->Location = System::Drawing::Point(537, 12);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(41, 44);
			this->exit_button->TabIndex = 27;
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &CardFindInfo::exit_button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->listView1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(598, 490);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"请输入您要找的卡号";
			this->groupBox1->Visible = false;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->stu_master, this->stu_finder, 
				this->curdate});
			this->listView1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(12, 124);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(572, 339);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &CardFindInfo::listView1_DoubleClick);
			// 
			// stu_master
			// 
			this->stu_master->Text = L"卡主";
			this->stu_master->Width = 159;
			// 
			// stu_finder
			// 
			this->stu_finder->Text = L"拾卡者";
			this->stu_finder->Width = 184;
			// 
			// curdate
			// 
			this->curdate->Text = L"发布日期";
			this->curdate->Width = 215;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(423, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"查看";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CardFindInfo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Blackoak Std", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(31, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(356, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox2->Controls->Add(this->btn_Loser);
			this->groupBox2->Controls->Add(this->btn_Finder);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Black;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(598, 490);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"请选择您需要的功能";
			// 
			// btn_Loser
			// 
			this->btn_Loser->BackColor = System::Drawing::Color::Chocolate;
			this->btn_Loser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_Loser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Loser->Location = System::Drawing::Point(332, 192);
			this->btn_Loser->Name = L"btn_Loser";
			this->btn_Loser->Size = System::Drawing::Size(187, 107);
			this->btn_Loser->TabIndex = 1;
			this->btn_Loser->Text = L"卡不见啦";
			this->btn_Loser->UseVisualStyleBackColor = false;
			this->btn_Loser->Click += gcnew System::EventHandler(this, &CardFindInfo::btn_Loser_Click);
			// 
			// btn_Finder
			// 
			this->btn_Finder->BackColor = System::Drawing::Color::Chocolate;
			this->btn_Finder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_Finder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Finder->Location = System::Drawing::Point(69, 192);
			this->btn_Finder->Name = L"btn_Finder";
			this->btn_Finder->Size = System::Drawing::Size(187, 107);
			this->btn_Finder->TabIndex = 0;
			this->btn_Finder->Text = L"捡到卡啦";
			this->btn_Finder->UseVisualStyleBackColor = false;
			this->btn_Finder->Click += gcnew System::EventHandler(this, &CardFindInfo::btn_Finder_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->btn_SendFinder);
			this->groupBox3->Controls->Add(this->tb_FindCard);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Black;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Margin = System::Windows::Forms::Padding(0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(598, 490);
			this->groupBox3->TabIndex = 30;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"请输入你捡到的卡号";
			this->groupBox3->Visible = false;
			// 
			// btn_SendFinder
			// 
			this->btn_SendFinder->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_SendFinder->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
			this->btn_SendFinder->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_SendFinder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SendFinder->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_SendFinder->Location = System::Drawing::Point(478, 219);
			this->btn_SendFinder->Name = L"btn_SendFinder";
			this->btn_SendFinder->Size = System::Drawing::Size(70, 36);
			this->btn_SendFinder->TabIndex = 3;
			this->btn_SendFinder->Text = L"确认";
			this->btn_SendFinder->UseVisualStyleBackColor = false;
			this->btn_SendFinder->Click += gcnew System::EventHandler(this, &CardFindInfo::btn_SendFinder_Click);
			// 
			// tb_FindCard
			// 
			this->tb_FindCard->Font = (gcnew System::Drawing::Font(L"Blackoak Std", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_FindCard->Location = System::Drawing::Point(69, 221);
			this->tb_FindCard->Name = L"tb_FindCard";
			this->tb_FindCard->ShortcutsEnabled = false;
			this->tb_FindCard->Size = System::Drawing::Size(356, 31);
			this->tb_FindCard->TabIndex = 2;
			this->tb_FindCard->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CardFindInfo
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(596, 488);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->拾卡人信息);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"CardFindInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"一卡通平台";
			this->Load += gcnew System::EventHandler(this, &CardFindInfo::CardFindInfo_Load);
			this->拾卡人信息->ResumeLayout(false);
			this->拾卡人信息->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 ClientDo ^Sent=gcnew ClientDo;
				 Sent->op_Setport(4874);
				 Sent->op_Connect_Server();
				 Sent->op_Send("A");
				 String ^Respond=gcnew String(Sent->op_Receive());
				 if (Respond[0]=='N')
				 {
					 MessageBox::Show("请检查网络再重试！");
					 this->Close();
				 }
				 int i=0;
				 card ^ cd;
				 bool has=0;
				 Sent->op_Shutdown_Server();
				 while(Respond[0]!='\0'){ 

					 try{
						 //
						 cd=gcnew card;
						 int i=cd->decode(Respond);
						 Respond=Respond->Substring(i);
						 //

						 if(cd->master->Contains(textBox1->Text)){
							 has=1;
							 bool t=cd->getpeople();
							 if(!t){
								 MessageBox::Show("您输入的学号未录入");
								 return;
								 textBox1->Text="";
							 }
							 this->groupBox1->Visible=0;
							 //  MessageBox::Show("1234");

							 tb_Phonenum->Text=cd->_stu_finder->get_Phonenum();
							 tb_Name->Text=cd->_stu_finder->get_Name();
							 tb_QQnum->Text=cd->_stu_finder->get_QQnum();
							 return;
						 }
					 }
					 catch(Exception^){}
				 }
				 if(!has){
					 MessageBox::Show("Sorry,您的卡可能已经在外太空！");
					 textBox1->Text="";
				 }


			 }
	private: System::Void CardFindInfo_Load(System::Object^  sender, System::EventArgs^  e) {
				 ClientDo ^Sent=gcnew ClientDo;
				 Sent->op_Setport(4874);
				 Sent->op_Connect_Server();
				 Sent->op_Send("A");
				 String ^Respond=gcnew String(Sent->op_Receive());
				 if (Respond[0]=='N')
				 {
					 MessageBox::Show("请检查网络再重试！");
					 this->Close();
				 }
				 int i=0;
				 card ^ cd;
				 Sent->op_Shutdown_Server();
				 while(Respond[0]!='\0'){
					 try{
						 //
						 cd=gcnew card;
						 int i=cd->decode(Respond);
						 Respond=Respond->Substring(i);
						 //
						 ListViewItem ^listitem = gcnew ListViewItem(cd->master);
						 listitem->SubItems->Add(cd->finder);
						 listitem->SubItems->Add(cd->curdate);
						 listView1->Items->Add( listitem );
					 }
					 catch(Exception^){}
				 }
			 }
	private: System::Void btn_Loser_Click(System::Object^  sender, System::EventArgs^  e) {
				 groupBox2->Visible=0;
				 groupBox1->Visible=1;
			 }
    private: System::Void btn_Finder_Click(System::Object^  sender, System::EventArgs^  e) {
			     groupBox2->Visible=0;
				 groupBox3->Visible=1;
		     }
private: System::Void btn_SendFinder_Click(System::Object^  sender, System::EventArgs^  e) {
				 extern string ID;
				 card ^cd=gcnew card;
				 String^ me=gcnew String(ID.c_str());
				 cd->setmsg(tb_FindCard->Text,me);
				 String^ txt=cd->code();
				 ClientDo^ sent=gcnew ClientDo;
				 sent->op_Setport(4874);
				 sent->op_Connect_Server();
				 sent->op_Send(txt);
				 String^Respond=sent->op_Receive();
				 sent->op_Shutdown_Server();
				 if(Respond->Contains("Y"))
					 MessageBox::Show("Accepted！");
				 else
					 MessageBox::Show("Runtime Error!");
				 groupBox3->Visible=0;
				 groupBox1->Visible=1;
				CardFindInfo_Load(sender,e);
		 }
private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 String ^IDstr=gcnew String(listView1->SelectedItems[0]->SubItems[1]->Text);
			 UserInfo ^UI=gcnew UserInfo(IDstr);
			 UI->Show();
		 }
    };
}