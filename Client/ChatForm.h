#pragma once
namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace std;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Threading;
	using namespace MySql::Data::MySqlClient;
	using namespace Scut_helper_Scoket;
	using namespace User;
	/// <summary>
	/// MessengeList 摘要
	/// </summary>
	public ref class ChatForm : public System::Windows::Forms::Form
	{
	public:
		ChatForm(String ^a,String ^b)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			localID=a;
			HisID=b;
			ThreadStart^startRead=gcnew ThreadStart(this,&Client::ChatForm::RunFind);
			Find=gcnew Thread(startRead);
			Find->Start();
		}


	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~ChatForm()
		{
			if (components)
			{
				delete components;
			}
			Find->Abort();
			//std::system("taskkill /f /t /im Client.exe");
		}

	protected: 

	protected: 

	protected: 



	private: System::Windows::Forms::TextBox^  tb_MSGHistory;
	private: System::Windows::Forms::TextBox^  tb_MSGTobeSent;
	private: System::Windows::Forms::Button^  btn_SendMSG;
	private: System::Windows::Forms::Button^  btn_Close;




	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::Label^  lb_His;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChatForm::typeid));
			this->tb_MSGHistory = (gcnew System::Windows::Forms::TextBox());
			this->tb_MSGTobeSent = (gcnew System::Windows::Forms::TextBox());
			this->btn_SendMSG = (gcnew System::Windows::Forms::Button());
			this->btn_Close = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->lb_His = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb_MSGHistory
			// 
			this->tb_MSGHistory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(238)), 
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->tb_MSGHistory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_MSGHistory->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_MSGHistory->Location = System::Drawing::Point(12, 132);
			this->tb_MSGHistory->Multiline = true;
			this->tb_MSGHistory->Name = L"tb_MSGHistory";
			this->tb_MSGHistory->ReadOnly = true;
			this->tb_MSGHistory->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->tb_MSGHistory->Size = System::Drawing::Size(615, 514);
			this->tb_MSGHistory->TabIndex = 11;
			// 
			// tb_MSGTobeSent
			// 
			this->tb_MSGTobeSent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(238)), 
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->tb_MSGTobeSent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_MSGTobeSent->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_MSGTobeSent->Location = System::Drawing::Point(12, 705);
			this->tb_MSGTobeSent->Multiline = true;
			this->tb_MSGTobeSent->Name = L"tb_MSGTobeSent";
			this->tb_MSGTobeSent->Size = System::Drawing::Size(615, 86);
			this->tb_MSGTobeSent->TabIndex = 12;
			// 
			// btn_SendMSG
			// 
			this->btn_SendMSG->BackColor = System::Drawing::Color::Transparent;
			this->btn_SendMSG->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_SendMSG->FlatAppearance->BorderSize = 0;
			this->btn_SendMSG->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_SendMSG->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_SendMSG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_SendMSG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SendMSG->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_SendMSG->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btn_SendMSG->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn_SendMSG->Location = System::Drawing::Point(559, 776);
			this->btn_SendMSG->Name = L"btn_SendMSG";
			this->btn_SendMSG->Size = System::Drawing::Size(92, 35);
			this->btn_SendMSG->TabIndex = 13;
			this->btn_SendMSG->Text = L" ";
			this->btn_SendMSG->UseVisualStyleBackColor = false;
			this->btn_SendMSG->Click += gcnew System::EventHandler(this, &ChatForm::btn_SendMSG_Click);
			// 
			// btn_Close
			// 
			this->btn_Close->BackColor = System::Drawing::Color::Transparent;
			this->btn_Close->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_Close->FlatAppearance->BorderSize = 0;
			this->btn_Close->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Close->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_Close->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btn_Close->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn_Close->Location = System::Drawing::Point(483, 776);
			this->btn_Close->Name = L"btn_Close";
			this->btn_Close->Size = System::Drawing::Size(79, 35);
			this->btn_Close->TabIndex = 14;
			this->btn_Close->Text = L" ";
			this->btn_Close->UseVisualStyleBackColor = false;
			this->btn_Close->Click += gcnew System::EventHandler(this, &ChatForm::btn_Close_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList2
			// 
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(16, 16);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// lb_His
			// 
			this->lb_His->AutoSize = true;
			this->lb_His->BackColor = System::Drawing::Color::Transparent;
			this->lb_His->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lb_His->ForeColor = System::Drawing::Color::OrangeRed;
			this->lb_His->Location = System::Drawing::Point(22, 9);
			this->lb_His->Name = L"lb_His";
			this->lb_His->Size = System::Drawing::Size(0, 27);
			this->lb_His->TabIndex = 72;
			this->lb_His->Tag = L"LocalID";
			// 
			// ChatForm
			// 
			this->AcceptButton = this->btn_SendMSG;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(652, 812);
			this->Controls->Add(this->lb_His);
			this->Controls->Add(this->btn_Close);
			this->Controls->Add(this->btn_SendMSG);
			this->Controls->Add(this->tb_MSGTobeSent);
			this->Controls->Add(this->tb_MSGHistory);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ChatForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"消息盒子";
			this->Load += gcnew System::EventHandler(this, &ChatForm::ChatForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ChatForm::ChatForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ChatForm::ChatForm_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Thread ^ Find;
	private: String ^localID;
	private: String ^HisID;
	private: Point mypoint;
	private: void RunFind(){
				 while(1){
					 Thread::Sleep(500);
					 ClientDo ^Sent=gcnew ClientDo();
					 Sent->op_Setport(4872);
					 Sent->op_Connect_Server();
					 Sent->op_Send("$"+localID+"$");
					 String ^Response=Sent->op_Receive();
					 if (Response[0]=='$')
					 {
						 _chat_message_do ^cmd=gcnew _chat_message_do;
						 cmd->decode(Response);
						 tb_MSGHistory->AppendText(String::Format(cmd->time+"  "+HisID+"：\r\n"+cmd->sendmessage));
						 tb_MSGHistory->AppendText("\r\n");

					 }
					 else
						 Thread::Sleep(1000);
				 }
			 }
	private: System::Void btn_Close_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
				 Find->Abort();
				 //std::system("taskkill /f /t /im Client.exe");
			 }
	private: System::Void btn_SendMSG_Click(System::Object^  sender, System::EventArgs^  e) {
				 //收集并处理数据
				 _chat_message_do ^cmd=gcnew _chat_message_do;
				 String ^msgword=gcnew String(tb_MSGTobeSent->Text);
				 tb_MSGTobeSent->Text="";
				 cmd->setmessage(localID,HisID,msgword);
				 cmd->settime();
				 //发送数据
				 try{
					 ClientDo ^Sent=gcnew ClientDo();
					 Sent->op_Setport(4871);
					 Sent->op_Connect_Server();
					 Sent->op_Send(cmd->code());
					 String ^Response=Sent->op_Receive();
					 if (Response->Contains("Y"))
					 {
						 Sent->op_Shutdown_Server();
						 String^ temp=cmd->time;
						 tb_MSGHistory->AppendText(String::Format(temp+"  "+localID+"：\r\n"+msgword));
						 tb_MSGHistory->AppendText("\r\n");
					 }
					 else{
						 MessageBox::Show("发送失败，请检查网络或发送频率过快。");
					 }
				 }
				 catch(Exception^e){
					 MessageBox::Show(e->ToString());
				 }
			 }
	private: System::Void ChatForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mypoint.X = e->X, mypoint.Y = e->Y;
			 }

private: System::Void ChatForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }

		 }
private: System::Void ChatForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 lb_His->Text=HisID;
		 }
};
}
