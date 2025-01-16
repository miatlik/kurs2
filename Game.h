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
			fop = 1;
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
	private: System::Windows::Forms::Button^ button1;
	int currentLabelIndex; // Индекс текущей метки для обновления
	private: int sumophide; // Сумма противника без первой карты
	private: int sumopopen; // Сумма противника с первой картой
	private: int sumpl; // Сумма игрока
	private: int fop;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->button_brat = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_brat
			// 
			this->button_brat->Location = System::Drawing::Point(12, 648);
			this->button_brat->Name = L"button_brat";
			this->button_brat->Size = System::Drawing::Size(110, 47);
			this->button_brat->TabIndex = 12;
			this->button_brat->Text = L"Взять карту";
			this->button_brat->UseVisualStyleBackColor = true;
			this->button_brat->Click += gcnew System::EventHandler(this, &Game::button_brat_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 648);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 47);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Спасовать";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1335, 390);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1335, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"label2";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1576, 745);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
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
			currentLabelIndex++; // Переходим к следующей метке
		sumpl += randomNumber;
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];
		int pervia_karta_op = numbers[randomIndex];
		// Обновление текста текущей метки
			labels[currentLabelIndex]->Text = "?";
		
			currentLabelIndex++; // Переходим к следующей метке
		sumopopen += randomNumber;
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		currentLabelIndex++; // Переходим к следующей метке
		sumpl += randomNumber;
		label1->Text = "Сумма игрока: " + sumpl.ToString();
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка

		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		labels[currentLabelIndex]->Text = randomNumber.ToString();
		currentLabelIndex++; // Переходим к следующей метке
		sumopopen += randomNumber;
		sumophide += randomNumber;
		label2->Text = "Сумма противника: ? + " + sumophide.ToString();
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		
	}
		   void InitializeLabels()
		   {
			   labels = gcnew array<Button^>(12); // Создаем массив из 12 меток
			   int startX = 8; // Начальная позиция по X
			   int startY = 230; // Начальная позиция по Y для нижнего ряда
			   int offsetX = 170; // Смещение по X для каждой метки
			   int offsetY = 225; // Смещение по Y для верхнего ряда
			   for (int i = 0; i < 6; i++)
			   {
				   // Четные номера (0, 2, 4, ...) — нижний ряд
				   labels[i * 2] = (gcnew Button());
				   labels[i * 2]->Location = System::Drawing::Point(startX + (i * offsetX), startY); // Нижний ряд
				   labels[i * 2]->Size = System::Drawing::Size(140, 200);
				   this->Controls->Add(labels[i * 2]); // Добавляем метки на форму

				   // Нечетные номера (1, 3, 5, ...) — верхний ряд
				   labels[i * 2 + 1] = (gcnew Button());
				   labels[i * 2 + 1]->Location = System::Drawing::Point(startX + (i * offsetX), startY - offsetY); // Верхний ряд
				   labels[i * 2 + 1]->Size = System::Drawing::Size(140, 200);
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
			currentLabelIndex++; // Переходим к следующей метке
			if (fop==0) currentLabelIndex++;
		sumpl += randomNumber;
		label1->Text = "Сумма игрока: " + sumpl.ToString();
		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1
		if (fop == 1) {
			if (sumopopen < 17) {
				// Получение случайного числа
				randomNumber = numbers[randomIndex];

				// Обновление текста текущей метки
				labels[currentLabelIndex]->Text = randomNumber.ToString();
				currentLabelIndex++; // Переходим к следующей метке	
				sumophide += randomNumber;
				sumopopen += randomNumber;
				label2->Text = "Сумма противника: ? + " + sumophide.ToString();
				// Удаление элемента из списка
				numbers->RemoveAt(randomIndex); // Удаление элемента из списка
			}
			else {
				labels[currentLabelIndex]->Text = "Противник спасовал";
				currentLabelIndex++;
				fop = 0;
			}
		}
	
	}

};
}
