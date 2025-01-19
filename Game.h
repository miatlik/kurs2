#pragma once
#include <cstdlib> 
#include <ctime>  
#include <vector>
namespace kurs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			numbers = gcnew List<int>();
			InitializeLabels(); // Инициализация меток
			sumophide = 0; // Инициализация суммы противника без первой карты
			sumopopen = 0; // Инициализация суммы противника с первой картой
			sumpl = 0; // Инициализация суммы игрока
			fop = 1;//инициализация флажка паса противника
			fp = 1;//инициализация флажка паса игрока
			vivodrez();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		List<int>^ numbers;
		array<Button^>^ labels; // Массив меток для отображения чисел
	private: System::Windows::Forms::Button^ button_brat;
	private: System::Windows::Forms::Button^ button_pas;

	int currentLabelIndex; // Индекс текущей метки для обновления
	private: int sumophide; // Сумма противника без первой карты
	private: int sumopopen; // Сумма противника с первой картой
	private: int sumpl; // Сумма игрока
	private: int fop;// флажок паса противника
	private: int fp;// флажок паса игрока
	private: String^ kartiplstr;
	private: String^ kartiopstr;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_rule;
	private: System::Windows::Forms::Label^ label2;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->button_brat = (gcnew System::Windows::Forms::Button());
			this->button_pas = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_rule = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_brat
			// 
			this->button_brat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_brat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_brat->Location = System::Drawing::Point(12, 648);
			this->button_brat->Name = L"button_brat";
			this->button_brat->Size = System::Drawing::Size(120, 47);
			this->button_brat->TabIndex = 12;
			this->button_brat->Text = L"Взять карту";
			this->button_brat->UseVisualStyleBackColor = true;
			this->button_brat->Click += gcnew System::EventHandler(this, &Game::button_brat_Click);
			// 
			// button_pas
			// 
			this->button_pas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_pas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pas->Location = System::Drawing::Point(215, 648);
			this->button_pas->Name = L"button_pas";
			this->button_pas->Size = System::Drawing::Size(120, 47);
			this->button_pas->TabIndex = 13;
			this->button_pas->Text = L"Спасовать";
			this->button_pas->UseVisualStyleBackColor = true;
			this->button_pas->Click += gcnew System::EventHandler(this, &Game::button_pas_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1165, 390);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 32);
			this->label1->TabIndex = 14;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1165, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 32);
			this->label2->TabIndex = 15;
			this->label2->Text = L"label2";
			// 
			// button_exit
			// 
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->Location = System::Drawing::Point(1293, 648);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(90, 47);
			this->button_exit->TabIndex = 16;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &Game::button_exit_Click);
			// 
			// button_rule
			// 
			this->button_rule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_rule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_rule->Location = System::Drawing::Point(1163, 648);
			this->button_rule->Name = L"button_rule";
			this->button_rule->Size = System::Drawing::Size(90, 47);
			this->button_rule->TabIndex = 17;
			this->button_rule->Text = L"Правила";
			this->button_rule->UseVisualStyleBackColor = true;
			this->button_rule->Click += gcnew System::EventHandler(this, &Game::button_rule_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1682, 745);
			this->Controls->Add(this->button_rule);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_pas);
			this->Controls->Add(this->button_brat);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		// Инициализация массива чисел от 1 до 11
		for (int i = 1; i <= 11; i++)
		{
			numbers->Add(i);
		}
		currentLabelIndex = 0; // Сброс индекса текущей метки
		// Генерация случайного индекса
		Random^ rand = gcnew Random();
		int randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		int randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		this->labels[currentLabelIndex]->Visible = true;
		currentLabelIndex++; // Переходим к следующей метке
		sumpl += randomNumber;
		kartiplstr = kartiplstr + randomNumber.ToString() + ", ";
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка

		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];
		int pervia_karta_op = numbers[randomIndex];
		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = "?";
		this->labels[currentLabelIndex]->Visible = true;
		currentLabelIndex++; // Переходим к следующей метке
		sumopopen += randomNumber;
		kartiopstr = kartiopstr + randomNumber.ToString() + ", ";
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка

		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		this->labels[currentLabelIndex]->Visible = true;
		currentLabelIndex++; // Переходим к следующей метке
		sumpl += randomNumber;
		label1->Text = "Сумма игрока: " + sumpl.ToString();
		kartiplstr = kartiplstr + randomNumber.ToString() + ", ";
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка

		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		this->labels[currentLabelIndex]->Visible = true;
		currentLabelIndex++; // Переходим к следующей метке
		sumopopen += randomNumber;
		sumophide += randomNumber;
		label2->Text = "Сумма противника: ? + " + sumophide.ToString();
		kartiopstr = kartiopstr + randomNumber.ToString() + ", ";
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка

	}
		   void InitializeLabels()
		   {
			   labels = gcnew array<Button^>(14); // Создаем массив из 14 меток
			   int startX = 1; // Начальная позиция по X
			   int startY = 230; // Начальная позиция по Y для нижнего ряда
			   int offsetX = 125; // Смещение по X для каждой метки
			   int offsetY = 225; // Смещение по Y для верхнего ряда
			   for (int i = 0; i < 7; i++)
			   {
				   // Четные номера (0, 2, 4, ...) — нижний ряд
				   labels[i * 2] = (gcnew Button());
				   labels[i * 2]->Location = System::Drawing::Point(startX + (i * offsetX), startY); // Нижний ряд
				   labels[i * 2]->Size = System::Drawing::Size(117, 183);
				   this->labels[i * 2]->Visible = false;
				   this->labels[i * 2]->Enabled = false;
				   this->labels[i * 2]->BackColor = System::Drawing::Color::White; // Установить цвет фона
				   this->labels[i * 2]->ForeColor = System::Drawing::Color::Black; // Установить цвет текста
				   this->labels[i * 2]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				   this->labels[i * 2]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					   static_cast<System::Byte>(204)));
				   this->Controls->Add(labels[i * 2]); // Добавляем метки на форму
				   


				   // Нечетные номера (1, 3, 5, ...) — верхний ряд
				   labels[i * 2 + 1] = (gcnew Button());
				   labels[i * 2 + 1]->Location = System::Drawing::Point(startX + (i * offsetX), startY - offsetY); // Верхний ряд
				   labels[i * 2 + 1]->Size = System::Drawing::Size(117, 183);
				   this->labels[i * 2 + 1]->Visible = false;
				   this->labels[i * 2 + 1]->Enabled = false;
				   this->labels[i * 2 + 1]->BackColor = System::Drawing::Color::White; // Установить цвет фона
				   this->labels[i * 2 + 1]->ForeColor = System::Drawing::Color::Black; // Установить цвет текста
				   this->labels[i * 2 + 1]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				   this->labels[i * 2 + 1]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					   static_cast<System::Byte>(204)));
				   this->Controls->Add(labels[i * 2 + 1]); // Добавляем метки на форму
			   }
			   
		   };
	private: System::Void button_brat_Click(System::Object^ sender, System::EventArgs^ e) {
		// Генерация случайного индекса
		Random^ rand = gcnew Random();
		int randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1
		int randomNumber;

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		this->labels[currentLabelIndex]->Visible = true;
		currentLabelIndex++; // Переходим к следующей метке
		if (fop == 0) currentLabelIndex++;
		sumpl += randomNumber;
		label1->Text = "Сумма игрока: " + sumpl.ToString();
		kartiplstr = kartiplstr + randomNumber.ToString() + ", ";
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1
		if (fop == 1) {
			if (sumopopen < 17) {
				// Получение случайного числа
				randomNumber = numbers[randomIndex];

				// Обновление текста текущей метки
				labels[currentLabelIndex]->Text = randomNumber.ToString();
				this->labels[currentLabelIndex]->Visible = true;
				currentLabelIndex++; // Переходим к следующей метке	
				sumophide += randomNumber;
				sumopopen += randomNumber;
				label2->Text = "Сумма противника: ? + " + sumophide.ToString();
				kartiopstr = kartiopstr + randomNumber.ToString() + ", ";
				// Удаление элемента из списка
				numbers->RemoveAt(randomIndex); // Удаление элемента из списка
			}
			else {
				labels[currentLabelIndex]->Text = "Противник спасовал";
				this->labels[currentLabelIndex]->Visible = true;
				currentLabelIndex++;
				fop = 0;
			}
		}
		if (sumpl>20) this->button_brat->Enabled = false;
		vivodrez();
	}
