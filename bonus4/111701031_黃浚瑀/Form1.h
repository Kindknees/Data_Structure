#pragma once
#include<cstdlib>
#include<ctime>

struct node
{
	int coef, expo;
	node* next;
};

node* Ahead, *Alast;
node* Bhead, *Blast;

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
			Ahead = NewNode(-1, -1);	//開頭空白節點
			Bhead = NewNode(-1, -1);
			Ahead->next = Ahead;
			Bhead->next = Bhead;
			Alast = Ahead;
			Blast = Bhead;
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(16, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"new term in poly A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(16, 529);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(249, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(16, 475);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"C = A + B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(16, 418);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 39);
			this->button4->TabIndex = 3;
			this->button4->Text = L"random polys A and B";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(16, 159);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 39);
			this->button5->TabIndex = 4;
			this->button5->Text = L"new term in poly B";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(36, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"coeffficient:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(36, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"exponent:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 25);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 25);
			this->textBox2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(12, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Random setting";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(35, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"max exponent:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(35, 318);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"max range:(+/-)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(193, 272);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 25);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(212, 315);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(102, 25);
			this->textBox4->TabIndex = 13;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(6, 6);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(813, 514);
			this->listBox1->TabIndex = 14;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(342, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(808, 556);
			this->tabControl1->TabIndex = 15;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(800, 527);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Polynomial";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(800, 527);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Addition";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(6, 6);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(813, 514);
			this->listBox2->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(36, 364);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 22);
			this->label6->TabIndex = 16;
			this->label6->Text = L"generate n times:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(214, 367);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 25);
			this->textBox5->TabIndex = 17;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1162, 580);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		node* NewNode(int coef, int expo)
		{
			node* p = new node;
			p->coef = coef;
			p->expo = expo;
			p->next = nullptr;				
			return p;
		}

		void insert(node* p, node** head, node** last)	//將node插入list中
		{
			node* q = *head;
			if (*head == *last)
			{
				p->next = *head;
				(*head)->next = p;
				*last = p;
				return;
			}
			for (; q->next != *head && (p->expo > q->next->expo); q = q->next);
			if ((q->next != *head) && q->next->expo == p->expo)
			{
				q->next->coef += p->coef;
				free(p);
				return;
			}
			p->next = q->next;
			q->next = p;
			if (q == *last) 
				*last = p;
		}

		String^ print_poly(String^ name, node* head)
		{
			int count = 0;
			String^ str = "";
			node* p = head->next;

			str += name + ": ";
			for (; p != head; p = p->next)
			{
				if (count > 0)	//第一個數字不用加號
					str += "+";
				if (p->coef < 0)
					str += "(";
				str += p->coef;
				if (p->coef < 0)
					str += ")";

				if (p->expo != 0)
					str += "x^" + p->expo;

				count++;
			}
			return str;
			
		}

		void clear(node** head, node** last)
		{
			if (head == last)
				return;

			node* p = (*head)->next;
			while (p != *head)
			{
				(*head)->next = p->next;
				free(p);
				p = (*head)->next;
			}
			last = head;
		}

		int generate_random(int max)	//隨機產生正負數，用於coefficient
		{
			int sign = rand() % 2;
			if (sign == 0)
				return ((rand() % max) + 1);
			else
				return -1 * ((rand() % max) + 1);
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//new term in poly A

		int coef = int::Parse(textBox1->Text);
		int expo = int::Parse(textBox2->Text);

		node* p = NewNode(coef, expo);
		insert(p, &Ahead, &Alast);
		String^ str = print_poly("A", Ahead);
		listBox1->Items->Add(str);
		tabControl1->SelectTab(0);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//new term in poly B

		int coef = int::Parse(textBox1->Text);
		int expo = int::Parse(textBox2->Text);

		node* p = NewNode(coef, expo);
		insert(p, &Bhead, &Blast);
		String^ str = print_poly("B", Bhead);
		listBox1->Items->Add(str);
		tabControl1->SelectTab(0);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//clear
		clear(&Ahead, &Alast);
		clear(&Bhead, &Blast);
		listBox1->Items->Add("Clear successfuly!");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//random polys A and B

		tabControl1->SelectTab(0);
		srand(time(NULL));
		int max_expo = int::Parse(textBox3->Text);
		int max_range = int::Parse(textBox4->Text);
		int times = int::Parse(textBox5->Text);
		node* p;

		for (int i = 0; i < times; i++)
		{
			p = NewNode(generate_random(max_range), rand() % max_expo + 1);
			insert(p, &Ahead, &Alast);

			p = NewNode(generate_random(max_range), rand() % max_expo + 1);
			insert(p, &Bhead, &Blast);
		}

		listBox1->Items->Add(print_poly("A", Ahead));
		listBox1->Items->Add(print_poly("B", Bhead));
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//C = A + B
		String^ str = "";
		node* a, * b, **temp = nullptr;
		int coef, expo, count = 0;
		a = Ahead->next;
		b = Bhead->next;

		str = "C" + ": ";
			
		while ((a != Ahead) && (b != Bhead))
		{
			temp = nullptr;
			if (a->expo < b->expo)	//若a, b的expo不同，temp=小的那個
				temp = &a;
			else if (a->expo > b->expo)
				temp = &b;

			if (temp)	//a和b次方不同
			{
				if (count > 0)	//第一個數字不用顯示
					str += "+";

				if ((*temp)->coef < 0)
					str += "(";
				str += (*temp)->coef;
				if ((*temp)->coef < 0)
					str += ")";

				if ((*temp)->expo != 0)
					str += "x^" + (*temp)->expo;
				*temp = (*temp)->next;
				temp = nullptr;
			}
			else	//a和b的次方相同
			{
				coef = a->coef + b->coef;

				if (count > 0)	//第一個數字正號不用顯示
					str += "+";
				if (coef < 0)
					str += "(";
				str += coef;
				if (coef < 0)
					str += ")";

				if (a->expo != 0)
					str += "x^" + (a)->expo;
				a = a->next;
				b = b->next;
			}
			count++;
		}
		while (a != Ahead)
		{
			str += "+";
			if (a->coef < 0)
				str += "(";
			str += a->coef;
			if (a->coef < 0)
				str += ")";

			if (a->expo != 0)
				str += "x^" + a->expo;
			a = a->next;
		}
		while (b != Bhead)
		{
			str += "+";
			if (b->coef < 0)
				str += "(";
			str += b->coef;
			if (b->coef < 0)
				str += ")";

			if (b->expo != 0)
				str += "x^" + b->expo;
			b = b->next;
		}
		
		listBox2->Items->Add(print_poly("A", Ahead));
		listBox2->Items->Add(print_poly("B", Bhead));
		listBox2->Items->Add(str);
		listBox2->Items->Add("--------------------");
		tabControl1->SelectTab(1);
	}
};
}
