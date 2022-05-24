#pragma once
namespace ����������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();
			listBox1->SelectedIndex = 0;
			listBox2->SelectedIndex = 1;
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::WebBrowser^ webBrowser2;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->webBrowser2 = (gcnew System::Windows::Forms::WebBrowser());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(163) {
				L"RUB", L"EUR", L"AUD", L"AZN", L"ALL", L"DZD",
					L"XCD", L"AOA", L"ARS", L"AMD", L"AWG", L"AFN", L"BSD", L"BDT", L"BBD", L"BHD", L"BYR", L"BZD", L"XOF", L"BMD", L"BGN", L"BOB",
					L"BAM", L"BWP", L"BRL", L"BND", L"BIF", L"BTN", L"VUV", L"GBP", L"HUF", L"VEB", L"IDR", L"VND", L"XAF", L"HTG", L"GYD", L"GMD",
					L"GHC", L"GTQ", L"GNF", L"GIP", L"HNL", L"HKD", L"GEL", L"DKK", L"DJF", L"DOP", L"EGP", L"ZMK", L"ZWD", L"ILS", L"INR", L"JOD",
					L"IQD", L"IRR", L"ISK", L"YER", L"CVE", L"KZT", L"KYD", L"KHR", L"CAD", L"QAR", L"KES", L"CYP", L"KGS", L"CNY", L"KPW", L"COP",
					L"KMF", L"CDF", L"CRC", L"CUP", L"KWD", L"LAK", L"LVL", L"LSL", L"ZAR", L"LRD", L"LBP", L"LYD", L"LTL", L"CHF", L"MUR", L"MRO",
					L"MGA", L"MOP", L"MKD", L"MWK", L"MYR", L"MVR", L"MTL", L"MAD", L"XDR", L"MXN", L"MZN", L"MDL", L"MNT", L"MMK", L"NAD", L"NPR",
					L"NGN", L"ANG", L"NIO", L"NZD", L"NOK", L"AED", L"OMR", L"SHP", L"PKR", L"PAB", L"PGK", L"PYG", L"PEN", L"PLN", L"RWF", L"RON",
					L"WST", L"STD", L"SAR", L"SZL", L"SCR", L"CSD", L"SGD", L"SYP", L"SKK", L"SIT", L"SBD", L"SOS", L"SDD", L"SRD", L"USD", L"SLL",
					L"TJS", L"THB", L"TWD", L"TZS", L"TOP", L"TTD", L"TND", L"TMM", L"TRY", L"UGX", L"UZS", L"UAH", L"UYU", L"FJD", L"PHP", L"FKP",
					L"XPF", L"HRK", L"CZK", L"CLP", L"SEK", L"LKR", L"ERN", L"EEK", L"ETB", L"YUM", L"KRW", L"JMD", L"JPY"
			});
			this->listBox1->Location = System::Drawing::Point(34, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 96);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(163) {
				L"RUB", L"EUR", L"AUD", L"AZN", L"ALL", L"DZD",
					L"XCD", L"AOA", L"ARS", L"AMD", L"AWG", L"AFN", L"BSD", L"BDT", L"BBD", L"BHD", L"BYR", L"BZD", L"XOF", L"BMD", L"BGN", L"BOB",
					L"BAM", L"BWP", L"BRL", L"BND", L"BIF", L"BTN", L"VUV", L"GBP", L"HUF", L"VEB", L"IDR", L"VND", L"XAF", L"HTG", L"GYD", L"GMD",
					L"GHC", L"GTQ", L"GNF", L"GIP", L"HNL", L"HKD", L"GEL", L"DKK", L"DJF", L"DOP", L"EGP", L"ZMK", L"ZWD", L"ILS", L"INR", L"JOD",
					L"IQD", L"IRR", L"ISK", L"YER", L"CVE", L"KZT", L"KYD", L"KHR", L"CAD", L"QAR", L"KES", L"CYP", L"KGS", L"CNY", L"KPW", L"COP",
					L"KMF", L"CDF", L"CRC", L"CUP", L"KWD", L"LAK", L"LVL", L"LSL", L"ZAR", L"LRD", L"LBP", L"LYD", L"LTL", L"CHF", L"MUR", L"MRO",
					L"MGA", L"MOP", L"MKD", L"MWK", L"MYR", L"MVR", L"MTL", L"MAD", L"XDR", L"MXN", L"MZN", L"MDL", L"MNT", L"MMK", L"NAD", L"NPR",
					L"NGN", L"ANG", L"NIO", L"NZD", L"NOK", L"AED", L"OMR", L"SHP", L"PKR", L"PAB", L"PGK", L"PYG", L"PEN", L"PLN", L"RWF", L"RON",
					L"WST", L"STD", L"SAR", L"SZL", L"SCR", L"CSD", L"SGD", L"SYP", L"SKK", L"SIT", L"SBD", L"SOS", L"SDD", L"SRD", L"USD", L"SLL",
					L"TJS", L"THB", L"TWD", L"TZS", L"TOP", L"TTD", L"TND", L"TMM", L"TRY", L"UGX", L"UZS", L"UAH", L"UYU", L"FJD", L"PHP", L"FKP",
					L"XPF", L"HRK", L"CZK", L"CLP", L"SEK", L"LKR", L"ERN", L"EEK", L"ETB", L"YUM", L"KRW", L"JMD", L"JPY"
			});
			this->listBox2->Location = System::Drawing::Point(219, 12);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 96);
			this->listBox2->TabIndex = 4;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(127, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"���������� ������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleGreen;
			this->panel1->Location = System::Drawing::Point(229, 475);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(460, 47);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// webBrowser2
			// 
			this->webBrowser2->Location = System::Drawing::Point(12, 181);
			this->webBrowser2->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser2->Name = L"webBrowser2";
			this->webBrowser2->ScriptErrorsSuppressed = true;
			this->webBrowser2->ScrollBarsEnabled = false;
			this->webBrowser2->Size = System::Drawing::Size(894, 341);
			this->webBrowser2->TabIndex = 8;
			this->webBrowser2->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MyForm::webBrowser2_DocumentCompleted);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(12, 181);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(217, 341);
			this->panel2->TabIndex = 9;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(217, 291);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 100);
			this->panel5->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(689, 181);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(217, 341);
			this->panel3->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(787, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 39);
			this->button2->TabIndex = 14;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Location = System::Drawing::Point(229, 181);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(460, 193);
			this->panel4->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(140, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 39);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(197, 107);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(598, 57);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(308, 215);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(800, 475);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(106, 126);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(918, 601);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->webBrowser2);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"���� �����";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool chek_b() {
			if (textBox1->Text->Length == 0) return false;
			for (int i = 0; i < textBox1->Text->Length; i++) {
				if ((textBox1->Text[i] >= '0' && textBox1->Text[i] <= '9') || (textBox1->Text[i] ==',')) {}
				else return false;
			}
			return true; 
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
 private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		   }
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ f; String^ t;
	f = listBox1->SelectedItem->ToString();
	t = listBox2->SelectedItem->ToString();
	if (f == t) MessageBox::Show("������� ���� � �� �� ������");
	else {
		if (chek_b()) {

			webBrowser2->Navigate("https://www.google.ru/search?q=" + textBox1->Text + " " + f + " %D0%B2 " + t);
		}
		else MessageBox::Show("������ �����");
	}
}



