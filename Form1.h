#pragma once

namespace ProjetoCLR {

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
	private: System::Windows::Forms::Button^ btnCalcular;
	protected:
	private: System::Windows::Forms::Label^ lblNome;
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ lblAnoDeNascimento;
	private: System::Windows::Forms::Label^ lblValor;
	private: System::Windows::Forms::TextBox^ txtNome;
	private: System::Windows::Forms::TextBox^ txtAno;
	private: System::Windows::Forms::TextBox^ txtValorBase;
	private: System::Windows::Forms::CheckBox^ chkDesconto10;
	private: System::Windows::Forms::CheckBox^ chkDesconto5;
	private: System::Windows::Forms::CheckBox^ chkAgravamento;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rdbSim;
	private: System::Windows::Forms::RadioButton^ rdbNao;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtTotal;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblAnoDeNascimento = (gcnew System::Windows::Forms::Label());
			this->lblValor = (gcnew System::Windows::Forms::Label());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->txtAno = (gcnew System::Windows::Forms::TextBox());
			this->txtValorBase = (gcnew System::Windows::Forms::TextBox());
			this->chkDesconto10 = (gcnew System::Windows::Forms::CheckBox());
			this->chkDesconto5 = (gcnew System::Windows::Forms::CheckBox());
			this->chkAgravamento = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rdbSim = (gcnew System::Windows::Forms::RadioButton());
			this->rdbNao = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCalcular
			// 
			this->btnCalcular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcular->Location = System::Drawing::Point(513, 509);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(125, 26);
			this->btnCalcular->TabIndex = 0;
			this->btnCalcular->Text = L"CALCULAR";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &Form1::btnCalcular_Click);
			// 
			// lblNome
			// 
			this->lblNome->AutoSize = true;
			this->lblNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNome->Location = System::Drawing::Point(80, 156);
			this->lblNome->Name = L"lblNome";
			this->lblNome->Size = System::Drawing::Size(52, 16);
			this->lblNome->TabIndex = 1;
			this->lblNome->Text = L"NOME";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(158, 43);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(480, 31);
			this->lblTitulo->TabIndex = 2;
			this->lblTitulo->Text = L"CÁLCULO DO VALOR DA AVENÇA";
			// 
			// lblAnoDeNascimento
			// 
			this->lblAnoDeNascimento->AutoSize = true;
			this->lblAnoDeNascimento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnoDeNascimento->Location = System::Drawing::Point(80, 191);
			this->lblAnoDeNascimento->Name = L"lblAnoDeNascimento";
			this->lblAnoDeNascimento->Size = System::Drawing::Size(168, 16);
			this->lblAnoDeNascimento->TabIndex = 1;
			this->lblAnoDeNascimento->Text = L"ANO DE NASCIMENTO";
			// 
			// lblValor
			// 
			this->lblValor->AutoSize = true;
			this->lblValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValor->Location = System::Drawing::Point(80, 226);
			this->lblValor->Name = L"lblValor";
			this->lblValor->Size = System::Drawing::Size(102, 16);
			this->lblValor->TabIndex = 1;
			this->lblValor->Text = L"VALOR BASE";
			// 
			// txtNome
			// 
			this->txtNome->Location = System::Drawing::Point(283, 156);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(250, 20);
			this->txtNome->TabIndex = 3;
			this->txtNome->Text = L"Shrek da Silva";
			// 
			// txtAno
			// 
			this->txtAno->Location = System::Drawing::Point(283, 188);
			this->txtAno->Name = L"txtAno";
			this->txtAno->Size = System::Drawing::Size(115, 20);
			this->txtAno->TabIndex = 3;
			this->txtAno->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtValorBase
			// 
			this->txtValorBase->Location = System::Drawing::Point(283, 219);
			this->txtValorBase->Name = L"txtValorBase";
			this->txtValorBase->Size = System::Drawing::Size(115, 20);
			this->txtValorBase->TabIndex = 3;
			this->txtValorBase->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// chkDesconto10
			// 
			this->chkDesconto10->AutoSize = true;
			this->chkDesconto10->Location = System::Drawing::Point(283, 279);
			this->chkDesconto10->Name = L"chkDesconto10";
			this->chkDesconto10->Size = System::Drawing::Size(163, 17);
			this->chkDesconto10->TabIndex = 4;
			this->chkDesconto10->Text = L"Desconto de Escalão\? (10%)";
			this->chkDesconto10->UseVisualStyleBackColor = true;
			// 
			// chkDesconto5
			// 
			this->chkDesconto5->AutoSize = true;
			this->chkDesconto5->Location = System::Drawing::Point(283, 315);
			this->chkDesconto5->Name = L"chkDesconto5";
			this->chkDesconto5->Size = System::Drawing::Size(140, 17);
			this->chkDesconto5->TabIndex = 4;
			this->chkDesconto5->Text = L"Desconto de Sócio (5%)";
			this->chkDesconto5->UseVisualStyleBackColor = true;
			// 
			// chkAgravamento
			// 
			this->chkAgravamento->AutoSize = true;
			this->chkAgravamento->Location = System::Drawing::Point(283, 354);
			this->chkAgravamento->Name = L"chkAgravamento";
			this->chkAgravamento->Size = System::Drawing::Size(168, 17);
			this->chkAgravamento->TabIndex = 4;
			this->chkAgravamento->Text = L"Tem agravamento\? (12 euros)";
			this->chkAgravamento->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 425);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Reside no Distrito\?";
			// 
			// rdbSim
			// 
			this->rdbSim->AutoSize = true;
			this->rdbSim->Location = System::Drawing::Point(283, 425);
			this->rdbSim->Name = L"rdbSim";
			this->rdbSim->Size = System::Drawing::Size(42, 17);
			this->rdbSim->TabIndex = 6;
			this->rdbSim->TabStop = true;
			this->rdbSim->Text = L"Sim";
			this->rdbSim->UseVisualStyleBackColor = true;
			// 
			// rdbNao
			// 
			this->rdbNao->AutoSize = true;
			this->rdbNao->Location = System::Drawing::Point(374, 425);
			this->rdbNao->Name = L"rdbNao";
			this->rdbNao->Size = System::Drawing::Size(45, 17);
			this->rdbNao->TabIndex = 6;
			this->rdbNao->TabStop = true;
			this->rdbNao->Text = L"Não";
			this->rdbNao->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(512, 425);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"CONCELHO";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Amares", L"Braga", L"Guimarães" });
			this->comboBox1->Location = System::Drawing::Point(628, 425);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(558, 156);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(187, 153);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// txtTotal
			// 
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotal->Location = System::Drawing::Point(675, 509);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(74, 26);
			this->txtTotal->TabIndex = 10;
			this->txtTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 603);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->rdbNao);
			this->Controls->Add(this->rdbSim);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chkAgravamento);
			this->Controls->Add(this->chkDesconto5);
			this->Controls->Add(this->chkDesconto10);
			this->Controls->Add(this->txtValorBase);
			this->Controls->Add(this->txtAno);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->lblValor);
			this->Controls->Add(this->lblAnoDeNascimento);
			this->Controls->Add(this->lblNome);
			this->Controls->Add(this->btnCalcular);
			this->Name = L"Form1";
			this->Text = L"Shreck";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) 

