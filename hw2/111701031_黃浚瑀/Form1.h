#pragma once
#include <algorithm>
using namespace std;
int** arr;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Magic spuare";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 25);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"square size:";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(42, 21);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(685, 327);
			this->listBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Direction: (for odd numbers)";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(12, 128);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(262, 147);
			this->panel1->TabIndex = 7;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(146, 113);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(100, 19);
			this->radioButton4->TabIndex = 10;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"right-bottom";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(146, 57);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(78, 19);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"right-top";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(35, 113);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(92, 19);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"left-bottom";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(35, 57);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 19);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"left-top";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"size為大於等於3之所有數字";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(280, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(784, 411);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(776, 382);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Fixed Space Memo";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(776, 382);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Fixed Space Memo check";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 17;
			this->listBox2->Location = System::Drawing::Point(46, 24);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(685, 327);
			this->listBox2->TabIndex = 4;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(776, 382);
			this->tabPage2->TabIndex = 3;
			this->tabPage2->Text = L"Data Grid View";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(746, 345);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(776, 382);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Data Grid View check";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(15, 19);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(746, 345);
			this->dataGridView2->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 444);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"111701031 黃浚瑀 HW2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void create_array(int n)
		{
			arr = new int* [n];
			//初始化二維陣列
			for (int i = 0; i < n; i++)
				arr[i] = new int[n];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
					arr[i][j] = 0;
			}
		}
		void odd_MagicSquare(int row, int col, int n, int row_plus, int col_plus)
		{
			for (int i = 2; i <= n*n; i++)
			{
				row = (row - 1 + n) % n;
				col = (col - 1 + n) % n;
				if (arr[row][col] != 0)
				{
					row = (row + 2) % n;
					col = (col + 1) % n;
				}
				arr[row][col] = i;
			}
			if (row_plus == 1)
			{
				for (int i = 0; i < n / 2; i++)
				{
					for (int j = 0; j < n; j++)
					{
						swap(arr[i][j], arr[n - 1 - i][j]);
					}
				}
			}
			if (col_plus == 1)
			{
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n / 2; j++)
					{
						swap(arr[i][j], arr[i][n - 1 -j]);
					}
				}
			}

		}

		void four_n_MagicSquare(int n)
		{
			int num = 1;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i % 4 == j % 4) || (j % 4 + i % 4 == 3))
					{
						arr[i][j] = n*n-num+1;
					}
					else
					{
						arr[i][j] = num;
					}
					num++;
				}
			}
		}
		
		void even_magic_square(int n)
		{
			int row = 0;
			int column = n / 2;
			int count;
			for (count = 1; count <= n * n; count++) {
				arr[row][column] = count;       
				arr[row + n][column + n] = count + n * n;   
				arr[row][column + n] = count + 2 * n * n;   
				arr[row + n][column] = count + 3 * n * n;   
				if (count % n == 0)
					row++;
				else {
					row = (row == 0) ? n - 1 : row - 1;
					column = (column == n - 1) ? 0 : column + 1;
				}
			}
		}

		void exchange(int n)	//for even magic square
		{
			int m = n / 4;
			int m1 = m - 1;

			int i, j;
			for (i = 0; i < n / 2; i++) {
				if (i != m) {
					for (j = 0; j < m; j++)      
						swap(arr[i][j], arr[n / 2 + i][j]);
					for (j = 0; j < m1; j++)        
						swap(arr[i][n - 1 - j], arr[n / 2 + i][n - 1 - j]);
				}
				else {                             
					for (j = 1; j <= m; j++)
						swap(arr[m][j], arr[n / 2 + m][j]);
					for (j = 0; j < m1; j++)
						swap(arr[m][n - 1 - j], arr[n / 2 + m][n - 1 - j]);
				}
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = System::Int32::Parse(textBox1->Text);
		create_array(n);

		int row = 0;
		int col = n/2;

		arr[row][col] = 1;
		int row_plus = -1;
		int col_plus = -1;
	
		if (radioButton1->Checked)
		{
			row_plus = -1;
			col_plus = -1;
		}
		else if (radioButton2->Checked)
		{
			row_plus = 1;
			col_plus = -1;
		}
		else if (radioButton3->Checked)
		{
			row_plus = -1;
			col_plus = 1;
		}
		else if (radioButton4->Checked)
		{
			row_plus = 1;
			col_plus = 1;
		}

		if (n < 3)
		{
			System::Windows::Forms::MessageBox::Show("數字必須大於3!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else if (n % 2 == 1)
			odd_MagicSquare(row, col, n, row_plus, col_plus);
		else if (n % 4 == 0)
			four_n_MagicSquare(n);
		else if (n % 2 == 0)
		{
			even_magic_square(n / 2);
			exchange(n);
		}

		String^ data_str = "";
		int block_len = (Convert::ToString(n * n)->Length) * 2 + 6;
		int blank_len = 0;
		int sum = 0;


		listBox1->Items->Add("n = " + n);
		listBox2->Items->Add("n = " + n);
		for (int i = 0; i < n; i++)
		{
			String^ s = "";
			sum = 0;
			for (int j = 0; j < n; j++)
			{
				data_str = Convert::ToString(arr[i][j]);
				blank_len = block_len - 2 * (data_str->Length);
				sum += arr[i][j];
				for (int k = 0; k < blank_len; k++)
					s += " ";
				s += data_str;
				
			}
			listBox1->Items->Add(s);
			blank_len = block_len - 2 * (Convert::ToString(sum)->Length);
			for (int j = 0; j < blank_len; j++)
				s += " ";
			listBox2->Items->Add(s + "-" + sum);
		}
		
		//在listbox2顯示行之加總
		String^ s = "";
		int sum_length;
		for (int i = 0; i < n; i++)
		{
			sum = 0;
			for (int j = 0; j < n; j++)
				sum += arr[j][i];
			sum_length = Convert::ToString(sum)->Length;
			blank_len = block_len - 2 * (sum_length) -1;
			for (int k = 0; k < blank_len + 1; k++)
				s += " ";
			s += "|";
			s += Convert::ToString(sum);
		}
		//在listbox2顯示左上到右下斜線加總
		sum = 0;
		for (int i = 0; i < n; i++)
			sum += arr[i][i];
		sum_length = Convert::ToString(sum)->Length;
		blank_len = block_len -  2 * (sum_length) - 2;
		for (int k = 0; k < blank_len; k++)
			s += " ";
		s += "\\";
		s += Convert::ToString(sum);
		//在listbox2顯示右上到左下斜線加總
		sum = 0;
		for (int i = 0; i < n; i++)
			sum += arr[i][n - i - 1];
		sum_length = Convert::ToString(sum)->Length;
		blank_len = block_len -  sum_length - 2;
		for (int k = 0; k < blank_len; k++)
			s += " ";
		s += "/";
		s += Convert::ToString(sum);
		listBox2->Items->Add(s);

		listBox1->Items->Add(" ");
		listBox2->Items->Add(" ");

		//show data grid view 1
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = arr[i][j];
			}
		}
		//show data grid view 2
			//列加總
		dataGridView2->RowCount = n + 1;
		dataGridView2->ColumnCount = n + 2;
		for (int i = 0; i < n; i++)
		{
			s = "";
			sum = 0;
			for (int j = 0; j < n; j++)
			{
				dataGridView2->Rows[i]->Cells[j]->Value = arr[i][j];
				sum += arr[i][j];
			}
			s += "- ";
			s += Convert::ToString(sum);
			dataGridView2->Rows[i]->Cells[n]->Value = s;
		}
			//行加總
		for (int i = 0; i < n; i++)
		{
			s = "";
			sum = 0;
			for (int j = 0; j < n; j++)
				sum += arr[j][i];
			s += "| ";
			s += Convert::ToString(sum);
			dataGridView2->Rows[n]->Cells[i]->Value = s;
		}
			//左上到右下加總
		sum = 0;
		s = "";
		for (int i = 0; i < n; i++)
			sum += arr[i][n - 1 - i];
		s += "\\ ";
		s += Convert::ToString(sum);
		dataGridView2->Rows[n]->Cells[n]->Value = s;
			//右上到左下加總
		sum = 0;
		s = "";
		for (int i = 0; i < n; i++)
			sum += arr[i][i];
		s += "/ ";
		s += Convert::ToString(sum);
		dataGridView2->Rows[n]->Cells[n + 1]->Value = s;
		//刪除動態陣列
		for (int i = 0; i < n; i++)
			delete[] arr[i];
		delete[] arr;
	}

};
}
