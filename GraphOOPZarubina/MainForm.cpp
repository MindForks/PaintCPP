#include "MainForm.h"


[CourseWork::STAThread]
int Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CourseWork::MainForm);
	return 0;
}
