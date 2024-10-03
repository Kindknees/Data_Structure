#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ InToPo;

	private: System::Windows::Forms::Button^ InToPr;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ PrToPo;

	private: System::Windows::Forms::Button^ PrToIn;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Button^ PoToPr;

	private: System::Windows::Forms::Button^ PoToIn;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->InToPo = (gcnew System::Windows::Forms::Button());
			this->InToPr = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->PrToPo = (gcnew System::Windows::Forms::Button());
			this->PrToIn = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->PoToPr = (gcnew System::Windows::Forms::Button());
			this->PoToIn = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(10, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1162, 513);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->InToPo);
			this->tabPage1->Controls->Add(this->InToPr);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1154, 484);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Infix";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label4->Location = System::Drawing::Point(88, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Input Infix:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::Peru;
			this->label1->Location = System::Drawing::Point(428, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Operators:{+, -, *, /, ^, &, |}";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(14, 201);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(1126, 244);
			this->listBox1->TabIndex = 5;
			// 
			// InToPo
			// 
			this->InToPo->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->InToPo->Location = System::Drawing::Point(45, 157);
			this->InToPo->Name = L"InToPo";
			this->InToPo->Size = System::Drawing::Size(135, 33);
			this->InToPo->TabIndex = 4;
			this->InToPo->Text = L"Infix to Postfix";
			this->InToPo->UseVisualStyleBackColor = true;
			this->InToPo->Click += gcnew System::EventHandler(this, &Form1::InToPo_Click);
			// 
			// InToPr
			// 
			this->InToPr->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->InToPr->Location = System::Drawing::Point(45, 104);
			this->InToPr->Name = L"InToPr";
			this->InToPr->Size = System::Drawing::Size(135, 33);
			this->InToPr->TabIndex = 3;
			this->InToPr->Text = L"Infix to Prefix";
			this->InToPr->UseVisualStyleBackColor = true;
			this->InToPr->Click += gcnew System::EventHandler(this, &Form1::InToPr_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox3->Location = System::Drawing::Point(214, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(820, 31);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox2->Location = System::Drawing::Point(214, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(820, 31);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(214, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(820, 31);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->PrToPo);
			this->tabPage2->Controls->Add(this->PrToIn);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1154, 484);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Prefix";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label5->Location = System::Drawing::Point(79, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Input Prefix:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::Peru;
			this->label2->Location = System::Drawing::Point(427, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Operators:{+, -, *, /, ^, &, |}";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(14, 207);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(1126, 244);
			this->listBox2->TabIndex = 12;
			// 
			// PrToPo
			// 
			this->PrToPo->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->PrToPo->Location = System::Drawing::Point(37, 163);
			this->PrToPo->Name = L"PrToPo";
			this->PrToPo->Size = System::Drawing::Size(143, 33);
			this->PrToPo->TabIndex = 11;
			this->PrToPo->Text = L"Prefix to Postfix";
			this->PrToPo->UseVisualStyleBackColor = true;
			this->PrToPo->Click += gcnew System::EventHandler(this, &Form1::PrToPo_Click);
			// 
			// PrToIn
			// 
			this->PrToIn->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->PrToIn->Location = System::Drawing::Point(37, 107);
			this->PrToIn->Name = L"PrToIn";
			this->PrToIn->Size = System::Drawing::Size(143, 33);
			this->PrToIn->TabIndex = 10;
			this->PrToIn->Text = L"Prefix to Infix";
			this->PrToIn->UseVisualStyleBackColor = true;
			this->PrToIn->Click += gcnew System::EventHandler(this, &Form1::PrToIn_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox4->Location = System::Drawing::Point(214, 166);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(820, 31);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox5->Location = System::Drawing::Point(214, 113);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(820, 31);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox6->Location = System::Drawing::Point(214, 59);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(820, 31);
			this->textBox6->TabIndex = 7;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->listBox3);
			this->tabPage3->Controls->Add(this->PoToPr);
			this->tabPage3->Controls->Add(this->PoToIn);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1154, 484);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Postfix";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label6->Location = System::Drawing::Point(72, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Input Postfix:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::Peru;
			this->label3->Location = System::Drawing::Point(428, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 25);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Operators:{+, -, *, /, ^, &, |}";
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->HorizontalScrollbar = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(14, 206);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(1126, 244);
			this->listBox3->TabIndex = 20;
			// 
			// PoToPr
			// 
			this->PoToPr->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->PoToPr->Location = System::Drawing::Point(39, 163);
			this->PoToPr->Name = L"PoToPr";
			this->PoToPr->Size = System::Drawing::Size(141, 33);
			this->PoToPr->TabIndex = 19;
			this->PoToPr->Text = L"Postfix to Prefix";
			this->PoToPr->UseVisualStyleBackColor = true;
			this->PoToPr->Click += gcnew System::EventHandler(this, &Form1::PoToPr_Click);
			// 
			// PoToIn
			// 
			this->PoToIn->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->PoToIn->Location = System::Drawing::Point(39, 109);
			this->PoToIn->Name = L"PoToIn";
			this->PoToIn->Size = System::Drawing::Size(141, 33);
			this->PoToIn->TabIndex = 18;
			this->PoToIn->Text = L"Postfix to Infix";
			this->PoToIn->UseVisualStyleBackColor = true;
			this->PoToIn->Click += gcnew System::EventHandler(this, &Form1::PoToIn_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox7->Location = System::Drawing::Point(214, 165);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(820, 31);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox8->Location = System::Drawing::Point(214, 112);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(820, 31);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox9->Location = System::Drawing::Point(214, 58);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(820, 31);
			this->textBox9->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 527);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"111701031 黃浚瑀";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int operator_top = -1;
		int operand_top = -1;
		int priority_top = -1;
		array <System::String^>^ operand_stack;
		array <System::String^>^ operator_stack;
		int* priority_stack;

		bool isoperand(String^ s)
		{
			if ((s != "+") && (s != "-") && (s != "*") && (s != "/")
				&& (s != "(") && (s != ")") && (s != "&") && (s != "|")
				&& (s != "^") && (s != "#"))
				return true;
			return false;
		}

		int InStack(String^ s)	//進入堆疊後
		{
			if (s == "(")
				return 0;
			else if (s == "^")
				return 8;
			else if ((s == "*") || (s == "/") || (s == "%"))
				return 7;
			else if ((s == "+") || (s == "-"))
				return 6;
			else if (s == "#")
				return -1;
		}

		int OutStack(String^ s)	//在堆疊外面
		{
			if (s == "(")
				return 9;
			else if (s == "^")
				return 8;
			else if ((s == "*") || (s == "/") || (s == "%"))
				return 7;
			else if ((s == "+") || (s == "-"))
				return 6;
			else if (s == "#")
				return -1;
		}

		void push_operator(String^ s)
		{
			operator_stack[++operator_top] = s;
		}

		String^ pop_operator()
		{
			return operator_stack[operator_top--];
		}

		void push_operand(String^ s)
		{
			operand_stack[++operand_top] = s;
		}

		String^ pop_operand()
		{
			return operand_stack[operand_top--];
		}

		void push_priority(int n)
		{
			priority_stack[++priority_top] = n;
		}

		int pop_priority()
		{
			return priority_stack[priority_top--];
		}

	private: System::Void InToPr_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ input = textBox1->Text;
		String^ output = "";
		int size = input->Length;
		operand_stack = gcnew array <System::String^>(size);
		operator_stack = gcnew array <System::String^>(size);
		operand_top = -1;
		operator_top = -1;
		String^ s = "";
		String^ temp = "";
		String^ stack_output = "";
		int count = 0;
		push_operator("#");

		for (int i = 0; i < size; i++)
		{
			s = Convert::ToString(input[i]);
			if (isoperand(s))
				push_operand(s);
			else if (OutStack(s) > InStack(operator_stack[operator_top]))
					push_operator(s);
			else if (s == ")")
			{
				count = 0;
				temp = "";
				while (operator_stack[operator_top] != "(")
				{
					temp += operator_stack[operator_top--];
					count++;
				}
				operator_top--;
				for (int i =count + 1; i > 0; i--)
					temp += operand_stack[operand_top - i + 1];
				operand_top -= count + 1;
				push_operand(temp);	
			}
			else
			{
				count = 0;
				temp = "";
				while (OutStack(s) <= InStack(operator_stack[operator_top]) && operator_top > 0)
				{
					temp += pop_operator();
					for (int i = 1; i >= 0; i--)
						temp += operand_stack[operand_top - i];
					operand_top -= 2;
					push_operand(temp);
					temp = "";
				}
				push_operator(s);
			}
			stack_output = "";
			for (int i = 0; i <= operand_top; i++)
				stack_output += operand_stack[i] + "  ";
			listBox1->Items->Add("operand stack:" + stack_output);
			stack_output = "";
			for (int i = 0; i <= operator_top; i++)
				stack_output += operator_stack[i] + "  ";
			listBox1->Items->Add("operator stack:" + stack_output);
		}
		while (operator_top > 0)
		{
			temp = "";
			temp += pop_operator();
			for (int i = 1; i >= 0; i--)
				temp += operand_stack[operand_top-i];
			operand_top -= 2;
			push_operand(temp);
		}
		output = pop_operand();
		textBox2->Text = output;
		listBox1->Items->Add("------------------------------------");
		delete[] operand_stack;
		delete[] operator_stack;
	}
	private: System::Void InToPo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ input = textBox1->Text;
		String^ output = "";
		int size = input->Length;
		operand_stack = gcnew array <System::String^>(size);
		operator_stack = gcnew array <System::String^>(size);
		String^ s = "";
		String^ stack_output = "";
		operand_top = -1;
		operator_top = -1;
		push_operator("#");

		for (int i = 0; i < size; i++)
		{
			s = Convert::ToString(input[i]);
			if (isoperand(s))
				output += s;
			else
			{
				if (OutStack(s) > InStack(operator_stack[operator_top]))
					push_operator(s);
				else if (s == ")")
				{
					while (operator_stack[operator_top] != "(")
					{
						output += operator_stack[operator_top--];
					}
					operator_top--;
				}
				else
				{
					while (OutStack(s) <= InStack(operator_stack[operator_top]) && operator_top > 0)
					{
						output += pop_operator();
					}
					push_operator(s);
				}
			}
			stack_output = "";
			for (int i = 0; i <= operator_top; i++)
				stack_output += operator_stack[i] + "  ";
			listBox1->Items->Add("operator stack:" + stack_output);
		}
		while (operator_top != 0)
			output += pop_operator();
		
		textBox3->Text = output;
		listBox1->Items->Add("------------------------------------");
		delete[] operand_stack;
		delete[] operator_stack;
	}
private: System::Void PrToIn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ input = textBox6->Text;
	String^ output = "";
	int size = input->Length;
	operand_stack = gcnew array <System::String^>(size);
	operator_stack = gcnew array <System::String^>(size);
	priority_stack = new int[size];
	operand_top = -1;
	operator_top = -1;
	priority_top = -1;
	String^ s = "";
	String^ temp = "";
	String^ stack_output = "";
	int count = 0;
	push_operator("#");
	int first_number = 0, second_number = 0;
	String^ first = "";
	String^ second = "";

	for (int i = size - 1; i >= 0 ; i--)
	{
		s = Convert::ToString(input[i]);
		if (isoperand(s))
		{
			push_operand(s);
			push_priority(0);
		}
		else
		{
			temp = "";
			first = pop_operand();
			second = pop_operand();
			first_number = pop_priority();
			second_number = pop_priority();
			if (first_number < InStack(s) && first_number != 0)
				temp += "(" + first + ")";
			else
				temp += first;
			temp += s;
			if (second_number < InStack(s) && second_number != 0)
				temp += "(" + second + ")";
			else
				temp += second;

			push_operand(temp);
			push_priority(InStack(s));
		}
		stack_output = "";
		for (int i = 0; i <= operand_top; i++)
			stack_output += operand_stack[i] + "  ";
		listBox2->Items->Add("operand stack:" + stack_output);
		stack_output = "";
		for (int i = 0; i <= priority_top; i++)
			stack_output += priority_stack[i] + "  ";
		listBox2->Items->Add("priority stack:" + stack_output);
		
	}
	textBox5->Text = pop_operand();
	listBox2->Items->Add("------------------------------------");
	delete[] operand_stack;
	delete[] operator_stack;
	delete[] priority_stack;
}
private: System::Void PrToPo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ input = textBox6->Text;
	String^ output = "";
	int size = input->Length;
	operand_stack = gcnew array <System::String^>(size);
	operator_stack = gcnew array <System::String^>(size);
	operand_top = -1;
	operator_top = -1;
	String^ s = "";
	String^ temp = "";
	String^ stack_output = "";
	int count = 0;
	push_operator("#");

	for (int i = size - 1; i >= 0; i--)
	{
		s = Convert::ToString(input[i]);
		if (isoperand(s))
			push_operand(s);
		else
		{
			temp = "";
			temp += pop_operand();
			temp += pop_operand();
			temp += s;
			push_operand(temp);
		}
		stack_output = "";
		for (int i = 0; i <= operand_top; i++)
			stack_output += operand_stack[i] + "  ";
		listBox2->Items->Add("operand stack:" + stack_output);
	}
	textBox4->Text = pop_operand();
	listBox2->Items->Add("------------------------------------");
	delete[] operand_stack;
	delete[] operator_stack;
}
private: System::Void PoToIn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ input = textBox9->Text;
	String^ output = "";
	int size = input->Length;
	operand_stack = gcnew array <System::String^>(size);
	operator_stack = gcnew array <System::String^>(size);
	priority_stack = new int[size];
	operand_top = -1;
	operator_top = -1;
	priority_top = -1;
	String^ s = "";
	String^ temp = "";
	String^ stack_output = "";
	int count = 0;
	push_operator("#");
	int first_number = 0, second_number = 0;
	String^ first = "";
	String^ second = "";

	for (int i = 0; i < size; i++)
	{
		s = Convert::ToString(input[i]);
		if (isoperand(s))
		{
			push_operand(s);
			push_priority(0);
		}
		else
		{
			temp = "";
			second = pop_operand();
			first = pop_operand();
			second_number = pop_priority();
			first_number = pop_priority();
			if (first_number < InStack(s) && first_number != 0)
				temp += "(" + first + ")";
			else
				temp += first;
			temp += s;
			if (second_number < InStack(s) && second_number != 0)
				temp += "(" + second + ")";
			else
				temp += second;

			push_operand(temp);
			push_priority(InStack(s));
		}
		stack_output = "";
		for (int i = 0; i <= operand_top; i++)
			stack_output += operand_stack[i] + "  ";
		listBox3->Items->Add("operand stack:" + stack_output);
		stack_output = "";
		for (int i = 0; i <= priority_top; i++)
			stack_output += priority_stack[i] + "  ";
		listBox3->Items->Add("priority stack:" + stack_output);
	}
	textBox8->Text = pop_operand();
	listBox3->Items->Add("------------------------------------");
	delete[] operand_stack;
	delete[] operator_stack;
	delete[] priority_stack;
}
private: System::Void PoToPr_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ input = textBox9->Text;
	String^ output = "";
	int size = input->Length;
	operand_stack = gcnew array <System::String^>(size);
	operator_stack = gcnew array <System::String^>(size);
	operand_top = -1;
	operator_top = -1;
	String^ s = "";
	String^ temp = "";
	String^ stack_output = "";
	int count = 0;
	push_operator("#");

	for (int i = 0; i < size; i++)
	{
		s = Convert::ToString(input[i]);
		if (isoperand(s))
			push_operand(s);
		else
		{
			temp = "";
			temp += s;
			temp += operand_stack[operand_top - 1];
			temp += operand_stack[operand_top];
			operand_top -= 2;
			push_operand(temp);
		}
		stack_output = "";
		for (int i = 0; i <= operand_top; i++)
			stack_output += operand_stack[i] + "  ";
		listBox3->Items->Add("operand stack:" + stack_output);
	}
	textBox7->Text = pop_operand();
	listBox3->Items->Add("------------------------------------");
	delete[] operand_stack;
	delete[] operator_stack;
}
};
}
