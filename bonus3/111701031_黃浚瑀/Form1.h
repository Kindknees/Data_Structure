#pragma once
#include<algorithm>

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(12, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Solve the n-queen problem";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(8, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"n =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(241, 25);
			this->textBox1->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(329, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(793, 583);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(785, 554);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Queen\'s position";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(7, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(766, 529);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(785, 554);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Queens in chess";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(9, 13);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(766, 529);
			this->listBox2->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(785, 554);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Queen in grid";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 11);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(777, 542);
			this->dataGridView1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(12, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(273, 66);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Solve and show in grid";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1134, 606);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int** board = nullptr;
		int n;
		int* stack, stack_n = 0;
		int count;	//計算有幾個解
		bool show_grid = false;

		void push(int x)	//將皇后的位置塞入stack中
		{
			stack[stack_n++] = x;
		}

		int pop()	//將皇后的位置從stack取出
		{
			return stack[--stack_n];
		}

		bool isvalid(int x)
		{
			// 檢查直線
			for (int i = 0; i < stack_n; i++)
			{
				if (board[i][x] == 1)
					return false;
			}

			// 檢查左上和右下斜線
			for (int i = 1; stack_n - i >= 0 && x - i >= 0; i++)
			{
				if (board[stack_n - i][x - i] == 1)
					return false;
			}
			for (int i = 1; stack_n + i < n && x + i < n; i++)
			{
				if (board[stack_n + i][x + i] == 1)
					return false;
			}

			// 檢查右上和左下斜線
			for (int i = 1; stack_n - i >= 0 && x + i < n; i++)
			{
				if (board[stack_n - i][x + i] == 1)
					return false;
			}
			for (int i = 1; stack_n + i < n && x - i >= 0; i++)
			{
				if (board[stack_n + i][x - i] == 1)
					return false;
			}

			return true;
		}

		void PrintResult()
		{
			//Queen's position
			count++;
			String^ str = "";
			for (int i = 0; i < n; i++)
			{
				str += (stack[i] + 1) + " ";
			}
			str += "[" + count + "]";
			listBox1->Items->Add(str);

			//Queen in chess
			int block_len = Convert::ToString(n * n)->Length + 2;
			// block_len 即存放那"固定欄寬"的長度, 目前設為比 n*n 數字的位數多2
			int blank_len = 0;
			str = "";
			String^ s = "";

			listBox2->Items->Add("-----solutions " + count + "-------");
			for (int i = 0; i < n; i++)
			{
				str = ""; 
				for (int j = 0; j < n; j++)
				{
					s = "";
					if (board[i][j] == 1)
						s = "Q";
					else
						s = "*";
					blank_len = block_len - s->Length;
					// 數字前的空格數 = 欄寬 - 數字的字元數
					for (int k = 0; k < blank_len; k++) s += " ";
					// 在 s 字串前先預放 blank_len 偌多的空格
					str += s;    // 將代表數字的字串, 接在 s 字串之後
				}
				listBox2->Items->Add(str);
			}

			//show in grid
			if (show_grid == true)
			{
				tabControl1->SelectTab(2);
				dataGridView1->RowCount = n;
				dataGridView1->ColumnCount = n;
				dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

				for (int i = 0; i < n; i++)
				{
					dataGridView1->Rows[i]->HeaderCell->Value = (i+1).ToString(); // Setting row headers text
					dataGridView1->Columns[i]->HeaderCell->Value = (i+1).ToString(); // Setting column headers text.
					for (int j = 0; j < n; j++)
					{
						if (board[i][j] == 1)
							dataGridView1->Rows[i]->Cells[j]->Value = "Q";
					}
				}
				str = "Solutions:#" + count;
				MessageBox::Show("Solutions:#" + count, n + "-Queen", MessageBoxButtons::OK, MessageBoxIcon::Information);
				dataGridView1->Rows->Clear();
			}
		}

		void find()
		{
			push(-1);
			while (stack_n != 0)
			{
				int location = pop();
				if (location >= 0)
					board[stack_n][location] = 0;	//將上一步還原，並前進下一格
				location++;
				int i = location;	//循環檢查每一列
				while (i < n)
				{
					if (isvalid(i))
					{
						board[stack_n][i] = 1;
						push(i);
						if (stack_n == n)
						{
							PrintResult();
							break;
						}
						i = 0;
						continue;
					}
					i++;
				}
				

			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//solve the problem
		count = 0;
		if (board != nullptr)
		{
			for (int i = 0; i < n; i++)
				delete[] board[i];
			delete[] board;
		}

		n = int::Parse(textBox1->Text);
		board = new int* [n];
		for (int i = 0; i < n; i++)
			board[i] = new int [n];
		stack = new int[n];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				board[i][j] = 0;
		}
		find();
		if (count == 0)
			listBox1->Items->Add("no result!");
		else
			listBox1->Items->Add("# Solutions=" + count + " for the " + n + "-Queen problem");
		delete[] stack;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//solve and show in grid

		show_grid = true;
		count = 0;
		if (board != nullptr)
		{
			for (int i = 0; i < n; i++)
				delete[] board[i];
			delete[] board;
		}

		n = int::Parse(textBox1->Text);
		board = new int* [n];
		for (int i = 0; i < n; i++)
			board[i] = new int[n];
		stack = new int[n];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				board[i][j] = 0;
		}
		find();
		if (count == 0)
			listBox1->Items->Add("no result!");
		else
			listBox1->Items->Add("# Solutions=" + count + " for the " + n + "-Queen problem");
		delete[] stack;
		show_grid = false;
	}
};
}
