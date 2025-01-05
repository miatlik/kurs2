#pragma once

namespace kurs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonplay;
	private: System::Windows::Forms::Button^ buttonrule;
	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonplay = (gcnew System::Windows::Forms::Button());
			this->buttonrule = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonplay
			// 
			this->buttonplay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonplay->Location = System::Drawing::Point(215, 271);
			this->buttonplay->Name = L"buttonplay";
			this->buttonplay->Size = System::Drawing::Size(282, 100);
			this->buttonplay->TabIndex = 0;
			this->buttonplay->Text = L"»√–ј“№";
			this->buttonplay->UseVisualStyleBackColor = true;
			this->buttonplay->Click += gcnew System::EventHandler(this, &MyForm::buttonplay_Click);
			// 
			// buttonrule
			// 
			this->buttonrule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonrule->Location = System::Drawing::Point(727, 271);
			this->buttonrule->Name = L"buttonrule";
			this->buttonrule->Size = System::Drawing::Size(282, 100);
			this->buttonrule->TabIndex = 1;
			this->buttonrule->Text = L"ѕ–ј¬»Ћј";
			this->buttonrule->UseVisualStyleBackColor = true;
			this->buttonrule->Click += gcnew System::EventHandler(this, &MyForm::buttonrule_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1293, 699);
			this->Controls->Add(this->buttonrule);
			this->Controls->Add(this->buttonplay);
			this->Location = System::Drawing::Point(367, 284);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void buttonrule_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Hello, world.");
	}
	private: System::Void buttonplay_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
