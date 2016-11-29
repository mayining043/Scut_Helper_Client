#pragma once
#include "ChatForm.h"
#include "UserInfo.h"
namespace Client {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace User;
	using namespace Scut_helper_Scoket;
	/// <summary>
	/// FriendList 摘要
	/// </summary>
	public ref class FriendList : public System::Windows::Forms::Form
	{
	public:
		FriendList(void)
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
		~FriendList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;






	private: System::Windows::Forms::ImageList^  imageList1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  bt_GetInfo;
	private: System::Windows::Forms::ToolStripMenuItem^  bt_StartChat;


	private: System::Windows::Forms::Button^  mini_button;
	private: System::Windows::Forms::Button^  main_exit_button;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FriendList::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->bt_GetInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bt_StartChat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->mini_button = (gcnew System::Windows::Forms::Button());
			this->main_exit_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3});
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::Color::Black;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->LargeImageList = this->imageList1;
			this->listView1->Location = System::Drawing::Point(12, 93);
			this->listView1->Name = L"listView1";
			this->listView1->ShowItemToolTips = true;
			this->listView1->Size = System::Drawing::Size(266, 512);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &FriendList::listView1_DoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"学号";
			this->columnHeader1->Width = 127;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"姓名";
			this->columnHeader2->Width = 108;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"当前消息";
			this->columnHeader3->Width = 243;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->bt_GetInfo, 
				this->bt_StartChat});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(125, 48);
			// 
			// bt_GetInfo
			// 
			this->bt_GetInfo->Name = L"bt_GetInfo";
			this->bt_GetInfo->Size = System::Drawing::Size(124, 22);
			this->bt_GetInfo->Text = L"查看信息";
			this->bt_GetInfo->Click += gcnew System::EventHandler(this, &FriendList::bt_GetInfo_Click);
			// 
			// bt_StartChat
			// 
			this->bt_StartChat->Name = L"bt_StartChat";
			this->bt_StartChat->Size = System::Drawing::Size(124, 22);
			this->bt_StartChat->Text = L"发送消息";
			this->bt_StartChat->Click += gcnew System::EventHandler(this, &FriendList::bt_StartChat_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"male.png");
			this->imageList1->Images->SetKeyName(1, L"woman.png");
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
			this->mini_button->Location = System::Drawing::Point(192, 12);
			this->mini_button->Name = L"mini_button";
			this->mini_button->Size = System::Drawing::Size(40, 39);
			this->mini_button->TabIndex = 29;
			this->mini_button->UseVisualStyleBackColor = false;
			this->mini_button->Click += gcnew System::EventHandler(this, &FriendList::mini_button_Click);
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
			this->main_exit_button->Location = System::Drawing::Point(238, 12);
			this->main_exit_button->Name = L"main_exit_button";
			this->main_exit_button->Size = System::Drawing::Size(40, 39);
			this->main_exit_button->TabIndex = 28;
			this->main_exit_button->UseVisualStyleBackColor = false;
			this->main_exit_button->Click += gcnew System::EventHandler(this, &FriendList::main_exit_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 39);
			this->label1->TabIndex = 30;
			this->label1->Text = L"好友列表";
			// 
			// FriendList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(293, 617);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mini_button);
			this->Controls->Add(this->main_exit_button);
			this->Controls->Add(this->listView1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FriendList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"好友列表";
			this->Load += gcnew System::EventHandler(this, &FriendList::FriendList_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FriendList::FriendList_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FriendList::FriendList_MouseMove);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Point mypoint;
	private: System::Void FriendList_Load(System::Object^  sender, System::EventArgs^  e) {
				 ClientDo ^Sent=gcnew ClientDo;
				 String ^Respond;
				 try{
					 Sent->op_Setport(4876);
					 Sent->op_Connect_Server();
					 Sent->op_Send("A");
					 Respond=gcnew String(Sent->op_Receive());
					 if (Respond[0]=='N')
					 {
						 MessageBox::Show("请检查网络再重试！");
						 this->Close();
					 }
				 }
				 catch(Exception^){
					 MessageBox::Show("加载好友列表失败，请检查网络");
					 this->Close();
				 }
				 //MessageBox::Show(Respond);
				 int i=0;
				 _teacher_do ^ tea;
				 Sent->op_Shutdown_Server();
				 while(Respond[0]!='\0'){
					 try{
						 tea=gcnew _teacher_do;
						 int i=tea->newdecode(Respond);
						 Respond=Respond->Substring(i);
						 ListViewItem ^listitem = gcnew ListViewItem(tea->get_Name());
						 if(tea->get_Sex()->Contains("男")) listitem->ImageIndex=0;
						 else listitem->ImageIndex=1;
						 listitem->ToolTipText=tea->get_SchoolId();
						 listView1->Items->Add( listitem );
					 }
					 catch(Exception^){}
				 }

			 }
	private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e)	{
				 try{
					 extern string ID;
					 String ^LocalID=gcnew String(ID.c_str());
					 String ^HisID=gcnew String(listView1->SelectedItems[0]->ToolTipText);
					 ChatForm ^CF=gcnew ChatForm(LocalID,HisID);
					 CF->Show();
				 }
				 catch(Exception^){}
			 }

	private: System::Void bt_StartChat_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 extern string ID;
					 String ^LocalID=gcnew String(ID.c_str());
					 String ^HisID=gcnew String(listView1->SelectedItems[0]->ToolTipText);
					 ChatForm ^CF=gcnew ChatForm(LocalID,HisID);
					 CF->Show();
				 }
				 catch(Exception^){}
			 }
	private: System::Void bt_GetInfo_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 String ^HisID=gcnew String(listView1->SelectedItems[0]->ToolTipText);
					 UserInfo ^UI=gcnew UserInfo(HisID);
					 UI->Show();
				 }
				 catch(Exception^){}

		     }
	private: System::Void main_exit_button_Click(System::Object^  sender, System::EventArgs^  e){
			 this->Close();
		 }
	private: System::Void mini_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
		 }
	private: System::Void FriendList_MouseDown(System::Object^  sender,		System::Windows::Forms::MouseEventArgs^  e) {
			 mypoint.X = e->X, mypoint.Y = e->Y;
		 }
	private: System::Void FriendList_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }
		 }
};
}
