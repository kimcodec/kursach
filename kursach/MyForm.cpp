#include "MyForm.h"
#include "Author.h"
#include "ProgrammInfo.h"

// ����������� �������� ������������:
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] // �������, �������� ��� ����� ����� ������������ ������ ����������

// �������� � ������� ������� CLR-������� ��������� ����������
int main(array<String^>^ args)
{
	Application::EnableVisualStyles(); // �������� ���������� �����
	// �����, �������� ���������� ������������ ������������ ����������, �����
	// �������� ���������� ���������� ����� GDI, ���������� �� TextRenderer:
	Application::SetCompatibleTextRenderingDefault(false);
	// ������ ���������� � �������� ����� � �������� �������� ����
	kursach::MyForm form; Application::Run(% form);

	return 0; // ���������� ���������� ���������
}