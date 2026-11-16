#pragma once

namespace Task2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView_func;
	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_func;

	private: System::Windows::Forms::PictureBox^ picture_func;

	private: System::Windows::Forms::Label^ label_func;




	private: System::Windows::Forms::Label^ label_q;



	private: System::Windows::Forms::TextBox^ textBox_q;
	private: System::Windows::Forms::Button^ button_clear;

	private: System::Windows::Forms::Button^ button_calculate;


	private: System::Windows::Forms::TextBox^ textBox_xn;

	private: System::Windows::Forms::TextBox^ textBox_xk;

	private: System::Windows::Forms::Label^ label_xn;
	private: System::Windows::Forms::Label^ label_xk;
	private: System::Windows::Forms::Label^ label_dx;
	private: System::Windows::Forms::TextBox^ textBox_dx;
	private: System::Windows::Forms::Label^ label_z;
	private: System::Windows::Forms::TextBox^ textBox_z;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ розрахунокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ розрахунокToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCalc;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonClear;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonExit;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ розрахуватиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;


	private: System::ComponentModel::IContainer^ components;

























	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView_func = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->розрахуватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart_func = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->picture_func = (gcnew System::Windows::Forms::PictureBox());
			this->label_func = (gcnew System::Windows::Forms::Label());
			this->label_q = (gcnew System::Windows::Forms::Label());
			this->textBox_q = (gcnew System::Windows::Forms::TextBox());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->textBox_xn = (gcnew System::Windows::Forms::TextBox());
			this->textBox_xk = (gcnew System::Windows::Forms::TextBox());
			this->label_xn = (gcnew System::Windows::Forms::Label());
			this->label_xk = (gcnew System::Windows::Forms::Label());
			this->label_dx = (gcnew System::Windows::Forms::Label());
			this->textBox_dx = (gcnew System::Windows::Forms::TextBox());
			this->label_z = (gcnew System::Windows::Forms::Label());
			this->textBox_z = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->розрахунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розрахунокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonCalc = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonClear = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonExit = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_func))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_func))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_func))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView_func
			// 
			this->dataGridView_func->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView_func->BackgroundColor = System::Drawing::Color::LightGray;
			this->dataGridView_func->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView_func->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_func->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->num,
					this->X, this->Y
			});
			this->dataGridView_func->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView_func->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView_func->Location = System::Drawing::Point(12, 250);
			this->dataGridView_func->MaximumSize = System::Drawing::Size(360, 305);
			this->dataGridView_func->MinimumSize = System::Drawing::Size(240, 205);
			this->dataGridView_func->Name = L"dataGridView_func";
			this->dataGridView_func->RowHeadersWidth = 51;
			this->dataGridView_func->RowTemplate->Height = 24;
			this->dataGridView_func->Size = System::Drawing::Size(240, 205);
			this->dataGridView_func->TabIndex = 0;
			// 
			// num
			// 
			this->num->Frozen = true;
			this->num->HeaderText = L"№";
			this->num->MinimumWidth = 6;
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			this->num->Width = 55;
			// 
			// X
			// 
			this->X->Frozen = true;
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->Width = 60;
			// 
			// Y
			// 
			this->Y->HeaderText = L"Y";
			this->Y->MinimumWidth = 6;
			this->Y->Name = L"Y";
			this->Y->Width = 60;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->розрахуватиToolStripMenuItem,
					this->очиститиToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(165, 52);
			// 
			// розрахуватиToolStripMenuItem
			// 
			this->розрахуватиToolStripMenuItem->Name = L"розрахуватиToolStripMenuItem";
			this->розрахуватиToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->розрахуватиToolStripMenuItem->Text = L"Розрахувати";
			this->розрахуватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::розрахуватиToolStripMenuItem_Click);
			// 
			// очиститиToolStripMenuItem1
			// 
			this->очиститиToolStripMenuItem1->Name = L"очиститиToolStripMenuItem1";
			this->очиститиToolStripMenuItem1->Size = System::Drawing::Size(164, 24);
			this->очиститиToolStripMenuItem1->Text = L"Очистити";
			this->очиститиToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem1_Click);
			// 
			// chart_func
			// 
			this->chart_func->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart_func->BackColor = System::Drawing::Color::Transparent;
			this->chart_func->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart_func->ChartAreas->Add(chartArea1);
			this->chart_func->Location = System::Drawing::Point(270, 239);
			this->chart_func->Name = L"chart_func";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series1->Name = L"Series1";
			this->chart_func->Series->Add(series1);
			this->chart_func->Size = System::Drawing::Size(300, 205);
			this->chart_func->TabIndex = 1;
			this->chart_func->Text = L"chart1";
			// 
			// picture_func
			// 
			this->picture_func->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->picture_func->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_func.Image")));
			this->picture_func->Location = System::Drawing::Point(244, 82);
			this->picture_func->Name = L"picture_func";
			this->picture_func->Size = System::Drawing::Size(247, 53);
			this->picture_func->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picture_func->TabIndex = 2;
			this->picture_func->TabStop = false;
			// 
			// label_func
			// 
			this->label_func->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_func->AutoSize = true;
			this->label_func->Location = System::Drawing::Point(387, 63);
			this->label_func->Name = L"label_func";
			this->label_func->Size = System::Drawing::Size(59, 16);
			this->label_func->TabIndex = 3;
			this->label_func->Text = L"Функція";
			// 
			// label_q
			// 
			this->label_q->AutoSize = true;
			this->label_q->Location = System::Drawing::Point(13, 85);
			this->label_q->Name = L"label_q";
			this->label_q->Size = System::Drawing::Size(17, 16);
			this->label_q->TabIndex = 5;
			this->label_q->Text = L"Q";
			// 
			// textBox_q
			// 
			this->textBox_q->Location = System::Drawing::Point(45, 82);
			this->textBox_q->Name = L"textBox_q";
			this->textBox_q->Size = System::Drawing::Size(100, 22);
			this->textBox_q->TabIndex = 7;
			// 
			// button_clear
			// 
			this->button_clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_clear->Location = System::Drawing::Point(233, 198);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(116, 35);
			this->button_clear->TabIndex = 8;
			this->button_clear->Text = L"Очистити";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// button_calculate
			// 
			this->button_calculate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_calculate->Location = System::Drawing::Point(233, 155);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(116, 37);
			this->button_calculate->TabIndex = 9;
			this->button_calculate->Text = L"Порахувати";
			this->button_calculate->UseVisualStyleBackColor = true;
			this->button_calculate->Click += gcnew System::EventHandler(this, &MyForm::button_calculate_Click);
			// 
			// textBox_xn
			// 
			this->textBox_xn->Location = System::Drawing::Point(45, 150);
			this->textBox_xn->Name = L"textBox_xn";
			this->textBox_xn->Size = System::Drawing::Size(100, 22);
			this->textBox_xn->TabIndex = 10;
			// 
			// textBox_xk
			// 
			this->textBox_xk->Location = System::Drawing::Point(45, 178);
			this->textBox_xk->Name = L"textBox_xk";
			this->textBox_xk->Size = System::Drawing::Size(100, 22);
			this->textBox_xk->TabIndex = 11;
			// 
			// label_xn
			// 
			this->label_xn->AutoSize = true;
			this->label_xn->Location = System::Drawing::Point(17, 153);
			this->label_xn->Name = L"label_xn";
			this->label_xn->Size = System::Drawing::Size(20, 16);
			this->label_xn->TabIndex = 12;
			this->label_xn->Text = L"xn";
			// 
			// label_xk
			// 
			this->label_xk->AutoSize = true;
			this->label_xk->Location = System::Drawing::Point(17, 181);
			this->label_xk->Name = L"label_xk";
			this->label_xk->Size = System::Drawing::Size(20, 16);
			this->label_xk->TabIndex = 13;
			this->label_xk->Text = L"xk";
			// 
			// label_dx
			// 
			this->label_dx->AutoSize = true;
			this->label_dx->Location = System::Drawing::Point(17, 209);
			this->label_dx->Name = L"label_dx";
			this->label_dx->Size = System::Drawing::Size(21, 16);
			this->label_dx->TabIndex = 14;
			this->label_dx->Text = L"dx";
			// 
			// textBox_dx
			// 
			this->textBox_dx->Location = System::Drawing::Point(45, 206);
			this->textBox_dx->Name = L"textBox_dx";
			this->textBox_dx->Size = System::Drawing::Size(100, 22);
			this->textBox_dx->TabIndex = 15;
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(17, 113);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(13, 16);
			this->label_z->TabIndex = 16;
			this->label_z->Text = L"z";
			// 
			// textBox_z
			// 
			this->textBox_z->Location = System::Drawing::Point(45, 110);
			this->textBox_z->Name = L"textBox_z";
			this->textBox_z->Size = System::Drawing::Size(100, 22);
			this->textBox_z->TabIndex = 17;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->розрахунокToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 28);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// розрахунокToolStripMenuItem
			// 
			this->розрахунокToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->очиститиToolStripMenuItem,
					this->розрахунокToolStripMenuItem1, this->вихідToolStripMenuItem
			});
			this->розрахунокToolStripMenuItem->Name = L"розрахунокToolStripMenuItem";
			this->розрахунокToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->розрахунокToolStripMenuItem->Text = L"Розрахунок";
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"очиститиToolStripMenuItem.Image")));
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + D";
			this->очиститиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->очиститиToolStripMenuItem->Text = L"Очистити";
			this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem_Click);
			// 
			// розрахунокToolStripMenuItem1
			// 
			this->розрахунокToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"розрахунокToolStripMenuItem1.Image")));
			this->розрахунокToolStripMenuItem1->Name = L"розрахунокToolStripMenuItem1";
			this->розрахунокToolStripMenuItem1->ShortcutKeyDisplayString = L"Ctrl + R";
			this->розрахунокToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->розрахунокToolStripMenuItem1->Size = System::Drawing::Size(231, 26);
			this->розрахунокToolStripMenuItem1->Text = L"Розрахунок";
			this->розрахунокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::розрахунокToolStripMenuItem1_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + Q";
			this->вихідToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripButtonCalc,
					this->toolStripButtonClear, this->toolStripButtonExit, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(582, 27);
			this->toolStrip1->TabIndex = 19;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// toolStripButtonCalc
			// 
			this->toolStripButtonCalc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCalc.Image")));
			this->toolStripButtonCalc->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCalc->Name = L"toolStripButtonCalc";
			this->toolStripButtonCalc->Size = System::Drawing::Size(119, 24);
			this->toolStripButtonCalc->Text = L"Розрахувати";
			this->toolStripButtonCalc->Click += gcnew System::EventHandler(this, &MyForm::toolStripButtonCalc_Click);
			// 
			// toolStripButtonClear
			// 
			this->toolStripButtonClear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonClear.Image")));
			this->toolStripButtonClear->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonClear->Name = L"toolStripButtonClear";
			this->toolStripButtonClear->Size = System::Drawing::Size(98, 24);
			this->toolStripButtonClear->Text = L"Очистити";
			this->toolStripButtonClear->Click += gcnew System::EventHandler(this, &MyForm::toolStripButtonClear_Click);
			// 
			// toolStripButtonExit
			// 
			this->toolStripButtonExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonExit.Image")));
			this->toolStripButtonExit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonExit->Name = L"toolStripButtonExit";
			this->toolStripButtonExit->Size = System::Drawing::Size(70, 24);
			this->toolStripButtonExit->Text = L"Вихід";
			this->toolStripButtonExit->Click += gcnew System::EventHandler(this, &MyForm::toolStripButtonExit_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(143, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(582, 453);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox_z);
			this->Controls->Add(this->label_z);
			this->Controls->Add(this->textBox_dx);
			this->Controls->Add(this->label_dx);
			this->Controls->Add(this->label_xk);
			this->Controls->Add(this->label_xn);
			this->Controls->Add(this->textBox_xk);
			this->Controls->Add(this->textBox_xn);
			this->Controls->Add(this->button_calculate);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->textBox_q);
			this->Controls->Add(this->label_q);
			this->Controls->Add(this->label_func);
			this->Controls->Add(this->picture_func);
			this->Controls->Add(this->chart_func);
			this->Controls->Add(this->dataGridView_func);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(700, 600);
			this->MinimumSize = System::Drawing::Size(600, 500);
			this->Name = L"MyForm";
			this->Text = L"Булка Андрій ІПЗ-25";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_func))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_func))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_func))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView_func->RowHeadersVisible = false;
	}
	
	private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculate();
	}
	private: System::Void button_clear_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Clear();
	}
	private: System::Void очиститиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Clear();
	}
	private: System::Void розрахунокToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculate();
	}
	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void toolStripButtonCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculate();
	}
	private: System::Void toolStripButtonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		Clear();
	}
	private: System::Void toolStripButtonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void розрахуватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculate();
	}
	private: System::Void очиститиToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Clear();
	}
	private: void Calculate() {
		try {
			dataGridView_func->Rows->Clear();
			chart_func->Series[0]->Points->Clear();

			double z = Convert::ToDouble(textBox_z->Text);
			double q = Convert::ToDouble(textBox_q->Text);
			double xn = Convert::ToDouble(textBox_xn->Text);
			double xk = Convert::ToDouble(textBox_xk->Text);
			double dx = Convert::ToDouble(textBox_dx->Text);

			if (xn > xk || dx <= 0) {
				System::Windows::Forms::MessageBox::Show("Введіть коректні значення (xn <= xk та dx > 0).", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			int rowNum = 1;
			for (double x = xn; x <= xk; x += dx) {
				double currentX = Math::Round(x, 6);

				if (currentX > q) {
					if (currentX <= 0) {
						dataGridView_func->Rows->Add(rowNum++, currentX.ToString("F4"), "x <= 0 (ln не існує)");
					}
					else {
						double lnVal = Math::Log(currentX);
						double y = (lnVal < 0) ? -Math::Pow(-lnVal, 1.0 / 3.0) : Math::Pow(lnVal, 1.0 / 3.0);

						dataGridView_func->Rows->Add(rowNum++, currentX.ToString("F4"), y.ToString("F4"));
						chart_func->Series[0]->Points->AddXY(currentX, y);
					}
				}
				else {
					if (currentX < -1.0 || currentX > 1.0) {
						dataGridView_func->Rows->Add(rowNum++, currentX.ToString("F4"), "|x| > 1 (arccos не існує)");
					}
					else {
						double y = z * Math::Acos(currentX);

						dataGridView_func->Rows->Add(rowNum++, currentX.ToString("F4"), y.ToString("F4"));
						chart_func->Series[0]->Points->AddXY(currentX, y);
					}
				}
			}
		}
		catch (System::Exception^ ex) {
			System::Windows::Forms::MessageBox::Show("Помилка: Введіть коректні значення.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: void Clear() {
		textBox_z->Clear();
		textBox_q->Clear();
		textBox_xn->Clear();
		textBox_xk->Clear();
		textBox_dx->Clear();
		dataGridView_func->Rows->Clear();
		chart_func->Series[0]->Points->Clear();
	}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {}
};
}
