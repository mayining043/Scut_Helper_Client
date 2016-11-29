#pragma once
#include "Exchange.h"
namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Scut_helper_Scoket;
	using namespace Exchange;
	/// <summary>
	/// ExchangePlatform 摘要
	/// </summary>
	public ref class ExchangePlatform : public System::Windows::Forms::Form
	{
	public:
		ExchangePlatform(void)
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
		~ExchangePlatform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  mini_button;
	protected: 
	private: System::Windows::Forms::Button^  main_exit_button;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  ch_user;
	private: System::Windows::Forms::ColumnHeader^  ch_thing;


	private: System::Windows::Forms::Button^  btn_Add;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ColumnHeader^  ch_Kind;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btn_Public;

	private: System::Windows::Forms::TextBox^  tb_describe;





	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_back;
	private: System::Windows::Forms::ColumnHeader^  ch_price;
	private: System::Windows::Forms::ColumnHeader^  ch_date;

	private: System::Windows::Forms::TextBox^  tb_price;



	private: System::Windows::Forms::TextBox^  tb_kind;

	private: System::Windows::Forms::TextBox^  tb_thing;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ColumnHeader^  ch_describe;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ExchangePlatform::typeid));
			this->mini_button = (gcnew System::Windows::Forms::Button());
			this->main_exit_button = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ch_user = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_Kind = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_thing = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_price = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_date = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_describe = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_price = (gcnew System::Windows::Forms::TextBox());
			this->tb_kind = (gcnew System::Windows::Forms::TextBox());
			this->tb_thing = (gcnew System::Windows::Forms::TextBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_Public = (gcnew System::Windows::Forms::Button());
			this->tb_describe = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->mini_button->Location = System::Drawing::Point(698, 10);
			this->mini_button->Name = L"mini_button";
			this->mini_button->Size = System::Drawing::Size(38, 40);
			this->mini_button->TabIndex = 27;
			this->mini_button->UseVisualStyleBackColor = false;
			this->mini_button->Click += gcnew System::EventHandler(this, &ExchangePlatform::mini_button_Click);
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
			this->main_exit_button->Location = System::Drawing::Point(748, 10);
			this->main_exit_button->Name = L"main_exit_button";
			this->main_exit_button->Size = System::Drawing::Size(38, 40);
			this->main_exit_button->TabIndex = 26;
			this->main_exit_button->UseVisualStyleBackColor = false;
			this->main_exit_button->Click += gcnew System::EventHandler(this, &ExchangePlatform::main_exit_button_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::Gainsboro;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {this->ch_user, this->ch_Kind, 
				this->ch_thing, this->ch_price, this->ch_date, this->ch_describe});
			this->listView1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(35, 78);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->Name = L"listView1";
			this->listView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listView1->Size = System::Drawing::Size(701, 402);
			this->listView1->TabIndex = 28;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &ExchangePlatform::listView1_DoubleClick);
			// 
			// ch_user
			// 
			this->ch_user->Text = L"发布者";
			this->ch_user->Width = 100;
			// 
			// ch_Kind
			// 
			this->ch_Kind->Text = L"物品类型";
			this->ch_Kind->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ch_Kind->Width = 90;
			// 
			// ch_thing
			// 
			this->ch_thing->Text = L"物品名称";
			this->ch_thing->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ch_thing->Width = 89;
			// 
			// ch_price
			// 
			this->ch_price->Text = L"价格";
			this->ch_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ch_price->Width = 61;
			// 
			// ch_date
			// 
			this->ch_date->Text = L"发布日期";
			this->ch_date->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ch_date->Width = 110;
			// 
			// ch_describe
			// 
			this->ch_describe->Text = L"卖家描述";
			this->ch_describe->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ch_describe->Width = 215;
			// 
			// btn_Add
			// 
			this->btn_Add->BackColor = System::Drawing::Color::Transparent;
			this->btn_Add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_Add.BackgroundImage")));
			this->btn_Add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Add->FlatAppearance->BorderSize = 0;
			this->btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add->Location = System::Drawing::Point(45, 488);
			this->btn_Add->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(100, 100);
			this->btn_Add->TabIndex = 29;
			this->btn_Add->UseVisualStyleBackColor = false;
			this->btn_Add->Click += gcnew System::EventHandler(this, &ExchangePlatform::btn_Add_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox1->Controls->Add(this->tb_price);
			this->groupBox1->Controls->Add(this->tb_kind);
			this->groupBox1->Controls->Add(this->tb_thing);
			this->groupBox1->Controls->Add(this->btn_back);
			this->groupBox1->Controls->Add(this->btn_Public);
			this->groupBox1->Controls->Add(this->tb_describe);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(35, 78);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(700, 401);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"待发布物品信息";
			this->groupBox1->Visible = false;
			// 
			// tb_price
			// 
			this->tb_price->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_price->Location = System::Drawing::Point(156, 111);
			this->tb_price->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tb_price->Name = L"tb_price";
			this->tb_price->Size = System::Drawing::Size(152, 32);
			this->tb_price->TabIndex = 15;
			// 
			// tb_kind
			// 
			this->tb_kind->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_kind->Location = System::Drawing::Point(487, 71);
			this->tb_kind->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tb_kind->Name = L"tb_kind";
			this->tb_kind->Size = System::Drawing::Size(152, 32);
			this->tb_kind->TabIndex = 13;
			// 
			// tb_thing
			// 
			this->tb_thing->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_thing->Location = System::Drawing::Point(156, 71);
			this->tb_thing->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tb_thing->Name = L"tb_thing";
			this->tb_thing->Size = System::Drawing::Size(152, 32);
			this->tb_thing->TabIndex = 12;
			// 
			// btn_back
			// 
			this->btn_back->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LavenderBlush;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_back->Location = System::Drawing::Point(545, 334);
			this->btn_back->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(92, 40);
			this->btn_back->TabIndex = 11;
			this->btn_back->Text = L"返回";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &ExchangePlatform::btn_back_Click);
			// 
			// btn_Public
			// 
			this->btn_Public->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LavenderBlush;
			this->btn_Public->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Public->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_Public->Location = System::Drawing::Point(422, 334);
			this->btn_Public->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_Public->Name = L"btn_Public";
			this->btn_Public->Size = System::Drawing::Size(92, 40);
			this->btn_Public->TabIndex = 10;
			this->btn_Public->Text = L"发布";
			this->btn_Public->UseVisualStyleBackColor = true;
			this->btn_Public->Click += gcnew System::EventHandler(this, &ExchangePlatform::btn_Public_Click);
			// 
			// tb_describe
			// 
			this->tb_describe->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_describe->Location = System::Drawing::Point(56, 188);
			this->tb_describe->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tb_describe->Multiline = true;
			this->tb_describe->Name = L"tb_describe";
			this->tb_describe->Size = System::Drawing::Size(582, 125);
			this->tb_describe->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(52, 153);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"物品描述：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(377, 74);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"物品类型";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(67, 117);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"价 格";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(52, 74);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"物品名称";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::PowderBlue;
			this->label6->Location = System::Drawing::Point(40, 22);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(321, 30);
			this->label6->TabIndex = 31;
			this->label6->Text = L"（双击栏目可以查看卖家信息）";
			// 
			// ExchangePlatform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(792, 600);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_Add);
			this->Controls->Add(this->mini_button);
			this->Controls->Add(this->main_exit_button);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ExchangePlatform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"二手交易平台";
			this->Load += gcnew System::EventHandler(this, &ExchangePlatform::ExchangePlatform_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ExchangePlatform::ExchangePlatform_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ExchangePlatform::ExchangePlatform_MouseMove);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:UserInfo ^UI;
	private:Point mypoint;
	private: System::Void ExchangePlatform_Load(System::Object^  sender, System::EventArgs^  e) {
				 toolTip1->SetToolTip(btn_Add,"发布出售需求");

				 ClientDo ^Sent=gcnew ClientDo;
				 Sent->op_Setport(4875);
				 Sent->op_Connect_Server();
				 Sent->op_Send("A");
				 String ^Respond=gcnew String(Sent->op_Receive());
				 if (Respond[0]=='N')
				 {
					 MessageBox::Show("请检查网络再重试！");
					 this->Close();
				 }
				 int i=0;
				 trade ^ td;
				 Sent->op_Shutdown_Server();
				 while(Respond[0]!='\0'){
					 try{
						 //
						 td=gcnew trade;
						 int i=td->decode(Respond);
						 Respond=Respond->Substring(i);
						 //
						 ListViewItem ^listitem = gcnew ListViewItem(td->user);
						 listitem->SubItems->Add(td->kind);
						 listitem->SubItems->Add(td->thing);
						 listitem->SubItems->Add(td->price);
						 listitem->SubItems->Add(td->date);
						 listitem->SubItems->Add(td->describe);
						 listView1->Items->Add( listitem );

					 }
					 catch(Exception^){}
				 }
			 }