private: System::Void webBrowser2_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->Enabled == false) {
			richTextBox1->Enabled = true;
			richTextBox1->Visible = true;
			richTextBox1->Text = "������:\nAUD �������������  ������\nEUR  ����\nAZN  ��������������� �����\nALL	���\nDZD	��������� �����\nXCD	�������� - ��������� ������\nAOA	������\nARS	������������ ����\nAMD	��������� ����\nAWG	���������� �������\nAFN	������\nBSD	��������� ������\nBDT	����\nBBD	������������ ������\nBHD	����������� �����\nBYR	����������� �����\nBZD	��������� ������\nXOF	����� ��� �����(�������� ������� ������������ ����� ���������� �������� ������)\nBMD	���������� ������\nBGN	���\nBOB	���������\nBAM	�������������� �����\nBWP	����\nBRL	����������� ����\nBND	���������� ������\nBIF	������������ �����\nBTN	��������\nVUV	����\nGBP	���� ����������\nHUF	������\nVEB	�������\nIDR	�����\nVND	����\nXAF	����� ��� ����(�������� ������� ����� ���������� ����������� ������)\nHTG	����\nGYD	��������� ������\nGMD	������\nGHC	����\nGTQ	�������\nGNF	���������� �����\nGIP	������������� ����\nHNL	�������\nHKD	����������� ������\nGEL	����\nDKK	������� �����\nDJF	����� �������\nDOP	������������� ����\nEGP	���������� ����\nZMK	�����(����������)\nZWD	������ ��������\nILS	����� ����������� ������\nINR	��������� �����\nJOD	���������� �����\nIQD	�������� �����\nIRR	�������� ����\nISK	���������� �����\nYER	��������� ����\nCVE	������ ���� - �����\nKZT	�����\nKYD	������ ���������� ��������\nKHR	�����\nCAD	��������� ������\nQAR	��������� ����\nKES	��������� �������\nCYP	�������� ����\nKGS	���\nCNY	���� ����������\nKPW	������ - ��������� ����\nCOP	������������ ����\nKMF	����� ��������� ��������\nCDF	������������ �����\nCRC	�������������� �����\nCUP	��������� ����\nKWD	���������� �����\nLAK	���\nLVL	���������� ���\nLSL	����\nZAR	����\nLRD	����������� ������\nLBP	��������� ����\nLYD	��������� �����\nLTL	��������� ���\nCHF	����������� �����\nMUR	������������ �����\nMRO	����\nMGA	������������� �����\nMOP	������\nMKD	�����\nMWK	�����\nMYR	������������ �������\nMVR	�����\nMTL	����������� ����\nMAD	������������ ������\nXDR	���(����������� ����� �������������)\nMXN	������������ ����\nMZN	�������\nMDL	���������� ���\nMNT	������\nMMK	����\nNAD	������ �������\nNPR	���������� �����\nNGN	�����\nANG	������������� ���������� �������\nNIO	������� �������\nNZD	�������������� ������\nNOK	���������� �����\nAED	������(���)\nOMR	�������� ����\nSHP	���� ������� ������ �����\nPKR	������������ �����\nPAB	�������\nPGK	����\nPYG	�������\nPEN	����� ����\nPLN	������\nRUB	���������� �����\nRWF	����� ������\nRON	���\nWST	����\nSTD	�����\nSAR	���������� ����\nSZL	���������\nSCR	����������� �����\nCSD	�������� �����\nSGD	������������ ������\nSYP	��������� ����\nSKK	��������� �����\nSIT	�����\nSBD	������ ����������� ��������\nSOS	����������� �������\nSDD	��������� �����\nSRD	����������� ������\nUSD	������ ���\nSLL	�����\nTJS	������\nTHB	���\nTWD	����������� ������\nTZS	������������ �������\nTOP	������\nTTD	������ ��������� � ������\nTND	��������� �����\nTMM	�����\nTRY	�������� ����\nUGX	����������� �������\nUZS	��������� ���\nUAH	������\nUYU	����������� ����\nFJD	������ �����\nPHP	������������ ����\nFKP	���� ������������ ��������\nXPF	����� ���\nHRK	����\nCZK	������� �����\nCLP	��������� ����\nSEK	�������� �����\nLKR	��� - ���������� �����\nERN	�����\nEEK	��������� �����\nETB	��������� ���\nYUM	����������� �����\nKRW	����\nJMD	�������� ������\nJPY	����";
		}
		else {
			richTextBox1->Enabled = false;
			richTextBox1->Visible = false;
		}
	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
