#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// TMainForm 摘要
	/// </summary>
	public ref class TMainForm : public System::Windows::Forms::Form
	{
	public:
		TMainForm(void)
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
		~TMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btn_send;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TMainForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_send = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(892, 339);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->TabStop = false;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TMainForm::dataGridView1_CellClick);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TMainForm::dataGridView1_CellValueChanged);
			this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &TMainForm::dataGridView1_UserDeletingRow);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(299, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 33);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"未选择";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"楷体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(76, 74);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(451, 117);
			this->textBox2->TabIndex = 2;
			// 
			// btn_send
			// 
			this->btn_send->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_send.BackgroundImage")));
			this->btn_send->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_send->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_send->FlatAppearance->BorderSize = 0;
			this->btn_send->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_send->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_send->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_send->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btn_send->Location = System::Drawing::Point(580, 105);
			this->btn_send->Name = L"btn_send";
			this->btn_send->Size = System::Drawing::Size(60, 60);
			this->btn_send->TabIndex = 3;
			this->btn_send->UseVisualStyleBackColor = true;
			this->btn_send->Click += gcnew System::EventHandler(this, &TMainForm::btn_send_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(234, 441);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"已选中的学生：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(158, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(562, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"★您可以在此任意修改、删除、排序所有学生信息：";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->btn_send);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"楷体", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Location = System::Drawing::Point(123, 406);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(697, 217);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"留言功能";
			// 
			// TMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(918, 644);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MinimizeBox = false;
			this->Name = L"TMainForm";
			this->Text = L"教师客户端";
			this->Load += gcnew System::EventHandler(this, &TMainForm::TMainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: _teacher_do^tea;
	private: DataTable^admin_users;
	private: System::Void TMainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern string ID;
				 String ^IDstr=gcnew String(ID.c_str());
				 tea=gcnew _teacher_do;
				 tea->admin_name=gcnew String(IDstr);
				 ClientDo ^Sent=gcnew ClientDo;
				 Sent->op_Setport(4876);
				 Sent->op_Connect_Server();
				 Sent->op_Send("A");
				 String ^Respond=gcnew String(Sent->op_Receive());
				 Sent->op_Shutdown_Server();
				 admin_users=gcnew DataTable();
				 //产生表格
				 admin_users->Columns->Add("学号");
				 admin_users->Columns->Add("姓名");
				 admin_users->Columns->Add("性别");
				 admin_users->Columns->Add("学院");
				 admin_users->Columns->Add("专业");
				 admin_users->Columns->Add("年级");
				 admin_users->Columns->Add("班级");
				 admin_users->Columns->Add("手机号");
				 //解码
				 while(Respond[0]!='\0'){
						 try{
							 //
							 _teacher_do^team=gcnew _teacher_do;
							 int i=team->newdecode(Respond);
							 Respond=Respond->Substring(i);
							 //
							 DataRow^ row=admin_users->NewRow();
							 row[0]=team->get_SchoolId();
							 row[1]=team->get_Name();
							 row[2]=team->get_Sex();
							 row[3]=team->get_Academy();
							 row[4]=team->get_Major();
							 row[5]=team->get_Grade();
							 row[6]=team->get_Class();
							 row[7]=team->get_Phonenum();
							 admin_users->Rows->Add(row);
						 }
						 catch(Exception^){}
				 }



				 dataGridView1->DataSource=admin_users;
			 }
	private: System::Void dataGridView1_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 if(e->ColumnIndex==0)
				 {
					 MessageBox::Show("学号不可更改");
					 TMainForm_Load(sender,e);
					 return;
				 }
				 DataRow ^ row=admin_users->Rows[e->RowIndex];
				 String^user=row[0]->ToString();		 
				 if(MessageBox::Show("确认修改？","修改数据", System::Windows::Forms::MessageBoxButtons::OKCancel) ==  System::Windows::Forms::DialogResult::OK)
				 {
					
					 //初始化信息
					 ClientDo^sent=gcnew ClientDo;
					 sent->op_Setport(4873);
					 sent->op_Connect_Server();
					 sent->op_Send(user);
					 String^Respond= sent->op_Receive();
					 sent->op_Shutdown_Server();
					 //处理信息
					 if(Respond->Length>0&&Respond[0]!='N'){
						tea->newdecode(Respond);
						//修改信息
						tea->Set_SchoolId(row[0]->ToString());
						tea->Set_Name(row[1]->ToString());
						tea->Set_Sex(row[2]->ToString());
						tea->Set_Academy(row[3]->ToString());
						tea->Set_Major(row[4]->ToString());
						tea->Set_Grade(row[5]->ToString());
						tea->Set_Class(row[6]->ToString());
						tea->Set_Phonenum(row[7]->ToString());
						//发送修改
						sent->op_Setport(4876);
						sent->op_Connect_Server();
						sent->op_Send(tea->code());
						String^Respond2= sent->op_Receive();
						sent->op_Shutdown_Server();
						if(Respond2->Length>0&&Respond2[0]!='N'){
							MessageBox::Show("修改成功");
						}
					 }
				 }
				TMainForm_Load(sender,e);
			 }

private: System::Void dataGridView1_UserDeletingRow(System::Object^  sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^  e) {
			 DataRow ^ row=admin_users->Rows[e->Row->Index];
			 String^user=row[0]->ToString();		 
			 if(MessageBox::Show("确认删除？","修改数据", System::Windows::Forms::MessageBoxButtons::OKCancel) ==  System::Windows::Forms::DialogResult::OK)
			 {
				 ClientDo^sent=gcnew ClientDo;
				 sent->op_Setport(4876);
				 sent->op_Connect_Server();
				 sent->op_Send("D"+user);
				 String^Respond= sent->op_Receive();
				 sent->op_Shutdown_Server();
				 //处理信息
				 if(Respond->Length>0&&Respond[0]!='N'){
					 MessageBox::Show("删除成功");
				 }
			 }
			 TMainForm_Load(sender,e);
		 }
		private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {	
				int index=e->RowIndex;
				if(index>=0){
					DataRow ^ row=admin_users->Rows[e->RowIndex];
					String^user=row[0]->ToString();		
					textBox1->Text=user;
				}
				else{
					textBox1->Text="未选择";
				}
				
		 }
private: System::Void btn_send_Click(System::Object^  sender, System::EventArgs^  e) {
			 //收集并处理数据
			 _news_message_do ^cmd=gcnew _news_message_do;
			 String ^msgword=gcnew String(textBox2->Text);
			 textBox2->Text="";
			 // MessageBox::Show(tea->admin_name);
			 cmd->setmessage(tea->admin_name,textBox1->Text,msgword);
			 cmd->settime();
			 //发送数据
			 try{
				 ClientDo ^Sent=gcnew ClientDo();
				 Sent->op_Setport(4871);
				 Sent->op_Connect_Server();
				 Sent->op_Send(cmd->code());
				 String ^Response=Sent->op_Receive();
				 if (Response->Contains("Y")||Response[0]=='\0')
				 {
					MessageBox::Show("留言成功");
				 }
				 else{
					 MessageBox::Show("发送失败，请检查网络或发送频率过快。");
				 }
			 }
			 catch(Exception^e){
				 MessageBox::Show(e->ToString());
			 }
		 }
};
}