{
	//Adquirir o valor digitado no campo Valor Base
	int valorBase = Convert::ToInt16(txtValorBase->Text);

	//Acomulado
	int acomulado = valorBase;

	//Converter o valor do ano para um numero inteiro
	int ano = Convert::ToInt16(txtAno->Text);

	//Desconto de 10%
	double desconto_10 = 0.10;

	//Desconto de 5%
	double desconto_5 = 0.05;

	//Desconto do Distrito
	double descontoDistrito = 0.01;

	//	Desconto do Concelho de Amares
	double descontoConcelhoAmares = 0.20;

	//Desconto de escalão ativo




	double anoNascimento;
	try
	{
		double anoNascimento = Convert::ToDouble(txtAno->Text);
	}
	catch (...)
	{
		anoNascimento = -1;
		txtAno->Text = "Falta o Ano!";
		txtNome->Text = "ERRO";
	}
	


	//Se o ano for 2000 ou superior
	if (ano >= 2000)
	{
		acomulado = valorBase * desconto_10;
	}

	if (chkDesconto10->Checked)
	{
		acomulado = valorBase * desconto_10;
	}

	if (chkDesconto5->Checked)
	{
		acomulado = valorBase * desconto_5;
	}

	if (chkAgravamento->Checked)
	{
		acomulado = + 12;
	}

	txtTotal->Text = Convert::ToString(acomulado);
}
};
}