private: System::Void btn_Add_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible=1;
		 }
private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 String ^IDstr=gcnew String(listView1->SelectedItems[0]->SubItems[0]->Text);
			 UI=gcnew UserInfo(IDstr);
			 UI->Show();
		 }
private: System::Void btn_SellerInfo_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void btn_back_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible=0;
		 }
private: System::Void btn_Public_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 extern string ID;
			 String^id=gcnew String(ID.c_str());
			 trade ^Newtrade=gcnew trade;
			 Newtrade->kind=tb_kind->Text;
			 Newtrade->price=tb_price->Text;
			 Newtrade->describe=tb_describe->Text;
			 Newtrade->thing=tb_thing->Text;
			 Newtrade->user=id;
			
			 ClientDo^sent=gcnew ClientDo;
			 sent->op_Setport(4875);
			 sent->op_Connect_Server();
			 sent->op_Send( Newtrade->code() );
			 String ^ Respond=sent->op_Receive();
			if(Respond[0]=='Y')
			{
				groupBox1->Visible=0;
				MessageBox::Show("Accepted");
				listView1->Items->Clear();
				ExchangePlatform_Load(sender,e);
			}
			else
				MessageBox::Show("Runtime Error , 请重试");
		 }
private: System::Void main_exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void mini_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
		 }
private: System::Void ExchangePlatform_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mypoint.X = e->X, mypoint.Y = e->Y;
		 }
private: System::Void ExchangePlatform_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }
		 }
};
}
