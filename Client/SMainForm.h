#pragma once
#include "PersonalInfo.h"
#include "Date_Keeper.h"
#include "mine.h"
#include "CardFindInfo.h"
#include "ExchangePlatform.h"
#include "Information.h"
#include "FriendList.h"
namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SMainForm 摘要
	/// </summary>
	public ref class SMainForm : public System::Windows::Forms::Form
	{
	public:
		SMainForm(void)
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
		~SMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  mini_button;
	private: System::Windows::Forms::Button^  bt_Openmine;
	protected: 

	private: System::Windows::Forms::Button^  calculator_button;


	private: System::Windows::Forms::Button^  main_exit_button;
	private: System::Windows::Forms::Button^  tb_PersonalInfo;

	private: System::Windows::Forms::Button^  bt_FriendList;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  tb_MsgSystem;
	private: System::Windows::Forms::Button^  tb_ExchangeSystem;
	private: System::Windows::Forms::Button^  bt_CardSystem;

	private: System::Windows::Forms::Button^  bt_MusicPlayer;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  bt_DateKeeper;
	private: System::Windows::Forms::Button^  btn_About;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SMainForm::typeid));
			this->mini_button = (gcnew System::Windows::Forms::Button());
			this->bt_Openmine = (gcnew System::Windows::Forms::Button());
			this->calculator_button = (gcnew System::Windows::Forms::Button());
			this->main_exit_button = (gcnew System::Windows::Forms::Button());
			this->tb_PersonalInfo = (gcnew System::Windows::Forms::Button());
			this->bt_FriendList = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tb_MsgSystem = (gcnew System::Windows::Forms::Button());
			this->tb_ExchangeSystem = (gcnew System::Windows::Forms::Button());
			this->bt_CardSystem = (gcnew System::Windows::Forms::Button());
			this->bt_MusicPlayer = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bt_DateKeeper = (gcnew System::Windows::Forms::Button());
			this->btn_About = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
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
			this->mini_button->Location = System::Drawing::Point(673, 8);
			this->mini_button->Name = L"mini_button";
			this->mini_button->Size = System::Drawing::Size(70, 70);
			this->mini_button->TabIndex = 25;
			this->mini_button->UseVisualStyleBackColor = false;
			this->mini_button->Click += gcnew System::EventHandler(this, &SMainForm::mini_button_Click);
			this->mini_button->MouseEnter += gcnew System::EventHandler(this, &SMainForm::mini_button_MouseEnter);
			this->mini_button->MouseLeave += gcnew System::EventHandler(this, &SMainForm::mini_button_MouseLeave);
			// 
			// bt_Openmine
			// 
			this->bt_Openmine->BackColor = System::Drawing::Color::Transparent;
			this->bt_Openmine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bt_Openmine.BackgroundImage")));
			this->bt_Openmine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bt_Openmine->FlatAppearance->BorderSize = 0;
			this->bt_Openmine->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bt_Openmine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bt_Openmine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_Openmine->ForeColor = System::Drawing::Color::DimGray;
			this->bt_Openmine->Location = System::Drawing::Point(597, 310);
			this->bt_Openmine->Name = L"bt_Openmine";
			this->bt_Openmine->Size = System::Drawing::Size(116, 126);
			this->bt_Openmine->TabIndex = 24;
			this->bt_Openmine->UseVisualStyleBackColor = false;
			this->bt_Openmine->Click += gcnew System::EventHandler(this, &SMainForm::bt_Openmine_Click);
			this->bt_Openmine->MouseEnter += gcnew System::EventHandler(this, &SMainForm::bt_Openmine_MouseEnter_1);
			this->bt_Openmine->MouseLeave += gcnew System::EventHandler(this, &SMainForm::bt_Openmine_MouseLeave_1);
			// 
			// calculator_button
			// 
			this->calculator_button->BackColor = System::Drawing::Color::Transparent;
			this->calculator_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"calculator_button.BackgroundImage")));
			this->calculator_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->calculator_button->FlatAppearance->BorderSize = 0;
			this->calculator_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->calculator_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->calculator_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calculator_button->ForeColor = System::Drawing::Color::DimGray;
			this->calculator_button->Location = System::Drawing::Point(754, 477);
			this->calculator_button->Name = L"calculator_button";
			this->calculator_button->Size = System::Drawing::Size(50, 50);
			this->calculator_button->TabIndex = 23;
			this->calculator_button->UseVisualStyleBackColor = false;
			this->calculator_button->Click += gcnew System::EventHandler(this, &SMainForm::calculator_button_Click);
			this->calculator_button->MouseEnter += gcnew System::EventHandler(this, &SMainForm::calculator_button_MouseEnter);
			this->calculator_button->MouseLeave += gcnew System::EventHandler(this, &SMainForm::calculator_button_MouseLeave);
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
			this->main_exit_button->Location = System::Drawing::Point(749, 8);
			this->main_exit_button->Name = L"main_exit_button";
			this->main_exit_button->Size = System::Drawing::Size(70, 70);
			this->main_exit_button->TabIndex = 20;
			this->main_exit_button->UseVisualStyleBackColor = false;
			this->main_exit_button->Click += gcnew System::EventHandler(this, &SMainForm::main_exit_button_Click);
			this->main_exit_button->MouseEnter += gcnew System::EventHandler(this, &SMainForm::main_exit_button_MouseEnter);
			this->main_exit_button->MouseLeave += gcnew System::EventHandler(this, &SMainForm::main_exit_button_MouseLeave);
			// 
			// tb_PersonalInfo
			// 
			this->tb_PersonalInfo->BackColor = System::Drawing::Color::Transparent;
			this->tb_PersonalInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tb_PersonalInfo.BackgroundImage")));
			this->tb_PersonalInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tb_PersonalInfo->FlatAppearance->BorderSize = 0;
			this->tb_PersonalInfo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tb_PersonalInfo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tb_PersonalInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tb_PersonalInfo->Location = System::Drawing::Point(597, 8);
			this->tb_PersonalInfo->Name = L"tb_PersonalInfo";
			this->tb_PersonalInfo->Size = System::Drawing::Size(70, 70);
			this->tb_PersonalInfo->TabIndex = 19;
			this->tb_PersonalInfo->UseVisualStyleBackColor = false;
			this->tb_PersonalInfo->Click += gcnew System::EventHandler(this, &SMainForm::tb_PersonalInfo_Click);
			this->tb_PersonalInfo->MouseEnter += gcnew System::EventHandler(this, &SMainForm::tb_PersonalInfo_MouseEnter);
			this->tb_PersonalInfo->MouseLeave += gcnew System::EventHandler(this, &SMainForm::tb_PersonalInfo_MouseLeave);
			// 
			// bt_FriendList
			// 
			this->bt_FriendList->BackColor = System::Drawing::Color::Transparent;
			this->bt_FriendList->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bt_FriendList.BackgroundImage")));
			this->bt_FriendList->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bt_FriendList->FlatAppearance->BorderSize = 0;
			this->bt_FriendList->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bt_FriendList->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bt_FriendList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_FriendList->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bt_FriendList->Location = System::Drawing::Point(113, 119);
			this->bt_FriendList->Name = L"bt_FriendList";
			this->bt_FriendList->Size = System::Drawing::Size(138, 126);
			this->bt_FriendList->TabIndex = 26;
			this->bt_FriendList->UseVisualStyleBackColor = false;
			this->bt_FriendList->Click += gcnew System::EventHandler(this, &SMainForm::bt_FriendList_Click);
			this->bt_FriendList->MouseEnter += gcnew System::EventHandler(this, &SMainForm::bt_FriendList_MouseEnter);
			this->bt_FriendList->MouseLeave += gcnew System::EventHandler(this, &SMainForm::bt_FriendList_MouseLeave);
			// 
			// tb_MsgSystem
			// 
			this->tb_MsgSystem->BackColor = System::Drawing::Color::Transparent;
			this->tb_MsgSystem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tb_MsgSystem.BackgroundImage")));
			this->tb_MsgSystem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tb_MsgSystem->FlatAppearance->BorderSize = 0;
			this->tb_MsgSystem->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tb_MsgSystem->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tb_MsgSystem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tb_MsgSystem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tb_MsgSystem->Location = System::Drawing::Point(352, 133);
			this->tb_MsgSystem->Name = L"tb_MsgSystem";
			this->tb_MsgSystem->Size = System::Drawing::Size(138, 112);
			this->tb_MsgSystem->TabIndex = 27;
			this->tb_MsgSystem->UseVisualStyleBackColor = false;
			this->tb_MsgSystem->Click += gcnew System::EventHandler(this, &SMainForm::tb_MsgSystem_Click);
			this->tb_MsgSystem->MouseEnter += gcnew System::EventHandler(this, &SMainForm::tb_MsgSystem_MouseEnter);
			this->tb_MsgSystem->MouseLeave += gcnew System::EventHandler(this, &SMainForm::tb_MsgSystem_MouseLeave);
			// 
			// tb_ExchangeSystem
			// 
			this->tb_ExchangeSystem->BackColor = System::Drawing::Color::Transparent;
			this->tb_ExchangeSystem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tb_ExchangeSystem.BackgroundImage")));
			this->tb_ExchangeSystem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tb_ExchangeSystem->FlatAppearance->BorderSize = 0;
			this->tb_ExchangeSystem->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tb_ExchangeSystem->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tb_ExchangeSystem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tb_ExchangeSystem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tb_ExchangeSystem->Location = System::Drawing::Point(352, 310);
			this->tb_ExchangeSystem->Name = L"tb_ExchangeSystem";
			this->tb_ExchangeSystem->Size = System::Drawing::Size(138, 126);
			this->tb_ExchangeSystem->TabIndex = 28;
			this->tb_ExchangeSystem->UseVisualStyleBackColor = false;
			this->tb_ExchangeSystem->Click += gcnew System::EventHandler(this, &SMainForm::tb_ExchangeSystem_Click);
			this->tb_ExchangeSystem->MouseEnter += gcnew System::EventHandler(this, &SMainForm::tb_ExchangeSystem_MouseEnter);
			this->tb_ExchangeSystem->MouseLeave += gcnew System::EventHandler(this, &SMainForm::tb_ExchangeSystem_MouseLeave);
			// 
			// bt_CardSystem
			// 
			this->bt_CardSystem->BackColor = System::Drawing::Color::Transparent;
			this->bt_CardSystem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bt_CardSystem.BackgroundImage")));
			this->bt_CardSystem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bt_CardSystem->FlatAppearance->BorderSize = 0;
			this->bt_CardSystem->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bt_CardSystem->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bt_CardSystem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_CardSystem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bt_CardSystem->Location = System::Drawing::Point(113, 310);
			this->bt_CardSystem->Name = L"bt_CardSystem";
			this->bt_CardSystem->Size = System::Drawing::Size(138, 126);
			this->bt_CardSystem->TabIndex = 29;
			this->bt_CardSystem->UseVisualStyleBackColor = false;
			this->bt_CardSystem->Click += gcnew System::EventHandler(this, &SMainForm::bt_CardSystem_Click);
			this->bt_CardSystem->MouseEnter += gcnew System::EventHandler(this, &SMainForm::bt_CardSystem_MouseEnter);
			this->bt_CardSystem->MouseLeave += gcnew System::EventHandler(this, &SMainForm::bt_CardSystem_MouseLeave);
			// 
			// bt_MusicPlayer
			// 
			this->bt_MusicPlayer->BackColor = System::Drawing::Color::Transparent;
			this->bt_MusicPlayer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bt_MusicPlayer.BackgroundImage")));
			this->bt_MusicPlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bt_MusicPlayer->FlatAppearance->BorderSize = 0;
			this->bt_MusicPlayer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bt_MusicPlayer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bt_MusicPlayer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_MusicPlayer->ForeColor = System::Drawing::Color::DimGray;
			this->bt_MusicPlayer->Location = System::Drawing::Point(94, 477);
			this->bt_MusicPlayer->Name = L"bt_MusicPlayer";
			this->bt_MusicPlayer->Size = System::Drawing::Size(50, 50);
			this->bt_MusicPlayer->TabIndex = 30;
			this->bt_MusicPlayer->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, -18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(274, 160);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SMainForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SMainForm::pictureBox1_MouseMove);
			// 
			// bt_DateKeeper
			// 
			this->bt_DateKeeper->BackColor = System::Drawing::Color::Transparent;
			this->bt_DateKeeper->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bt_DateKeeper.BackgroundImage")));
			this->bt_DateKeeper->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bt_DateKeeper->FlatAppearance->BorderSize = 0;
			this->bt_DateKeeper->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bt_DateKeeper->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bt_DateKeeper->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_DateKeeper->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bt_DateKeeper->Location = System::Drawing::Point(590, 126);
			this->bt_DateKeeper->Name = L"bt_DateKeeper";
			this->bt_DateKeeper->Size = System::Drawing::Size(133, 127);
			this->bt_DateKeeper->TabIndex = 32;
			this->bt_DateKeeper->UseVisualStyleBackColor = false;
			this->bt_DateKeeper->Click += gcnew System::EventHandler(this, &SMainForm::bt_DateKeeper_Click);
			this->bt_DateKeeper->MouseEnter += gcnew System::EventHandler(this, &SMainForm::bt_DateKeeper_MouseEnter);
			this->bt_DateKeeper->MouseLeave += gcnew System::EventHandler(this, &SMainForm::bt_DateKeeper_MouseLeave);
			// 
			// btn_About
			// 
			this->btn_About->BackColor = System::Drawing::Color::Transparent;
			this->btn_About->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_About.BackgroundImage")));
			this->btn_About->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_About->FlatAppearance->BorderSize = 0;
			this->btn_About->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_About->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_About->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_About->ForeColor = System::Drawing::Color::DimGray;
			this->btn_About->Location = System::Drawing::Point(27, 477);
			this->btn_About->Name = L"btn_About";
			this->btn_About->Size = System::Drawing::Size(50, 50);
			this->btn_About->TabIndex = 33;
			this->btn_About->UseVisualStyleBackColor = false;
			this->btn_About->Click += gcnew System::EventHandler(this, &SMainForm::btn_About_Click);
			// 
			// SMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(826, 549);
			this->Controls->Add(this->btn_About);
			this->Controls->Add(this->bt_DateKeeper);
			this->Controls->Add(this->bt_MusicPlayer);
			this->Controls->Add(this->bt_CardSystem);
			this->Controls->Add(this->tb_ExchangeSystem);
			this->Controls->Add(this->tb_MsgSystem);
			this->Controls->Add(this->bt_FriendList);
			this->Controls->Add(this->mini_button);
			this->Controls->Add(this->bt_Openmine);
			this->Controls->Add(this->calculator_button);
			this->Controls->Add(this->main_exit_button);
			this->Controls->Add(this->tb_PersonalInfo);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"SMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"华工帮校园助手";
			this->Load += gcnew System::EventHandler(this, &SMainForm::SMainForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SMainForm::SMainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SMainForm::SMainForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void main_exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 slow_close();
				 Close();
			 }
	private: System::Void bt_Openmine_Click(System::Object^  sender, System::EventArgs^  e) {
				 mine ^GameForm=gcnew mine;
				 GameForm->Show();
			 }
	private: System::Void calculator_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Diagnostics::ProcessStartInfo ^Info = gcnew System::Diagnostics::ProcessStartInfo(); 
				 Info->FileName = "calc.exe ";//"calc.exe"为计算器，"notepad.exe"为记事本
				 System::Diagnostics::Process ^Proc= System::Diagnostics::Process::Start(Info);
			 }
	private: System::Void tb_PersonalInfo_Click(System::Object^  sender, System::EventArgs^  e) {
				 PersonalInfo ^PIForm=gcnew PersonalInfo;
				 PIForm->Show();
			 }
	private: System::Void bt_DateKeeper_Click(System::Object^  sender, System::EventArgs^  e) {
				 Date_Keeper ^DK=gcnew Date_Keeper;
				 DK->Show();
			 }
    private: System::Void bt_CardSystem_Click(System::Object^  sender, System::EventArgs^  e) {
			     CardFindInfo ^CFI=gcnew CardFindInfo;
			     CFI->Show();
		     }
    private: System::Void tb_ExchangeSystem_Click(System::Object^  sender, System::EventArgs^  e) {
			     ExchangePlatform ^EP=gcnew ExchangePlatform;
			     EP->Show();
		     }