private: System::Void button_pas_Click(System::Object^ sender, System::EventArgs^ e) {
	
	labels[currentLabelIndex]->Text = "Вы спасовали";
	this->labels[currentLabelIndex]->Visible = true;
	this->button_pas->Enabled = false;
	this->button_brat->Enabled = false;
	currentLabelIndex++;
	// Генерация случайного индекса
	Random^ rand = gcnew Random();
	int randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1
	int randomNumber;
	while (sumopopen < 17) {
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		this->labels[currentLabelIndex]->Visible = true;
		currentLabelIndex++; 
		currentLabelIndex++;
		sumophide += randomNumber;
		sumopopen += randomNumber;
		label2->Text = "Сумма противника: ? + " + sumophide.ToString();
		kartiopstr = kartiopstr + randomNumber.ToString() + ", ";
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
	}		
	if (fop == 1) {
		labels[currentLabelIndex]->Text = "Противник спасовал";
		this->labels[currentLabelIndex]->Visible = true;
		fop = 0;
	}
	fp = 0;
	vivodrez();
}
private: System::Void button_rule_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("'21' с 11 картами – стратегическая карточная игра.Особенность игры в том, что все карты у противника, кроме первой, видно и игрок может предполагать какие карты остались в колоде\
. У кого сумма ближе к 21 очку тот и победил.", "Правила", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   void vivodrez() {
		   if (fp == 0 && fop == 0) {
			   
			   String^ rez = "Карты противника: " + kartiopstr + sumopopen + "/21" + "\nКарты игрока: " + kartiplstr + sumpl + "/21" + "\n";
			   if (sumpl > 21 && sumopopen < 22)
				   MessageBox::Show(rez+ "У вас перебор.Вы проиграли", "Результаты", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   else if (sumpl < 22 && sumopopen > 21)
				   MessageBox::Show(rez+"У противника перебор. Вы выиграли", "Результаты", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   else if (sumpl > 21 && sumopopen > 21 && sumpl < sumopopen)
				   MessageBox::Show(rez+ "У вас и противника перебор.Вы выиграли, так как имеете меньше очков", "Результаты", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   else if (sumpl > 21 && sumopopen > 21 && sumpl > sumopopen)
				   MessageBox::Show(rez+ "У вас и противника перебор.Вы проиграли, так как имеете больше очков", "Результаты", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   else if (sumpl < 22 && sumopopen < 22 && sumpl < sumopopen)
				   MessageBox::Show(rez+ "Вы проиграли. Противник ближе к 21 очку", "Результаты", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   else if (sumpl < 22 && sumopopen < 22 && sumpl > sumopopen)
				   MessageBox::Show(rez+ "Вы выиграли. Вы ближе к 21 очку", "Результаты", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   }
	   }
};
}
