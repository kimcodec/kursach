#include "MyForm.h"
#include "Author.h"
#include "ProgrammInfo.h"

// Необходимые адресные пространства:
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] // Атрибут, задающий для точки входа однопоточную модель выполнения

// Передача в главную функцию CLR-массива строковых аргументов
int main(array<String^>^ args)
{
	Application::EnableVisualStyles(); // Включаем визуальные стили
	// Метод, задающий технологию визуализации графического интерфейса, когда
	// элементы управления используют класс GDI, основанный на TextRenderer:
	Application::SetCompatibleTextRenderingDefault(false);
	// запуск приложения с заданной формы в качестве главного окна
	kursach::MyForm form; Application::Run(% form);

	return 0; // нормальное завершение программы
}