//---------------------------------------------------------------------------------------
	private:void slow_show(){
				double a=0.0;
				for(int i=0;i<5000;i++){
					a+=0.0002;
					this->Opacity = a;
					this->Show();
				}
			} 
	private:void slow_close(){
				double a=1;
				for(int i=0;i<5000;i++){
					a-=0.0002;
					this->Opacity = a;
					this->Show();
				}
			}
	private:Point mypoint;
	private: System::Void SMainForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mypoint.X = e->X, mypoint.Y = e->Y;
			 }
	private: System::Void SMainForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
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
	private: System::Void mini_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this -> WindowState = Windows::Forms::FormWindowState::Minimized;
			 }
	private: System::Void bt_Openmine_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_Openmine->Location = System::Drawing::Point(5, 460);
				 bt_Openmine->Width+=14;
				 bt_Openmine->Height+=14;
			 }
	private: System::Void bt_Openmine_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_Openmine->Location = System::Drawing::Point(12, 467);
				 bt_Openmine->Width-=14;
				 bt_Openmine->Height-=14;
			 }
	private: System::Void calculator_button_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->calculator_button->Location = System::Drawing::Point(749, 472);
				 calculator_button->Width+=10;
				 calculator_button->Height+=10;
			 }
	private: System::Void calculator_button_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->calculator_button->Location = System::Drawing::Point(754, 477);
				 calculator_button->Width-=10;
				 calculator_button->Height-=10;
			 }
	private: System::Void main_exit_button_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->main_exit_button->Location = System::Drawing::Point(743,3);
				 main_exit_button->Width+=10;
				 main_exit_button->Height+=10;
			 }
	private: System::Void main_exit_button_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->main_exit_button->Location = System::Drawing::Point(749, 8);
				 main_exit_button->Width-=10;
				 main_exit_button->Height-=10;
			 }
	private: System::Void mini_button_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->mini_button->Location = System::Drawing::Point(668, 3);
				 mini_button->Width+=10;
				 mini_button->Height+=10;
			 }
	private: System::Void mini_button_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->mini_button->Location = System::Drawing::Point(673, 8);
				 mini_button->Width-=10;
				 mini_button->Height-=10;
			 }
	private: System::Void tb_PersonalInfo_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->tb_PersonalInfo->Location = System::Drawing::Point(592, 3);
				 tb_PersonalInfo->Width+=10;
				 tb_PersonalInfo->Height+=10;
			 }
    private: System::Void tb_PersonalInfo_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->tb_PersonalInfo->Location = System::Drawing::Point(597, 8);
				 tb_PersonalInfo->Width-=10;
				 tb_PersonalInfo->Height-=10;
		     }
	private: System::Void bt_FriendList_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_FriendList->Location = System::Drawing::Point(108, 104);
				 bt_FriendList->Width+=30;
				 bt_FriendList->Height+=30;
			 }
	private: System::Void bt_FriendList_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_FriendList->Location = System::Drawing::Point(113, 119);
				 bt_FriendList->Width-=30;
				 bt_FriendList->Height-=30;
			 }
	private: System::Void tb_MsgSystem_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->tb_MsgSystem->Location = System::Drawing::Point(337, 118);
				 tb_MsgSystem->Width+=30;
				 tb_MsgSystem->Height+=30;
			 }
	private: System::Void tb_MsgSystem_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->tb_MsgSystem->Location = System::Drawing::Point(352, 133);
				 tb_MsgSystem->Width-=30;
				 tb_MsgSystem->Height-=30;
			 }
	private: System::Void bt_CardSystem_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_CardSystem->Location = System::Drawing::Point(98, 295);
				 bt_CardSystem->Width+=30;
				 bt_CardSystem->Height+=30;
			 }
	private: System::Void bt_CardSystem_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_CardSystem->Location = System::Drawing::Point(113, 310);
				 bt_CardSystem->Width-=30;
				 bt_CardSystem->Height-=30;
			 }
	private: System::Void tb_ExchangeSystem_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->tb_ExchangeSystem->Location = System::Drawing::Point(337, 295);
				 tb_ExchangeSystem->Width+=30;
				 tb_ExchangeSystem->Height+=30;
			 }
	private: System::Void tb_ExchangeSystem_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->tb_ExchangeSystem->Location = System::Drawing::Point(352, 310);
				 tb_ExchangeSystem->Width-=30;
				 tb_ExchangeSystem->Height-=30;
			 }
	private: System::Void bt_Openmine_MouseEnter_1(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_Openmine->Location = System::Drawing::Point(582, 295);
				 bt_Openmine->Width+=30;
				 bt_Openmine->Height+=30;
			 }
    private: System::Void bt_Openmine_MouseLeave_1(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_Openmine->Location = System::Drawing::Point(597, 310);
				 bt_Openmine->Width-=30;
				 bt_Openmine->Height-=30;
		     }
	private: System::Void bt_DateKeeper_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_DateKeeper->Location = System::Drawing::Point(575, 111);
				 bt_DateKeeper->Width+=30;
				 bt_DateKeeper->Height+=30;
			 }
    private: System::Void bt_DateKeeper_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->bt_DateKeeper->Location = System::Drawing::Point(590, 126);
				 bt_DateKeeper->Width-=30;
				 bt_DateKeeper->Height-=30;
		     }
	private: System::Void SMainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 toolTip1->SetToolTip(tb_MsgSystem,"查看教师留言");
				 toolTip1->SetToolTip(bt_FriendList,"好友列表");
				 toolTip1->SetToolTip(bt_Openmine,"扫雷游戏");
				 toolTip1->SetToolTip(tb_ExchangeSystem,"二手交易系统");
				 toolTip1->SetToolTip(bt_CardSystem,"一卡通平台");
				 toolTip1->SetToolTip(bt_MusicPlayer,"音乐播放器");
				 toolTip1->SetToolTip(calculator_button,"计算器");
				 toolTip1->SetToolTip(mini_button,"最小化");
				 toolTip1->SetToolTip(main_exit_button,"退出");
				 toolTip1->SetToolTip(tb_PersonalInfo,"个人信息");
				 toolTip1->SetToolTip(bt_DateKeeper,"记事本");
			 }
private: System::Void tb_MsgSystem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Information ^IF=gcnew Information;
			 IF->Show();
		 }
private: System::Void bt_FriendList_Click(System::Object^  sender, System::EventArgs^  e) {
			 FriendList ^FL=gcnew FriendList;
			 FL->Show();
		 }
private: System::Void btn_About_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Scut_Helper\r\n版本：1.0.0\r\n制作人：马一宁 黄家锐 胡雨薇");
		 }
};
}