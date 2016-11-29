#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace MySql::Data::MySqlClient;
	using namespace Scut_helper_Scoket;

	/// <summary>
	/// Information 摘要
	/// </summary>
	public ref class Information : public System::Windows::Forms::Form
	{
	public:
		Information(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			ThreadStart^startRead=gcnew ThreadStart(this,&Client::Information::RunFind);
			Find=gcnew Thread(startRead);
			Find->Start();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Information()
		{
			if (components)
			{
				delete components;
			}
			Find->Abort();
		}
	private: System::Windows::Forms::TextBox^  tb_H;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  mini_button;
	private: System::Windows::Forms::Button^  main_exit_button;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Information::typeid));
			this->tb_H = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mini_button = (gcnew System::Windows::Forms::Button());
			this->main_exit_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_H
			// 
			this->tb_H->BackColor = System::Drawing::Color::Moccasin;
			this->tb_H->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tb_H->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->tb_H->Location = System::Drawing::Point(19, 203);
			this->tb_H->Multiline = true;
			this->tb_H->Name = L"tb_H";
			this->tb_H->Size = System::Drawing::Size(491, 175);
			this->tb_H->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"教师留言：";
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
			this->mini_button->Location = System::Drawing::Point(436, 1);
			this->mini_button->Name = L"mini_button";
			this->mini_button->Size = System::Drawing::Size(47, 45);
			this->mini_button->TabIndex = 29;
			this->mini_button->UseVisualStyleBackColor = false;
			this->mini_button->Click += gcnew System::EventHandler(this, &Information::mini_button_Click);
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
			this->main_exit_button->Location = System::Drawing::Point(489, 1);
			this->main_exit_button->Name = L"main_exit_button";
			this->main_exit_button->Size = System::Drawing::Size(47, 45);
			this->main_exit_button->TabIndex = 28;
			this->main_exit_button->UseVisualStyleBackColor = false;
			this->main_exit_button->Click += gcnew System::EventHandler(this, &Information::main_exit_button_Click);
			// 
			// Information
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(538, 404);
			this->Controls->Add(this->mini_button);
			this->Controls->Add(this->main_exit_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_H);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Information";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Information";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Information::Information_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Information::Information_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: Thread ^ Find;
	private: void RunFind(){
				 while(1){
					 Thread::Sleep(500);
					 ClientDo ^Sent=gcnew ClientDo();
					 Sent->op_Setport(4872);
					 Sent->op_Connect_Server();
					 extern string	ID;
					 String^o=gcnew String(ID.c_str());
					 Sent->op_Send("*"+o+"$");
					 String ^Response=Sent->op_Receive();
					 Sent->op_Shutdown_Server();
					 //MessageBox::Show(Response);
					 if (Response[0]=='$')
					 {
						 _news_message_do ^cmd=gcnew _news_message_do;
						 cmd->decode(Response);
						 // MessageBox::Show(cmd->kind);
						 if(cmd->kind->Contains("news")){
							 tb_H->AppendText(String::Format(cmd->time+"  "+cmd->from+"：\r\n"+cmd->sendmessage));
							 tb_H->AppendText("\r\n");
						 }
					 }
					 else if(Response[0]=='0') 
						 MessageBox::Show("网络错误！");
					 Thread::Sleep(1000);
				 }
			 }
#pragma endregion
	private: Point mypoint;
	private: System::Void main_exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void mini_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
		 }
private: System::Void Information_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mypoint.X = e->X, mypoint.Y = e->Y;
		 }
private: System::Void Information_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
				 Point myposition = MousePosition;
				 myposition.Offset( -mypoint.X, -mypoint.Y );
				 this->Location = myposition;
			 }
		 }
};
}
