#pragma once

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// mine 摘要
	/// </summary>
	public ref class mine : public System::Windows::Forms::Form
	{
		array <Button^> ^b;
		array <Boolean> ^open;
		array <Boolean> ^is_mine;
		array <Int32> ^flag;
		array <Int32,2> ^dir;
		Int32 is_game_over;
		Int32 total_mine, total_grid;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  exit_button;
	private: System::Windows::Forms::PictureBox^  Boom;


	private: System::Windows::Forms::TextBox^  textBox1;
	public:
		mine(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			Boom->Visible=false;
			dir = gcnew array<Int32, 2>( 8, 2 ) { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 }, { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 } };
			open = gcnew array<Boolean>( 100 );
			b = gcnew array<Button^> ( 100 );
			flag = gcnew array<Int32>( 100 );
			is_mine = gcnew array<Boolean>( 100 );

			for( int i = 0; i < 100; ++i ) {
				b[i] = gcnew Button();
				b[i]->Location = System::Drawing::Point( i / 10 * 32 + 100, i % 10 * 32 + 100 );
				b[i]->Name = L"b";
				b[i]->Size = System::Drawing::Size(32, 32);
				b[i]->TabIndex = 0;
				b[i]->Text = L"";
				b[i]->UseVisualStyleBackColor = true;
				b[i] -> BackColor = System::Drawing::Color::Transparent;
				b[i] -> BackgroundImage = imageList1 -> Images[10];
				b[i] -> BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				b[i] -> Click += gcnew System::EventHandler( this, &mine::ClickHandler );
				b[i] -> MouseDown += gcnew System::Windows::Forms::MouseEventHandler( this, &mine::Click_right_handler );
				b[i]->Cursor = System::Windows::Forms::Cursors::Hand;
				b[i]->FlatAppearance->BorderSize = 1;
				b[i]->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
				b[i]->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Fuchsia;
				b[i]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				b[i]->Margin = System::Windows::Forms::Padding(0);


				this->Controls->Add( b[i] );
				b[i] -> Show();
			}
			is_game_over = 1;
		}
	private: System::Windows::Forms::Button^  start_button;
	protected: 
	private: System::Windows::Forms::ImageList^  imageList1;

			 //	private: System::ComponentModel::IContainer^  components;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~mine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mine::typeid));
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->Boom = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Boom))->BeginInit();
			this->SuspendLayout();
			// 
			// start_button
			// 
			this->start_button->BackColor = System::Drawing::Color::Transparent;
			this->start_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"start_button.BackgroundImage")));
			this->start_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->start_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->start_button->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->start_button->FlatAppearance->BorderSize = 0;
			this->start_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->start_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->start_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->start_button->Font = (gcnew System::Drawing::Font(L"Lucida Console", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->start_button->ForeColor = System::Drawing::Color::Coral;
			this->start_button->Location = System::Drawing::Point(511, 240);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(130, 130);
			this->start_button->TabIndex = 0;
			this->start_button->Text = L"New Game";
			this->start_button->UseVisualStyleBackColor = false;
			this->start_button->Click += gcnew System::EventHandler(this, &mine::start_button_Click);
			this->start_button->MouseEnter += gcnew System::EventHandler(this, &mine::start_button_MouseEnter);
			this->start_button->MouseLeave += gcnew System::EventHandler(this, &mine::start_button_MouseLeave);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blank.png");
			this->imageList1->Images->SetKeyName(1, L"1.png");
			this->imageList1->Images->SetKeyName(2, L"2.png");
			this->imageList1->Images->SetKeyName(3, L"3.png");
			this->imageList1->Images->SetKeyName(4, L"4.png");
			this->imageList1->Images->SetKeyName(5, L"5.png");
			this->imageList1->Images->SetKeyName(6, L"6.png");
			this->imageList1->Images->SetKeyName(7, L"7.png");
			this->imageList1->Images->SetKeyName(8, L"8.png");
			this->imageList1->Images->SetKeyName(9, L"blank_2.png");
			this->imageList1->Images->SetKeyName(10, L"blank_1.png");
			this->imageList1->Images->SetKeyName(11, L"boomblank.png");
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &mine::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(213, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(62, 24);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(95, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"总共用时";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(312, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"剩余雷数";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(426, 26);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(62, 24);
			this->textBox2->TabIndex = 4;
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::Color::Transparent;
			this->exit_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exit_button.BackgroundImage")));
			this->exit_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->exit_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit_button->FlatAppearance->BorderSize = 0;
			this->exit_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Tan;
			this->exit_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_button->ForeColor = System::Drawing::Color::Transparent;
			this->exit_button->Location = System::Drawing::Point(651, 18);
			this->exit_button->Margin = System::Windows::Forms::Padding(0);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(40, 40);
			this->exit_button->TabIndex = 5;
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &mine::exit_button_Click);
			// 
			// Boom
			// 
			this->Boom->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Boom.Image")));
			this->Boom->Location = System::Drawing::Point(0, 0);
			this->Boom->Margin = System::Windows::Forms::Padding(0);
			this->Boom->Name = L"Boom";
			this->Boom->Size = System::Drawing::Size(707, 471);
			this->Boom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Boom->TabIndex = 6;
			this->Boom->TabStop = false;
			// 
			// mine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(704, 462);
			this->Controls->Add(this->Boom);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->start_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"mine";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"扫雷小游戏";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mine::mine_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mine::mine_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Boom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void init() {
			srand( (int)time( 0 ) );
			for( int i = 0; i < 100; ++i ) {
				b[i] -> BackgroundImage = imageList1 -> Images[10];
				flag[i] = 10;
				open[i] = 0, is_mine[i] = 0;
			}
			for( int i = 0; i < 10; ++i ) {
				while( 1 ) {
					int x = rand() % 100;
					if( is_mine[x] )
						continue;
					is_mine[x] = 1;
					break;
				}
			}
			textBox1 -> Text = "0";
			textBox2 -> Text = "10";
			timer1 -> Start();
			is_game_over = 0;
			total_mine = 10;
			total_grid = 90;




		}
		int query( int x, int y ) {
			int ret = 0;
			for( int i = 0; i < 8; ++i ) {
				int dx = x + dir[i,0];
				int dy = y + dir[i,1];
				if( dx < 0 || dy < 0 || dx >= 10 || dy >= 10 )
					continue;
				if( is_mine[dx*10+dy] )
					ret++;
			}
			return ret;
		}
		void dect( int x, int y ) {
			if( open[x*10+y] || flag[x*10+y] == 9 )
				return;
			int k = query( x, y );
			b[x*10+y] -> BackgroundImage = imageList1 -> Images[k];
			open[x*10+y] = 1;
			total_grid--;
			if( total_grid == 0 ) {
				game_over();
				MessageBox::Show( "算你狠 不过总共用时" + textBox1 -> Text + "秒,辣鸡!","游戏胜利"  );
				return;
			}
			if( k == 0 ) 
				for( int i = 0; i < 8; ++i ) {
					int dx = x + dir[i,0];
					int dy = y + dir[i,1];
					if( dx < 0 || dy < 0 || dx >= 10 || dy >= 10 )
						continue;
					dect( dx, dy );
				}
		}
		void game_over() {
			timer1 -> Stop();
			is_game_over = 1;
			for( int i = 0; i < 100; ++i )
				if( is_mine[i] )
					b[i] -> BackgroundImage = imageList1 -> Images[11];
		}
	private:void ClickHandler( System::Object^ sender, System::EventArgs^ e ) {
				Button^ tmp = ( Button^ )sender;
				if( is_game_over ) {
					return;
				}
				int x = tmp -> Location.X;
				int y = tmp -> Location.Y;
				x -= 100, y -= 100;
				x /= 32, y /= 32;
				if( flag[x*10+y] == 9 )
					return;
				if( is_mine[x*10+y] ) {
					game_over();
					Boom->Visible=true;
					MessageBox::Show( "哈哈,被炸飞了吧~~~","游戏失败" ,MessageBoxButtons::OK);
					Boom->Visible=false;
					return;
				}
				dect( x, y );
			}
	private: void Click_right_handler( System::Object^ sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if( is_game_over )
					 return;
				 Button^ tmp = ( Button^ )sender;
				 if( e -> Button == System::Windows::Forms::MouseButtons::Right ) {
					 int x = tmp -> Location.X;
					 int y = tmp -> Location.Y;
					 x -= 100, y -= 100;
					 x /= 32, y /= 32;
					 if( open[x*10+y] )
						 return;
					 flag[x*10+y] = 19 - flag[x*10+y];
					 tmp -> BackgroundImage = imageList1 -> Images[flag[x*10+y]];
					 Int32 tmp_int = flag[x*10+y] == 9;
					 if( tmp_int == 0 )
						 tmp_int = -1;
					 Int32 tmp2 = Int32::Parse( textBox2 -> Text );
					 tmp2 -= tmp_int;
					 textBox2 -> Text = gcnew String( tmp2.ToString() );
				 }
			 }
	private: System::Void start_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 init();
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Int32 tmp = Int32::Parse( textBox1 -> Text );
				 tmp++;
				 textBox1 -> Text = gcnew String( tmp.ToString() );
			 }
	private: System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private:Point mypoint;
	private: System::Void mine_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mypoint.X = e->X, mypoint.Y = e->Y;
			 }
	private: System::Void mine_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if( e->Button == System::Windows::Forms::MouseButtons::Left ){
					 Point myposition = MousePosition;
					 myposition.Offset( -mypoint.X, -mypoint.Y );
					 this->Location = myposition;
				 }
			 }
	private: System::Void start_button_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->start_button->Location = System::Drawing::Point(501, 230);
				 start_button->Width+=20;
				 start_button->Height+=20;
			 }
	private: System::Void start_button_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->start_button->Location = System::Drawing::Point(511, 240);
				 start_button->Width-=20;
				 start_button->Height-=20;
			 }
	};
}