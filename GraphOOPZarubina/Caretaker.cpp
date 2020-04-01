#include "Caretaker.h"


using namespace System;
using namespace System::Collections;
using namespace System::IO;
using namespace System::Runtime::Serialization;

namespace GraphicsCpp {

	void Caretaker::AddSnaphot(Figure^ figure, System::String^ snapshotName)
	{
		Snapshot^ snap = gcnew Snapshot(figure->Copy(), snapshotName);
		this->snaphotList->Add(snap);

		FileStream ^ fs = gcnew FileStream("out.txt", FileMode::Create, FileAccess::Write);
		XmlSerializer^ formatter = gcnew XmlSerializer(Snapshot::typeid);
		formatter->Serialize(fs, snap);
		fs->Close();
	}	

	Figure^ Caretaker::RestoreFromSnapshot(Snapshot ^ snap)
	{
		FileStream ^ fs = gcnew FileStream("out.txt", FileMode::OpenOrCreate);
		XmlSerializer^ formatter = gcnew XmlSerializer(Snapshot::typeid);
		Snapshot ^  des = (Snapshot ^)formatter->Deserialize(fs);
		fs->Close();

		return des->figure;
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