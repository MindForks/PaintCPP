#include "Caretaker.h"


using namespace System;
using namespace System::Collections;
using namespace System::IO;
using namespace System::Runtime::Serialization;

using namespace System::Runtime::Serialization::Formatters;
using namespace System::Runtime::Serialization::Formatters::Soap;

namespace GraphicsCpp {

	void Caretaker::AddSnaphot(Figure^ figure, System::String^ snapshotName)
	{
		this->snaphotList->Add(gcnew Snapshot(figure->Copy(), snapshotName));
		//std::ofstream out("thefile.txt");;
		////infile.open("hello.dat", std::ios::binary | std::ios::out);
		//out << figure;
		//out.close();

		FileStream ^ fs = gcnew FileStream("out.txt", FileMode::Create, FileAccess::Write);
		XmlSerializer^ formatter = gcnew XmlSerializer(Figure::typeid);
		formatter->Serialize(fs, figure);
		fs->Close();
		//SoapFormatter ^ bfmProperty = gcnew SoapFormatter;

		//FileStream ^ stmProperties = gcnew FileStream("out.txt", FileMode::Create, FileAccess::Write);
		//bfmProperty->Serialize(stmProperties, figure);
		//stmProperties->Close();


	}	

	Figure^ Caretaker::RestoreFromSnapshot(Snapshot ^ snap)
	{
		/*SoapFormatter ^ bfmProperty = gcnew SoapFormatter;

		FileStream ^ stmPropertiesRead = gcnew FileStream("out.txt", FileMode::Open, FileAccess::Read);
		Figure ^  des = (Figure ^)bfmProperty->Deserialize(stmPropertiesRead);
		stmPropertiesRead->Close();*/

		FileStream ^ fs = gcnew FileStream("out.txt", FileMode::OpenOrCreate);
		XmlSerializer^ formatter = gcnew XmlSerializer(Figure::typeid);
		Figure ^  des = (Figure ^)formatter->Deserialize(fs);
		fs->Close();

		return des;
		//return snap->figure;
	}

	std::ostream & operator<<(std::ostream & o_stream, const Figure ^ r)
	{
		//auto pos = r->IsSelected;
		return o_stream;
	}

	std::istream & operator>>(std::istream & i_stream, Figure ^ r)
	{
		return i_stream;
	}
}