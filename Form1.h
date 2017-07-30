
#pragma once

namespace test_net {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: int m;
	private: int *ls;
			// =new int[m]
	private: int n;
    
	/*private: MyNet Net1;
	private: Net_BP Net2;*/
		
	private: System::Windows::Forms::NumericUpDown^  numeric1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::RadioButton^  gipertan;

	private: System::Windows::Forms::RadioButton^  log;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label4;







	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numeric1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gipertan = (gcnew System::Windows::Forms::RadioButton());
			this->log = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numeric1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(167, 30);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(51, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::MintCream;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(13, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Размер входного вектора";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::MintCream;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Location = System::Drawing::Point(13, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Количество слоев в сети";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(167, 63);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(51, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 38);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(88, 20);
			this->textBox1->TabIndex = 8;
			// 
			// numeric1
			// 
			this->numeric1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numeric1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numeric1->Location = System::Drawing::Point(74, 1);
			this->numeric1->Margin = System::Windows::Forms::Padding(0);
			this->numeric1->Name = L"numeric1";
			this->numeric1->Size = System::Drawing::Size(72, 16);
			this->numeric1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 27);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ввод";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(167, 94);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 25);
			this->button3->TabIndex = 8;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(248, 417);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(167, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 29);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(536, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(262, 417);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Обучение";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::LightCyan;
			this->textBox13->Location = System::Drawing::Point(150, 194);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(63, 20);
			this->textBox13->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::MintCream;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Location = System::Drawing::Point(6, 194);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(104, 33);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Кол-во итераций обучения";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::LightCyan;
			this->textBox12->Location = System::Drawing::Point(150, 134);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(63, 20);
			this->textBox12->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::MintCream;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Location = System::Drawing::Point(6, 133);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(104, 36);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Кол-во примеров для обучения";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::LightCyan;
			this->textBox11->Location = System::Drawing::Point(150, 75);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(63, 20);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"1";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::LightCyan;
			this->textBox10->Location = System::Drawing::Point(150, 27);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(63, 20);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"1";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::MintCream;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Location = System::Drawing::Point(6, 75);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 31);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Коэф-т инерционности";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::MintCream;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Location = System::Drawing::Point(6, 27);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 29);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Скорость обучения (Eta)";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(150, 251);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 28);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Обучение";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::MintCream;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(6, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Начальные веса";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightCyan;
			this->textBox2->Location = System::Drawing::Point(122, 256);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->textBox14);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->gipertan);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->log);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(267, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(263, 417);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 341);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(102, 20);
			this->textBox3->TabIndex = 15;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(6, 375);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 36);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Посчитать быстро";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click_1);
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::MintCream;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Location = System::Drawing::Point(6, 148);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 21);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Вход";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(122, 148);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox14->Size = System::Drawing::Size(125, 32);
			this->textBox14->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::MintCream;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Location = System::Drawing::Point(6, 282);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 26);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Результат";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(122, 282);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox9->Size = System::Drawing::Size(126, 36);
			this->textBox9->TabIndex = 10;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 187);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(103, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Веса известны";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(163, 324);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 37);
			this->button6->TabIndex = 7;
			this->button6->Text = L"OK";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(122, 187);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox8->Size = System::Drawing::Size(126, 40);
			this->textBox8->TabIndex = 5;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightCyan;
			this->textBox4->Location = System::Drawing::Point(130, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(79, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"1";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::MintCream;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(6, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 20);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Параметр альфа";
			// 
			// gipertan
			// 
			this->gipertan->AutoSize = true;
			this->gipertan->Location = System::Drawing::Point(91, 39);
			this->gipertan->Name = L"gipertan";
			this->gipertan->Size = System::Drawing::Size(157, 17);
			this->gipertan->TabIndex = 2;
			this->gipertan->Text = L"Гиперболический тангенс";
			this->gipertan->UseVisualStyleBackColor = true;
			// 
			// log
			// 
			this->log->AutoSize = true;
			this->log->Checked = true;
			this->log->Location = System::Drawing::Point(91, 16);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(148, 17);
			this->log->TabIndex = 1;
			this->log->TabStop = true;
			this->log->Text = L"Логистическая функция";
			this->log->UseVisualStyleBackColor = true;
			this->log->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::MintCream;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Location = System::Drawing::Point(6, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Sigmoid type";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(6, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 22);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Параметр a";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(130, 71);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(79, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"1";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(6, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 20);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Параметр b";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(130, 108);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(79, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"1";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(171, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"до";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::LightCyan;
			this->textBox7->Location = System::Drawing::Point(204, 257);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 20);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(813, 443);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Padding = System::Windows::Forms::Padding(10);
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numeric1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
			   // n = System::Convert::ToInt32(numericUpDown1->Value);
				//textBox1->Text = Convert::ToString(n);
			
			 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
		 

private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
						
		 }
			 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
            
		 }
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }

		 array<Label^> ^lb;		
	     array<NumericUpDown^> ^tb;
		static bool f=1;
		MyNet *Net1;
		Net_BP *Net2;
		
		
		
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
			ls=new int[m];
		  for (Int32 i=0; i<m; i++)
			  ls[i]=System::Convert::ToInt32(tb[i]->Value);
		 }

