#pragma once
#include<stdlib.h>
#include<time.h>

struct step
{
	int x, y;
};

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label1->Location = System::Drawing::Point(21, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"n =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 25);
			this->textBox1->TabIndex = 1;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->checkBox1->Location = System::Drawing::Point(6, 24);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(132, 21);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"random position";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label3->Location = System::Drawing::Point(9, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"x =";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 27);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(155, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 27);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label4->Location = System::Drawing::Point(109, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"y =";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->button1->Location = System::Drawing::Point(10, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 50);
			this->button1->TabIndex = 8;
			this->button1->Text = L"knight tour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->button2->Location = System::Drawing::Point(10, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 50);
			this->button2->TabIndex = 9;
			this->button2->Text = L"knight tour animation";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(260, 18);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(928, 679);
			this->tabControl1->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(920, 650);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Tour in memo";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(898, 619);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(920, 650);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Tour in grid";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(10, 14);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(899, 635);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(920, 650);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Tour in animation";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(11, 10);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(899, 626);
			this->dataGridView2->TabIndex = 0;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(21, 504);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(162, 56);
			this->trackBar1->TabIndex = 11;
			this->trackBar1->Value = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label5->Location = System::Drawing::Point(18, 469);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"speed";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->groupBox1->Location = System::Drawing::Point(15, 78);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(212, 118);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Starting position";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label2->Location = System::Drawing::Point(153, 543);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"fast";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label6->Location = System::Drawing::Point(18, 543);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"slow";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->checkBox2->Location = System::Drawing::Point(15, 405);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(66, 21);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Color";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1201, 703);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int** board;
		step* queue;	//用於顯示動畫
		int front = 0, back = 0;

		void show_grid(int n)
		{
			dataGridView1->Rows->Clear();
			dataGridView1->Refresh();
			dataGridView1->RowCount = n + 1; // 要多加 1，不然他會IndexOutOfRange，可能是dataGridView本身的設定問題
			dataGridView1->ColumnCount = n;
			dataGridView1->ColumnHeadersVisible = false; // 隱藏columns
			dataGridView1->RowHeadersVisible = false; // 隱藏index
			dataGridView1->AllowUserToAddRows = false; // 去掉最後一行空白行

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = board[i][j];
				}
			}
		}

		void push(int x, int y)
		{
			step p = { x, y };
			queue[back++] = p;
		}

		step pop()
		{
			return queue[front++];
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//knight tour

		//initialization
		int n = Convert::ToInt64(textBox1->Text);
		int x, y;
		if (back != 0)
		{
			delete[] queue;
			front = 0, back = 0;
		}
		queue = new step[n * n];

		if (checkBox1->Checked)
		{
			srand(time(NULL));
			x = rand() % n;
			y = rand() % n;
		}
		else
		{
			x = Convert::ToInt64(textBox2->Text) - 1;
			y = Convert::ToInt64(textBox3->Text) - 1;
		}
		step start = { x+1, y+1 };
		board = new int* [n];
		for (int i = 0; i < n; i++)
			board[i] = new int[n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				board[i][j] = 0;
		}
		board[y][x] = 1;
		push(x, y);

		step move[8];
		move[0] = { -2, 1 };
		move[1] = { -1, 2 };
		move[2] = { 1, 2 };
		move[3] = { 2, 1 };
		move[4] = { 2, -1 };
		move[5] = { 1, -2 };
		move[6] = { -1, -2 };
		move[7] = { -2, -1 };

		
		int tx, ty, count = 0;
		step next_move[8] = {{ 0, 0 }};//檢查下一步是不是合法的
		int move_count[8] = { 0 };	//紀錄下一步還有多少個下一步
		int least;
		bool flag = true;

		//開始騎士巡迴
		for (int i = 2; i <= n*n; i++ )
		{
			//initialization
			for (int j = 0; j < 8; j++)
			{
				next_move[j] = { 0, 0 };
				move_count[j] = 0;
			}
			count = 0;

			//看下一步是不是合法的
			for (int j = 0; j < 8; j++)
			{
				tx = x + move[j].x;
				ty = y + move[j].y;
				if (tx < n && tx >= 0 && ty < n && ty >= 0 && board[ty][tx] == 0)
				{
					next_move[count] = { tx, ty };
					count++;
				}
			}

			//若無路可走了就結束
			if (count == 0)
			{
				flag = false;
				break;
			}

			//如果有找到下一步
			for (int j = 0; j < count; j++)
			{
				for (int i = 0; i < 8; i++)
				{
					tx = next_move[j].x + move[i].x;
					ty = next_move[j].y + move[i].y;
					if (tx < n && tx >= 0 && ty < n && ty >= 0 && board[ty][tx] == 0)
					{
						move_count[j]++;
					}
				}
			}

			//從中找出可走步數最少的
			least = 0;
			for (int i = 1; i < count; i++)
			{
				if (move_count[least] > move_count[i])
					least = i;
			}

			//移動騎士
			x = next_move[least].x;
			y = next_move[least].y;
			board[y][x] = i;
			push(x, y);
		}

		//輸出在listbox1
		if (flag)
			listBox1->Items->Add("(x, y) = (" + start.x + ", " + start.y + ")  O");
		else
			listBox1->Items->Add("(x, y) = (" + start.x + ", " + start.y + ")  X");
		String^ str = "", ^ data = "";
		int block_len = 12;
		int blank_len = 0;
		for (int i = 0; i < n; i++)
		{
			str = "";         // 清空字串 s
			for (int j = 0; j < n; j++)
			{
				data = Convert::ToString(board[i][j]);	//要填入的數字
				// 數字前的空格數 = 欄寬 - 數字的字元數
				blank_len = block_len - (data->Length)*2;
				// 在 s 字串前先預放 blank_len 偌多的空格
				for (int k = 0; k < blank_len; k++) 
					str += " ";
				str += data;    // 將代表數字的字串, 接在 s 字串之後
			}
			listBox1->Items->Add(str);
		}
		listBox1->Items->Add(" ");

		show_grid(n);

		//清空陣列
		for (int i = 0; i < n; i++)
			delete[] board[i];
		delete[] board;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = Convert::ToInt64(textBox1->Text);

		tabControl1->SelectedTab = tabPage3;
		dataGridView2->Rows->Clear();
		dataGridView2->Refresh();
		dataGridView2->RowCount = n + 1;
		dataGridView2->ColumnCount = n;
		dataGridView2->ColumnHeadersVisible = false;
		dataGridView2->RowHeadersVisible = false;
		dataGridView2->AllowUserToAddRows = false;

		float stop = (10 - trackBar1->Value) * 500;
		dataGridView2->FirstDisplayedScrollingColumnIndex = 0;
		step move;
		for (int i = 1; i <= back; i++)
		{
			move = pop();
			System::Threading::Thread::Sleep(stop);
			dataGridView2->Rows[move.y]->Cells[move.x]->Value = i;
			if (checkBox2->Checked)
				dataGridView2->Rows[move.y]->Cells[move.x]->Style->BackColor = Color::FromArgb(0, 200 - i * 0.5, 200 - i*0.5);
			dataGridView2->Refresh();
		}

		front = 0;
	}
};
}