private: void AddArray()
		 {
			 n = System::Convert::ToInt32(numericUpDown1->Value);
			 m = System::Convert::ToInt32(numericUpDown2->Value);
			lb = gcnew array<Label^>(m);
			tb= gcnew array<NumericUpDown^>(m);
			
			 for (int i=0; i<m; i++)
			{ 
				lb[i]=(gcnew System::Windows::Forms::Label());
				lb[i]->Location = Point(13, 94+i*25);
			    lb[i]->Size = System::Drawing::Size(84, 20);
			    lb[i]->BackColor = System::Drawing::Color::White;
			    lb[i]->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			    lb[i]->Text="Слой "+(i+1).ToString();
	
			
				tb[i] =gcnew System::Windows::Forms::NumericUpDown();
			    tb[i]->Location = Point(121, 94+i*25);
			    tb[i]->Size = System::Drawing::Size(40, 20);
			//	tb[i]->ValueChanged += gcnew System::EventHandler(this, &Form1::tb[i]_ValueChanged);
				
			
				groupBox1->Controls->Add(lb[i]);
				groupBox1->Controls->Add(tb[i]);

			 }
			 button2->Location = Point(13, 94+m*25);
			 button2->Size = System::Drawing::Size(84, 40);
			 groupBox1->Controls->Add(this->button2);
			 f=0;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 // = System::Convert::ToInt32(numericUpDown2->Value);
			 
			if(f==1)
			{
				 
				AddArray();
			}
			else
			{
          for (int i=0; i<m; i++)
		 {
		groupBox1->Controls->Remove(lb[i]);
		groupBox1->Controls->Remove(tb[i]);
		groupBox1->Controls->Remove(button2);
        // lb[i]->Dispose();
		 //tb[i]->Dispose();
		 }
		  f=1;
		  AddArray();
		
			}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 for (int i=0; i<m; i++)
		 {
		tb[i]->Value = 0;
		 }
		 }

		 

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
		   
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (gipertan->Checked)
				{
					groupBox3->Controls->Remove(label6);
					groupBox3->Controls->Remove(textBox4);
					groupBox3->Controls->Add(this->textBox5);
			        groupBox3->Controls->Add(this->label7);
					groupBox3->Controls->Add(this->textBox6);
			        groupBox3->Controls->Add(this->label8);
			    }
			 else
			 {
				    groupBox3->Controls->Remove(label8);
					groupBox3->Controls->Remove(textBox6);
				    groupBox3->Controls->Remove(label7);
					groupBox3->Controls->Remove(textBox5);
					groupBox3->Controls->Add(this->textBox4);
			        groupBox3->Controls->Add(this->label6);
					

			 }

		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox8->Clear();
			 textBox9->Clear();
		    Net1=new MyNet(n, m, ls); //сеть для прямого прохода
		   //Net1=&Net_ff;
		   
			bool type;
			if (log->Checked)   // переключатель типа активац. функции
				{
					type=0;
					double a;
					a=System::Convert::ToDouble(textBox4->Text);
					ParamAlfa(a);
			    }
			else
			{
				type=1;
				double ta, tb;
				ta=System::Convert::ToDouble(textBox5->Text);
				tb=System::Convert::ToDouble(textBox6->Text);
				ParamAB(ta, tb);
			}

			SigmType(type);
			if (checkBox1->Checked)
			{
				MyNet Net3(n, m, ls);
				//Net1->Get_vxod();
			  Net3.In_Weights();   // считать веса из файла
			  for (int i=0; i<m; i++)
				  for (int j=0; j<ls[i]; j++)
					  for (int k=0; k<Net1->L_Vhod_size(i)+1; k++)
			    textBox8->Text+=Net3.Ret_Weights(i, j, k)+"; ";
			  
			               
		// считать вход из textBox14

			  StreamWriter^ sw = gcnew StreamWriter("vector.txt");
			  sw->Write(textBox14->Text);
			  sw->Close();
			  Net3.In_Vector();
			  Net3.Def_Net();
			  for (int j=0; j<ls[m-1]; j++)
			  {
				textBox9->Text+=System::Convert::ToString(Net3.Vyxod(j))+ "; ";

			  }

			 // ==============
			}
			else
			{

               int w;
			   w=Net1->Num(m);
			   RandomGenerator Rand(w);
			   int* rand;
			   double left, right;
			   left=System::Convert::ToInt32(textBox2->Text);
			   right=System::Convert::ToInt32(textBox7->Text);
			  rand=Rand.GetRandom(left*100, right*100);
			   Net1->set_weights(rand);
			  // Net1->Get_vxod();
			}
			 Net2=new Net_BP(*Net1);
			// textBox15->Text=Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
			//separ=Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
			
		
			
			//textBox9->Clear();
			/*for (int j=0; j<ls[m-1];j++)
			{
				textBox9->Text+=System::Convert::ToString(Net1->Vyxod(j))+ "; ";

			}
*/
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox1->Checked)
				{
					textBox8->Enabled = true;
					groupBox2->Enabled = false;
					textBox9->Enabled = true;
					label10->Enabled = true;
					textBox2->Enabled = false;
					label3->Enabled = false;
			    }
			 else
			 {
				 textBox8->Enabled = false;
				 groupBox2->Enabled = true;
				 textBox9->Enabled = false;
				 label10->Enabled = false;
				 textBox2->Enabled = true;
				 label3->Enabled = true;
			 }
		 }



		 
 private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  double eta=System::Convert::ToDouble(textBox10->Text);
			  ParamEta(eta);
			  double miu=System::Convert::ToDouble(textBox11->Text);
			  ParamMiu(miu);
			 //Net2=new Net_BP(*Net1);
			 //Net2=&Net_bp;
			int primery, iter;
			
			if(textBox12->Text!="" && textBox13->Text!="")
	{   
				primery=System::Convert::ToInt32(textBox12->Text);
			    iter=System::Convert::ToInt32(textBox13->Text);
				Clear_Error();
         for (int t=0; t<iter; t++)
		 {
			 double Er=0, Error, Error_avg;
			for (int r=0; r<primery; r++)
	           {
		          Net1->Get_vxod(r, primery);  //считать вход
				  Net1->Def_Net();
				  Net2->BP_Update(*Net1);
				 // Net2=new Net_BP(*Net1);
		          Net2->Get_Obrazec(r, primery);//считать образец
		             //===== обучение				  
				  // Net2->BP_Update(*Net1);
                  Error=Net2->Error(); // ошибка за один пример
                  Net2->Calc_delta(); // считаем дельта
                  Net2->Calc_dw(); // считаем изменение весов (дельта w)
                  Net1->Plus_dw(*Net2); //увеличиваем веса Net1 на dw
				  Net1->Get_Weights(); // веса выводим в файл
                 // Net1->Def_Net(); 
				 // Net2->BP_Update(*Net1); //присваиваем скорректированные веса в Net2
                  Er=Er+Error;
	            }
			Error_avg=Er/primery;
            Out_Error(Error_avg); //вывод средней ошибки за эпоху в файл
			
		  }
		 //====выводим новые веса
		
		Process::Start("notepad.exe", "weights.txt");
		Process::Start("notepad.exe", "error.txt");

	   }
			else
			{
				textBox12->BackColor = System::Drawing::Color::Red;
			    textBox13->BackColor = System::Drawing::Color::Red;
			}
			
		 }
private: System::Void textBox8_Click(System::Object^  sender, System::EventArgs^  e) {

			 

		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {


		 }

private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
Clear_2();
	MyNet Net3(n, m, ls);		 		 
 int N;
 N=System::Convert::ToInt32(textBox3->Text);
 Net3.In_Weights();
 for (int i=0; i<N; i++)
 {
 Net3.FF_Vxod(i, N);
 Net3.Def_Net();
 Net3.FF_Vyxod();
 }
 Process::Start("notepad.exe", "2.txt");
		 }
};
}

